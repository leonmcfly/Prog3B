#include "physicobject.h"
#include "spaceship.h"




void PhysicsObject::setSpaceshipSpeed(raylib::Vector2 speed){
    sspeed_ = speed;
}

void PhysicsObject::update(){
    pos_ += sspeed_;
}

PhysicsObject::PhysicsObject(raylib::Vector2 initialPos, std::string texturePath, float initialScale, float initialRot)
: GameObject(initialPos, texturePath, initialScale, initialRot) {

}
