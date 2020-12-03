#include "Visualizer.h"
Visualizer::Visualizer():window(sf::VideoMode(1000,900),"Visualizer"),

setDataButton("Set",sf::Vector2f(120,50),20,sf::Color::Green,sf::Color::Black),
treeButton("Tree",sf::Vector2f(120,50),20,sf::Color::Green,sf::Color::Black ) ,
boxButton(" ",sf::Vector2f(400,35),20,sf::Color::White,sf::Color::Cyan) ,textbox1(30,sf::Color::Red,false)
{
    if(!font.loadFromFile("DejaVuSans.ttf"))
    {
        //error
    }
    setDataButton.setPosition(sf::Vector2f(55,55));
    setDataButton.setFont(font);
    treeButton.setPosition(sf::Vector2f(825,55));
    treeButton.setFont(font);
    boxButton.setPosition(sf::Vector2f(380,80));
    boxButton.setFont(font);
    textbox1.setFont(font);
    textbox1.setPosition(sf::Vector2f(400,75));
    textbox1.setLimit(true,22);// 22 characters can be entered
    }

void Visualizer:: run()
{
    while(window.isOpen())
    {
        handleUserInput();
        render();
    }
}
void Visualizer::handleUserInput()
{
    //std::vector<char>text;
    sf::Event event;
     while(window.pollEvent(event))
    {
        switch(event.type)
        {
        case sf::Event::Closed:
            window.close();
            break;
        case sf::Event::TextEntered:
            textbox1.typedOn(event);
            //text.push_back(static_cast<char>(event.text.unicode));
            break;
          case sf::Event::EventType::MouseMoved:
        {
            if(setDataButton.isMouseOver(window))
            {
                setDataButton.setBackColor(sf::Color::Red);

            }
           else
            {
                setDataButton.setBackColor(sf::Color::Green);
            }

            if(treeButton.isMouseOver(window))
            {
                treeButton.setBackColor(sf::Color::Red);
            }
            else
            {
                treeButton.setBackColor(sf::Color::Green);
            }
            if(boxButton.isMouseOver(window))
            {
                boxButton.setBackColor(sf::Color::Cyan);
            }
            else
            {
                boxButton.setBackColor(sf::Color::White);
            }
            break;
        }
        case  sf::Event::EventType::MouseButtonPressed:
        {
            if(boxButton.isMouseOver(window))
            {
                textbox1.setSelected(true);
            }
               else if (setDataButton.isMouseOver(window))
              {
                 // textbox1.getInput();
                  textbox1.textdisplay(arr,freq );

              }
              else if (treeButton.isMouseOver(window))
              {
                  //

              }
              else
              {
                  textbox1.setSelected(false);
              }
          }
          break;
          }


}
}
void Visualizer::render()
{
    window.clear(sf::Color::White);
    setDataButton.drawTo(window);
    treeButton.drawTo(window);
    boxButton.drawTo(window);
    textbox1.drawTo(window);
//    text.drawTo(window);
    H.draw(window);
    window.display();
}
