#ifndef HUFFMANN_H
#define HUFFMANN_H
#include<iostream>
#include <SFML/Graphics.hpp>

class Huffmann
{
private:
    sf::RenderWindow window;
    sf::RectangleShape OutlineBox1;
    sf::RectangleShape OutlineBox2;
    sf::Font font;
    sf::Text text;
    sf::RectangleShape rec;
    sf::RectangleShape recn[10];
    std::vector<char>arr;

public:
        Huffmann();
        void setData();
        void draw(sf::RenderWindow&);

};

#endif // HUFFMANN_H
