#pragma once

#include <list>
#include <memory>

#include "gameobject.h"
#include "spaceship.h"
#include "asteroid.h"
#include "projectile.h"

class GameManager
{
    using GameObjectContainer = std::list<std::shared_ptr<GameObject>>;

private:
    int score_;

    GameObjectContainer objects_;
    std::shared_ptr<Spaceship> player_;

    raylib::Vector2 generateRandomPos();

    void launchProjectile();

public:
    GameManager();

    std::shared_ptr<Asteroid> createAsteroid(raylib::Vector2 position, Asteroid::Size size, float rotation);

    void spawnAsteroid();

    void spawnSpaceship();

    void update();

    void drawObjects() const;

    void drawHud() const;

    void checkCollisions();

    void setScore(int score);
};