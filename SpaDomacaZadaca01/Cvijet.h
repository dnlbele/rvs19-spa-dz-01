#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;
class Cvijet
{

public:
	Cvijet(sf::RenderWindow* window);
	void draw()const;



private:
	sf::RenderWindow* window;


};
