//
//  Cancer.h
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/9/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#ifndef Cancer_h
#define Cancer_h
#include <string>
#include "enemy.h"

using namespace std;

class Cancer: public enemy
{
public:
    Cancer();
    
    //Methods of Cancer
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
#endif /* Cancer_h */
//implementation of the header
Cancer::Cancer()
{
    name = "Cancer";
    health=100;
    totalhealth=100;
}

string Cancer::getName() const
{
    return name;
}

void Cancer::basicAttack(enemy * enemy)
{
    enemy->doDamage(20);
}

string Cancer::basicName() const
{
    return "Silent but Deadly attack";
}
//Function to show health
int Cancer::getHealth() const
{
    return health;
}
//Function to damage the hero
void Cancer::doDamage(int damage)
{
    health=health-damage;
}
//Reset Health Function
void Cancer::resetHealth()
{
    health=100;
}
//A function for when Cancer dies
bool Cancer::defeat() const
{
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}
//Health Function
int Cancer::totalHealth() const
{
    return totalhealth;
    
}



