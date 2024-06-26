#pragma once
#include "Objects/Gift.h"

// Inheritance class for the game object of Gift type - Super Pacman Gift

class SuperPGift : public Gift
{
public:
  SuperPGift(const sf::Vector2f& position, float width, float height)
      : Gift(ResourceManager::Resource().getObjTexture(ObjIndex::GIFT), position, width, height) { }

  //-------------------------------------------------------------------
  void collide(Pacman& pacman) override
  {
    delObj();
    pacman.collide(*this);
    Sound::Sounds().Play(SoundIndex::GIFTS);
  }
};
