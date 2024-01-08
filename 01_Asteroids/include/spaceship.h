#pragma once

#include "physicobject.h"

#include <list>

class Spaceship : public PhysicsObject{
private:
    inline static const std::string texturePath_ = "./resources/spaceship.png";
    const float movementSpeed_ = 4.0;
    const float rotationSpeed_ = 4.5;
    const int maxHealth_ = 100;
    float thrust = 100;

    int health_;

public:
    Spaceship(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot);

    void update() override;

    int getHealth() const;
};