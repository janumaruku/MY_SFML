// #include <SFML/Graphics.hpp>
#include <iostream>
#include "include/Application/Application.hpp"

int main(void)
{
    Application app;
    app.runApp();
    return 0;
}
// #include <SFML/Graphics.hpp>
// #include <iostream>

// int main(void)
// {
//     sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//     sf::CircleShape shape(100.f);

//     shape.setFillColor(sf::Color::Green);
//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }
//         window.clear();
//         window.draw(shape);
//         window.display();
//         std::string a = "ldsjfkl";
//     }
//     return 0;
// }

