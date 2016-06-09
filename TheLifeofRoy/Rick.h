//
//  Rick.h
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/9/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#ifndef Rick_h
#define Rick_h
//preprocessor
#include <string>
#include "enemy.h"

using namespace std;

class Rick: public enemy
{
public:
    Rick();
    
    //Methods of Sleepy Gary
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
#endif /* Rick_h */
//This is where I created the functions for Sleepy Gary
Rick::Rick()
{
    name = "RICK";
    health=100;
    totalhealth=100;
}
//A function to show Sleepy Gary's name
string Rick::getName() const
{
    return name;
}
//A function for Gary's basic attack

void Rick::basicAttack(enemy * enemy)
{
    enemy->doDamage(20);
}
string Rick::basicName() const
{
    return "Portal Gun Assault";
}
//A function to show Sleepy Gary's health
int Rick::getHealth() const
{
    return health;
}
//A function to damage the player
void Rick::doDamage(int damage)
{
    health=health-damage;
}
// A function to reset Gary's Health
void Rick::resetHealth()
{
    health=100;
}
// A function to determine if Gary is dead or not
bool Rick::defeat() const
{
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}
// Health function
int Rick::totalHealth() const
{
    return totalhealth;
}



