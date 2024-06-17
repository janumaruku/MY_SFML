/*
** EPITECH PROJECT, 2024
** MY SFML
** File description:
** RenderContext class
*/

#include <SFML/Graphics.hpp>

class RenderContext {
    public:
        RenderContext(sf::RenderWindow &window);
        ~RenderContext() = default;
        void drawRectangle(sf::RectangleShape shape);

    protected:
    private:
        sf::RenderWindow &_window;
};

#pragma once
