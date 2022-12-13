//
// Created by xicun on 13/12/2022.
//

#include "Weapon.h"

using namespace std;

/* NOTE: The prototype for this class is included in the Weapon.h file. */

// Constructor
Weapon::Weapon(string type, int damage) {
    this->type = type;
    this->damage = damage;
}

// Function "getType" returns the type of the weapon.
string Weapon::getType() {
    return this->type;
}

// Function "getDamage" returns the damage of the weapon.
int Weapon::getDamage() {
    return this->damage;
}

// Function "setType" sets the type of the weapon.
void Weapon::setType(string type) {
    this->type = type;
}

// Function "setDamage" sets the damage of the weapon.
void Weapon::setDamage(int damage) {
    this->damage = damage;
}