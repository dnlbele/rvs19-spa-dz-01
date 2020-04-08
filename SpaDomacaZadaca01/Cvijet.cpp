#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;
}

void Cvijet::draw() const
{

	sf::CircleShape shape(20.f, 8);
	shape.rotate(20.f);
	shape.setFillColor(sf::Color(250, 250, 000));
	shape.setOutlineThickness(30.f);
	shape.setOutlineColor(sf::Color(255, 17, 0));
	shape.setPosition(380.f, 240.f);
	window->draw(shape);

	sf::RectangleShape line(sf::Vector2f(250.f, 10.f));
	line.setPosition(400.f, 310.f);
	line.rotate(90.f);
	window->draw(line);

	sf::RectangleShape zemlja1(sf::Vector2f(120.f, 50.f));
	zemlja1.setFillColor(sf::Color(100, 250, 50));
	zemlja1.setSize(sf::Vector2f(300.f, 300.f));
	zemlja1.setPosition(500.f, 500.f);
	window->draw(zemlja1);

	sf::RectangleShape zemlja2(sf::Vector2f(120.f, 50.f));
	zemlja2.setFillColor(sf::Color(100, 250, 50));
	zemlja2.setPosition(400.f, 500.f);
	zemlja2.setSize(sf::Vector2f(300.f, 300.f));
	window->draw(zemlja2);

	sf::RectangleShape zemlja3(sf::Vector2f(120.f, 50.f));
	zemlja3.setFillColor(sf::Color(100, 250, 50));
	zemlja3.setPosition(300.f, 500.f);
	zemlja3.setSize(sf::Vector2f(300.f, 300.f));
	window->draw(zemlja3);

	sf::RectangleShape zemlja4(sf::Vector2f(120.f, 50.f));
	zemlja4.setFillColor(sf::Color(100, 250, 50));
	zemlja4.setPosition(200.f, 500.f);
	zemlja4.setSize(sf::Vector2f(300.f, 300.f));
	window->draw(zemlja4);

	sf::RectangleShape zemlja5(sf::Vector2f(120.f, 50.f));
	zemlja5.setFillColor(sf::Color(100, 250, 50));
	zemlja5.setPosition(100.f, 500.f);
	zemlja5.setSize(sf::Vector2f(300.f, 300.f));
	window->draw(zemlja5);

	sf::RectangleShape zemlja6(sf::Vector2f(120.f, 50.f));
	zemlja6.setFillColor(sf::Color(100, 250, 50));
	zemlja6.setPosition(0.f, 500.f);
	zemlja6.setSize(sf::Vector2f(300.f, 300.f));
	window->draw(zemlja6);

	sf::CircleShape sunce(50.f);
	sunce.setFillColor(sf::Color(250, 250, 000));
	window->draw(sunce);

	sf::CircleShape trn(20.f, 3);
	trn.setPosition(430.f, 320.f);
	trn.setFillColor(sf::Color(80, 80, 80));
	trn.rotate(90.f);
	window->draw(trn);

	sf::CircleShape trn2(20.f, 3);
	trn2.setPosition(430.f, 380.f);
	trn2.setFillColor(sf::Color(80, 80, 80));
	trn2.rotate(90.f);
	window->draw(trn2);

	sf::CircleShape trn3(20.f, 3);
	trn3.setPosition(430.f, 455.f);
	trn3.setFillColor(sf::Color(80, 80, 80));
	trn3.rotate(90.f);
	window->draw(trn3);

	sf::CircleShape trn4(20.f, 3);
	trn4.setPosition(408.f, 360.f);
	trn4.setFillColor(sf::Color(80, 80, 80));
	trn4.rotate(150.f);
	window->draw(trn4);

	sf::CircleShape trn5(20.f, 3);
	trn5.setPosition(408.f, 420.f);
	trn5.setFillColor(sf::Color(80, 80, 80));
	trn5.rotate(150.f);
	window->draw(trn5);

	sf::CircleShape trn6(20.f, 3);
	trn6.setPosition(408.f, 470.f);
	trn6.setFillColor(sf::Color(80, 80, 80));
	trn6.rotate(150.f);
	window->draw(trn6);

}

