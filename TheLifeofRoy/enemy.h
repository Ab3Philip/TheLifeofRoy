//
//  enemy.h
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/9/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//

#ifndef enemy_h
#define enemy_h
//preproccesor
#include <stdio.h>
#include <string>

using namespace std;

class enemy
{
public:
    enemy();
    virtual string getName() const=0;
    
    //Basic Attack Move
    //This will be the most common attack the monster makes
    virtual void basicAttack(enemy * enemy)=0;
    //Print the name of the attack used
    virtual string basicName() const=0;
    
    //Health Management
    //A monster at health <= 0 is unconscious
    //This returns the current health level
    virtual int getHealth() const=0;
    //This function is used by the other monster to
    //either do damage (positive int) or heal (negative int)
    virtual void doDamage(int damage) =0;
    virtual void resetHealth() = 0;
    virtual bool defeat() const= 0;
    virtual int totalHealth() const= 0;
};

#endif /* enemy_h */
