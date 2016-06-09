//
//  Reality.h
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/9/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#ifndef Reality_h
#define Reality_h

//
//  Reality.h
//  Homework5Monster
//
//  Created by Abraham Philip on 6/1/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#include <string>
#include "enemy.h"

using namespace std;

class Reality : public enemy
{
public:
    Reality();
    
    //Methods of monster
    string getName() const;
    void basicAttack(enemy * enemy);
    string basicName() const;
    int getHealth() const;
    void doDamage(int damage);
    void resetHealth();
    bool defeat() const;
    int totalHealth() const;
private:
    string name;
    int health;
    int totalhealth;
    
};
#endif /* Reality_h */
//implementation of the header
Reality::Reality()
{
    name = "R E A L I T Y 🖕🏽";
    health=100;
    totalhealth=100;
}

string Reality::getName() const
{
    return name;
}

void Reality::basicAttack(enemy * enemy)
{
    enemy->doDamage(20);
}

string Reality::basicName() const
{
    return "Brutal Wakeup Call";
}

int Reality::getHealth() const
{
    return health;
}
void Reality::doDamage(int damage)
{
    health=health-damage;
}

void Reality::resetHealth()
{
    health=100;
}

bool Reality::defeat() const
{
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}

int Reality::totalHealth() const
{
    return totalhealth;
    
}

