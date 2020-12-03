#include "Huffmann.h"

Huffmann::Huffmann()
{
    OutlineBox1.setSize(sf::Vector2f(900,700));
    OutlineBox1.setPosition(sf::Vector2f(50,50));
    OutlineBox1.setFillColor(sf::Color::Transparent);
    OutlineBox1.setOutlineColor(sf::Color::Black);
    OutlineBox1.setOutlineThickness(10);
    OutlineBox2.setSize(sf::Vector2f(900,100));
    OutlineBox2.setPosition(sf::Vector2f(50,50));
    OutlineBox2.setFillColor(sf::Color::Transparent);
    OutlineBox2.setOutlineColor(sf::Color::Black);
    OutlineBox2.setOutlineThickness(10);
    text.setCharacterSize(30);
    if(!font.loadFromFile("DejaVuSans.ttf"))
    {
     //
    }
    text.setFont(font);
    text.setFillColor(sf::Color::Black);
    text.setPosition(sf::Vector2f(250,60));
    text.setString(" Input :");
   rec.setSize(sf::Vector2f(400,35));
    rec.setPosition(sf::Vector2f(380,80));
    rec.setOutlineColor(sf::Color::Black);
    rec.setFillColor(sf::Color::Transparent);
    rec.setOutlineThickness(3);


}
void Huffmann::setData()
{
    std::cout<<" The characters and freqencies are :";
    std::string t;
    int characterFrequency [128];
    //string input;
    std::vector<char> arr;
    std::vector<int> freq;
    for(int i=0 ;i<128;i++){
        characterFrequency[i] = 0;
    }
    //cout<< " Enter the string ";

    //cin>>input;
    for(int i=0;i<t.length();i++){
        characterFrequency[(int)t[i]]++;
    }
    for(int i=0 ;i<128;i++){
        if(characterFrequency[i]>0){
            arr.push_back((char)i);
            freq.push_back(characterFrequency[i]);
        }
    }

    /*int x=120;
    for(int i=0;i<7;i++)
    {
        recn[i].setPosition(sf::Vector2f(x,200));
        recn[i].setSize(sf::Vector2f(30,40));
        recn[i].setFillColor(sf::Color::Transparent);
        recn[i].setOutlineColor(sf::Color::Black);
        recn[i].setOutlineThickness(3);
        x=x+90;
        //y=y+200;

    }*/
    int x=120;
    for(int i=0;i<arr.size();i++)
    {
        recn[i].setPosition(sf::Vector2f(x,200));
        recn[i].setSize(sf::Vector2f(30,40));
        recn[i].setFillColor(sf::Color::Transparent);
        recn[i].setOutlineColor(sf::Color::Black);
        recn[i].setOutlineThickness(3);
        x=x+90;
    }
}
void Huffmann::draw(sf:: RenderWindow& window)
{
    window.draw(OutlineBox1);
    window.draw(OutlineBox2);
    window.draw(text);
    window.draw(rec);
    for(int i=0;i<arr.size();i++)
    {
        window.draw(recn[i]);
    }
}

