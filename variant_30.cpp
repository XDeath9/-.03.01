#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>

using namespace sf;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    const int WIDTH = 800;
    const int HEIGHT = 600;
    const int STEP = 2;

    RenderWindow window(VideoMode(WIDTH, HEIGHT), "Броуновское движение");
    window.setFramerateLimit(200);

    // Холст, чтобы след оставался
    RenderTexture canvas;
    canvas.create(WIDTH, HEIGHT);
    canvas.clear(Color::Black);

    // Начальная точка
    int x = WIDTH / 2;
    int y = HEIGHT / 2;

    RectangleShape pixel(Vector2f(2, 2));
    pixel.setFillColor(Color::White);

    while (window.isOpen()) {
        Event event;

        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        // Рисуем текущую точку
        pixel.setPosition(static_cast<float>(x), static_cast<float>(y));
        canvas.draw(pixel);

        // Случайное направление
        switch (rand() % 4) {
            case 0: x += STEP; break;
            case 1: x -= STEP; break;
            case 2: y += STEP; break;
            case 3: y -= STEP; break;
        }

        // Не даем выйти за границы окна
        if (x < 0) x = 0;
        if (x >= WIDTH) x = WIDTH - STEP;

        if (y < 0) y = 0;
        if (y >= HEIGHT) y = HEIGHT - STEP;

        canvas.display();

        window.clear();
        Sprite sprite(canvas.getTexture());
        window.draw(sprite);
        window.display();
    }

    return 0;
}
