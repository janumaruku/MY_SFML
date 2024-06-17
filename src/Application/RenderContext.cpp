/*
** EPITECH PROJECT, 2024
** MY SFML
** File description:
** RenderContext class methods
*/

#include "../../include/Application/RenderContext.hpp"

RenderContext::RenderContext(sf::RenderWindow &window): _window(window)
{
}

void RenderContext::drawRectangle(sf::RectangleShape shape)
{
    _window.draw(shape);
}
