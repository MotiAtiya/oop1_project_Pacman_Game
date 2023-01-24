#pragma once
#include "Objects/Gift.h"

class FreezeGift : public Gift
{
public:
  FreezeGift(const sf::Vector2f& position, float width, float height)
      : Gift(ResourceManager::Resource().getObjTexture(ObjIndex::FREEZE), position, width, height) { }

  void collide(Pacman& pacman) override
  {
    delObj();
    pacman.collide(*this);
    Sound::Sounds().Play(SoundIndex::GIFTS);
  }
};
