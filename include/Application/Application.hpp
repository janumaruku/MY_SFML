/*
** EPITECH PROJECT, 2024
** Application class
** File description:
** Window basic widget
*/

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "../Widgets/Widget.hpp"

class Application {
    public:
        Application();
        ~Application() = default;
        void runApp(void);

    protected:
    private:
        sf::RenderWindow _window;
        // Widget _root_widget;
        sf::RectangleShape _rect;
};

#pragma once
