//
//  PersianOffWhites.h
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/9/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#ifndef PersianOffWhites_h
#define PersianOffWhites_h


#include <string>
#include "enemy.h"

using namespace std;

class PersianOffWhites: public enemy
{
public:
    PersianOffWhites();
    
    //Methods of PersianOffWhites
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
#endif /* PersianOffWhites_h */

//Header implementation
PersianOffWhites::PersianOffWhites()
{
    name = "Persian Off Whites";
    health=100;
    totalhealth=100;
}

string PersianOffWhites::getName() const
{
    return name;
}

void PersianOffWhites::basicAttack(enemy * enemy)
{
    enemy->doDamage(20);
}

string PersianOffWhites::basicName() const
{
    return "Gravity Crush";
}

int PersianOffWhites::getHealth() const
{
    return health;
}
void PersianOffWhites::doDamage(int damage)
{
    health=health-damage;
}
//Function to reset health
void PersianOffWhites::resetHealth()
{
    health=100;
}
//Function to show defeat
bool PersianOffWhites::defeat() const
{
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}
//Health function
int PersianOffWhites::totalHealth() const
{
    return totalhealth;
    
}


