//
//  Roy.h
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/9/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#ifndef Roy_h
#define Roy_h
#include <string>
#include "enemy.h"
using namespace std;

class Roy: public enemy //In my game, Roy is the hero class. He can be renamed by the player.
{
public:
    Roy(string n="No name");
    
    //Methods of the hero
    string getName() const;
    void basicAttack(enemy * enemy);
    string basicName() const;
    void defenseAttack(enemy * enemy);
    string defenseName() const;
    int getHealth() const;
    void doDamage(int damage);
    void resetHealth();
    bool defeat() const;
    int totalHealth() const;
    void fireball(enemy * enemy);
    void potion();
    int getNumFireball() const;
    int getNumPotions() const;
private:
    string name;
    int health;
    bool defense_mode;
    int totalhealth;
    int numFireballs;
    int numPotions;
};
#endif /* Roy_h */
//implementation of the header
Roy::Roy(string n)
{
    name = n;
    totalhealth=150;
    health=150;
    defense_mode=false;
    numFireballs=10;
    numPotions=6;
    
    
}
//A function to show Roy's name

string Roy::getName() const
{
    return name;
}
//A function to show how many fireballs Roy has
int Roy:: getNumFireball () const
{
    return numFireballs;
}
//A function to show how many potions Roy has
int Roy::getNumPotions() const
{
    return numPotions;
}
//A function for Roy's basic attack
void Roy::basicAttack(enemy * enemy)
{
    defense_mode=false;
    enemy->doDamage(30);
}

void Roy::fireball(enemy * enemy)
{
    if(numFireballs == 0){
        cout << "You have no more fireballs left!" << endl;
    }
    else{
        defense_mode=false;
        enemy->doDamage(50);
        numFireballs--;
    }
}


string Roy::basicName() const
{
    return "Portal Gun";
}
//A function for when Roy is in defense mode
void Roy::defenseAttack(enemy * enemy)
{
    defense_mode=true;
}

string Roy::defenseName() const
{
    return "Hide in Rick's car";
}


int Roy::getHealth() const
{
    return health;
}
void Roy::doDamage(int damage)
{
    if(defense_mode)
    {
        health=health-(damage/2);
    }else
    {
        health=health-damage;
    }
}
void Roy::potion()
{
    if(numPotions == 0){
        cout << "You have no more potions left!" << endl;
    }
    else{
        defense_mode=false;
        health+=10;
        numPotions--;
    }}
void Roy::resetHealth()
{
    health=150;
}
//A function to show if Roy is dead
bool Roy::defeat() const
{
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}
//Health Function
int Roy::totalHealth() const
{
    return totalhealth;
}
