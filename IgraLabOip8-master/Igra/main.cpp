#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Main.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System.hpp>
using namespace sf;
int static ground = 600;

class PLAYER {

    public:

    float dx,dy;
    FloatRect rect;
    bool onGround;
    Sprite sprite;
    float currentFrame;


    PLAYER(Texture &image)
    {
    Vector2f targetSize(100.0f, 100.0f);
    sprite.setTexture(image);
    rect = FloatRect(0,430,40,50);
    sprite.setScale(targetSize.x/sprite.getLocalBounds().width, targetSize.y/sprite.getLocalBounds().height);

    dx=dy=0;
    currentFrame = 0;
    }
    void update(float time)
    {

    rect.left += dx * time;
    //Collision(0);

    if (!onGround)
    dy=dy+0.0005*time;
    rect.top += dy*time;
    onGround=false;
    //Collision(1);
    //currentFrame += 0.005*time;
    if (rect.top > ground){
        rect.top = ground;
        dy = 0;
        onGround = true;
    }
    sprite.setPosition(rect.left, rect.top);
    dx=0;
    }
};



int main()
{
    Image hero;

    hero.loadFromFile("/home/02/lucenko/Рабочий стол/ИГРА/IgraLabOip8-master/Igra/1.png");
    RenderWindow window(VideoMode(1080, 720), "SD");

    CircleShape shape(100.f);
    shape.setFillColor(Color::Blue);

    Texture t;
    t.loadFromImage(hero);


    //Sprite s;
    PLAYER p(t);
    //s.setScale(targetSize.x/s.getLocalBounds().width, targetSize.y/s.getLocalBounds().height);

    Clock clock;

    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asMicroseconds();
        clock.restart();
        time = time / 800;
        Event event;
    while (window.pollEvent(event))
    {
        if (event.type == Event::Closed)
        window.close();
    }

    if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        p.dx = -0.1;
        //s.move(-0.0005*time,0);
    }

    if (Keyboard::isKeyPressed(Keyboard::Right))
    {
        p.dx = 0.1;
        //s.move(0.0005*time,0);
    }
    if (Keyboard::isKeyPressed(Keyboard::Up)){
        if(p.onGround){
            p.dy = -0.4;
            p.onGround = false;
            }
    }
        p.update(time);

        window.clear();
        window.draw(p.sprite);
        window.display();
    }
    return 0;
}
