#ifndef VISUALIZER_H
#define VISUALIZER_H
#include<SFML/Graphics.hpp>
//#include <vector>
# include "Huffmann.h"
#include "Button.h"
#include "Textbox.h"

class Visualizer
{
private:
        sf::RenderWindow window;
        Button setDataButton , treeButton , boxButton;
        Textbox textbox1;
        sf::Font font;
        std::vector<char>arr;
        std::vector<int>freq;
        Huffmann H;
public:
        Visualizer();
        void run();
        void handleUserInput();
        void drawtextbox(sf::RenderWindow &);
        void render();

};

#endif // VISUALIZER_H
