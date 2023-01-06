#pragma once
#include "Button.h"
#include "../Colors.h"

//class Batton;

class ExitGame : public Button
{
public:
	ExitGame(sf::Font& font, float width, float height)
	: Button("Exit Game", font, { width / 2 , height / 1.3f }, height / 30, SoftYellow) { }

	void action(sf::RenderWindow& window) override 
	{
		window.close();
	}

};