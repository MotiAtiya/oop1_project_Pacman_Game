#pragma once
#include "Objects/Gift.h"

class TimeGift : public Gift
{
public:
  TimeGift(const sf::Vector2f& position, float width, float height)
      : Gift(ResourceManager::Resource().getObjTexture(ObjIndex::TIMER), position, width, height) { }

  void collide(Pacman& pacman) override
  {
    delObj();
    pacman.collide(*this);
    Sound::Sounds().Play(SoundIndex::GIFTS);
  }
};
