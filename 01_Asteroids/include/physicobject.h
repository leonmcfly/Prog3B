#pragma once

#include "gameobject.h"

class PhysicsObject : public GameObject
{
protected:
    raylib::Vector2 sspeed_;
    raylib::Vector2 acceleration_;
    constexpr static float friction = 0.05f;

public:
    PhysicsObject(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot);
    void setSpaceshipSpeed(raylib::Vector2 speed);
    void update() override;
    void setAccelerattion(raylib::Vector2 acceleration);
};