//
//  main.cpp
//  TheLifeofRoy
//
//  Created by Abraham Philip on 6/1/16.
//  Copyright © 2016 Abraham Philip. All rights reserved.
//
//preprocessor
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Roy.h"
#include "Reality.h"
#include "PersianOffWhites.h"
#include "Cancer.h"
#include "enemy.h"
#include "MidLifeCrisis.h"
#include "Rick.h"
#include <string>
using namespace std;
//main program
int main() {
    srand(time(NULL));
    try {// This is used so that the player may throw an exception and exit the game at any time.
        //The below lines are for the dialogue that starts the game
        cout << "Welcome to the Life of Roy! Get ready to take the role of our protagonist Roy! Though he may be young now, he has big plans for the future! " << endl << "What is the name of your Roy?" << endl;
        string heroname;
        cin >> heroname;
        Roy* player = new Roy(heroname);
        cout << "Hi, " << heroname << ". Get ready for your adventure!" << endl;
        
        cout << "How many enemies would you like to fight?" << endl;
        int numberofenemies;
        cin >> numberofenemies;
        //This loop is used to simulate the battles and take your character through the adventure
        for (int i = 0; i < numberofenemies; i++)
        {
            if (player->defeat()) {
                cout << "Oh no! You've died! Please enter 25 Blips to play again!" << endl;//If the player's health reaches zero, they will die and the game will end.
                break;
            }
            int enemyid = rand() % 5;//This is to randomly sort the enemies the player fights
            enemy* creep;
            if (enemyid == 0)
                creep = new Reality();//If else statements for each monster
            else if (enemyid == 1)
                creep = new PersianOffWhites();
            else if (enemyid == 2)
                creep = new Cancer();
            else if (enemyid == 3)
                creep = new MidLifeCrisis();
            else if (enemyid == 4)
                creep = new Rick();
            cout << "You ran into a " << creep->getName() << "!" << endl;//This is the dialogue and actions to carry out an individual fight with an enemy.
            while ((!player->defeat() && !creep->defeat()) ) {
                cout << player -> getName() << ":" << player -> getHealth() << " health. Remaining:" << player -> getNumFireball() << " Fireballs," << player -> getNumPotions() << " Potions" << endl;
                cout << "Enter Command: gun shield fireball potion exit" << endl;
                string command;
                cin >> command;
                if (command.compare("gun") == 0){
                    player->basicAttack(creep);
                    cout << "You shot the enemy with your portal Gun!" << endl;
                }
                else if(command.compare("shield") == 0){
                    player->defenseAttack(creep);
                    cout << "You hid behind Rick's car!" << endl;
                }
                else if(command.compare("fireball") == 0){//loop for when the player throws a fireball
                    player->fireball(creep);
                    cout << "You threw a fireball!" << endl;
                }
                else if(command.compare("potion") == 0){//loop for when the player drinks a potion
                    player->potion();
                    cout << "You drank a potion!" << endl;
                }
                else if(command.compare("exit") == 0)
                    throw "e";
                creep->basicAttack(player);
                cout << creep-> getName() << " attacks you!" << endl;
            }
            if (creep->defeat()) {
                cout << creep-> getName() << " has been defeated!" << endl;
            }
        }
        if (!player->defeat()) {//Victory message
            cout << "Congratulations! You've saved the world and can go on more adventures with Rick!" << endl;
        }
    }
    catch (...)//This is used to catch the exception and help the player leave the game
    {
        cout << "You teleported out of the fight. Thanks for playing. Enjoy your stay at Blips and Chips!" << endl;
    }
    
    return 0;
}
