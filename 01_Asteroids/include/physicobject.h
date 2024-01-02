#pragma once

#include "gameobject.h"

class PhysicsObject : public GameObject
{
protected:
    raylib::Vector2 sspeed_;

public:
    PhysicsObject(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot);
    void setSpaceshipSpeed(raylib::Vector2 speed);
    virtual void update() override;

};