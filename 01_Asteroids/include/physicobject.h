#pragma once

#include "gameobject.h"
#include "spaceship.h"

class PhysicsObject : public GameObject
{
protected:
    raylib::Vector2 sspeed_;

public:
    PhysicsObject(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot)
    : GameObject(initialPos, texturePath, initialScale, initialRot){};
    void setSpaceshipSpeed(raylib::Vector2 speed);
    virtual void update() override;

};