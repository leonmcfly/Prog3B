#include "physicobject.h"
#include "spaceship.h"
#include <iostream>



void PhysicsObject::setSpaceshipSpeed(raylib::Vector2 speed){
    sspeed_ = speed;
}

void PhysicsObject::update() {
    float dt = 1.0/60.0;
    std::cout << dt << std::endl;
    sspeed_ = sspeed_ + acceleration_ * dt;
    sspeed_ = sspeed_ - sspeed_ * friction;
    move(sspeed_);
    acceleration_ = 0;
}

void PhysicsObject::setAccelerattion(raylib::Vector2 acceleration) {
    acceleration_ = acceleration;

}

PhysicsObject::PhysicsObject(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot)
: GameObject(initialPos, texturePath, initialScale, initialRot) {

}
