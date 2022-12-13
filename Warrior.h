//
// Created by xicun on 13/12/2022.
//

#ifndef CLASSESCPP_WARRIOR_H
#define CLASSESCPP_WARRIOR_H

#include <string>
#include "Weapon.h"

using namespace std;

// Create a warrior class
// A warrior class is characterized by:
// - a name
// - a weapon (from the Weapon class)
// - a health
// A warrior can:
// - attack another warrior
// - get health from potions
// We can follow the evolution of the health of an attacked warrior

class Warrior {
private:
    string name;
    Weapon weapon;
    int health;
public:
    Warrior(string name, int health, string wType, int wDamage);
    void attack(Warrior &warrior);
    void setHealth(int health);
    void displayHealth();
    // Take potion function
    void takePotion();
    // Getters
    string getName();
    Weapon getWeapon();
    int getHealth();
};

#endif //CLASSESCPP_WARRIOR_H
