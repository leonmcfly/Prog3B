#include "spaceship.h"
#include "asteroid.h"



Spaceship::Spaceship(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot)
: PhysicsObject(initialPos, texturePath_, 1.0, 0.0)
, health_(maxHealth_)
{}

void Spaceship::update()
{

    if(IsKeyDown(KEY_W))
        setAccelerattion(raylib::Vector2{0.0f, -thrust}.Rotate(DEG2RAD * rot_)); // Attention: Rotate parameter is radians, not degrees!
    if(IsKeyDown(KEY_A))
        rotate(-rotationSpeed_);
    if(IsKeyDown(KEY_D))
        rotate(rotationSpeed_);


    PhysicsObject::update();
}

int Spaceship::getHealth() const
{
    return health_;
}

void Spaceship::handleCollision(std::shared_ptr<GameObject> other) {
    std::shared_ptr<Asteroid> asteroid = std::dynamic_pointer_cast<Asteroid>(other);

    if(asteroid != nullptr){
        health_ = health_ -5;
        asteroid->markForDeletion();
    }
}
