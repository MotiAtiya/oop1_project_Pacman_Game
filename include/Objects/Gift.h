#pragma once
#include "Erasable.h"

//class Erasable;

class Gift : public Erasable
{
public:
  Gift(const sf::Vector2f&, float, float);
//	~Gift();
  void chooseGift() const;

  void collide(Object& obj) override { }
  void collide(Pacman& pacman) override
  {
    delObj();
    pacman.collide(*this);
    Sound::Sounds().Play(SoundIndex::GIFTS);

//    RandomGift();
  }
private:

};