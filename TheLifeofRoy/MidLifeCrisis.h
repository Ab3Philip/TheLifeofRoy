
//
//  MidLifeCrisis.h
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/9/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#ifndef MidLifeCrisis_h
#define MidLifeCrisis_h
using namespace std;

class MidLifeCrisis: public enemy
{
public:
    MidLifeCrisis();
    
    //Methods of Tiny Rick
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
#endif /* MidLifeCrisis_h */
//Implementation of the header
MidLifeCrisis::MidLifeCrisis()
{
    name = "MidLife Crisis";
    health=100;
    totalhealth=100;
}
//A function to show Tiny Rick's name
string MidLifeCrisis::getName() const
{
    return name;
}
//A function for Tiny Rick's basic attack
void MidLifeCrisis::basicAttack(enemy * enemy)
{
    enemy->doDamage(20);
}

string MidLifeCrisis::basicName() const
{
    return "Naggy Wife!";
}
//A function to show Tiny Rick's health

int MidLifeCrisis::getHealth() const
{
    return health;
}
//A function to damage the player

void MidLifeCrisis::doDamage(int damage)
{
    health=health-damage;
}
// A function to reset Gary's Health

void MidLifeCrisis::resetHealth()
{
    health=100;
}
// A function to determine if Gary is dead or not

bool MidLifeCrisis::defeat() const
{
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}
//Health Function
int MidLifeCrisis::totalHealth() const
{
    return totalhealth;
    
}




