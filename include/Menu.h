#pragma once
#include <vector>
#include "Buttons/Button.h"

class Menu {
public:
  Menu(float, float);
  void draw(sf::RenderWindow&) const;
  bool handleClick(const sf::Vector2f &loc, sf::RenderWindow &window, Controller &c) const;

private:
  sf::Text m_menu;
  std::vector<std::unique_ptr<Button>> m_buttons;
};