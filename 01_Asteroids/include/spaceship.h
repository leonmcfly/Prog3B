#pragma once

#include "physicobject.h"
#include "gameobject.h"

#include <list>

class Spaceship : public PhysicsObject{
private:
    inline static const std::string texturePath_ = "./resources/spaceship.png";
    const float movementSpeed_ = 4.0;
    const float rotationSpeed_ = 4.5;
    const int maxHealth_ = 100;

    int health_;

public:
    Spaceship(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot)
    : PhysicsObject(initialPos, texturePath, initialScale, initialRot){
        setSpaceshipSpeed({0,5});
    };

    void update() override;

    int getHealth() const;
};