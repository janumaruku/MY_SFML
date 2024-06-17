/*
** EPITECH PROJECT, 2024
** Application class
** File description:
** Application luncher class
*/

#include "../../include/Application/Application.hpp"

Application::Application(): _window(sf::VideoMode(200, 200), "SFML works!"),
    _rect((sf::Vector2f){100, 100})
{
    _rect.setPosition({10, 10});
}

void Application::runApp(void)
{
    while (this->_window.isOpen())
    {
        sf::Event event;
        while (this->_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                this->_window.close();
        }
        this->_window.clear();
        _window.draw(_rect);
        this->_window.display();
    }
}
