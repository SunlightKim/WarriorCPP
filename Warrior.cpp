//
// Created by xicun on 13/12/2022.
//

#include <iostream>
#include "Warrior.h"

using namespace std;

/* NOTE: The prototype of this class can be found in Warrior.h */

// Constructor (with Weapon)
// Format: Warrior class(string name, int health, string wType, int wDamage) : Weapon class(weapon type (= wType), weapon damage (=wDamage))
Warrior::Warrior(string name, int health, string wType, int wDamage) : weapon(wType, wDamage) {
    this->name = name;
    this->health = health;
}

// Implement functions
/* FUNCTION: attack
 * DESCRIPTION: This function allows a warrior to attack another warrior
 * INPUT: Warrior class (warrior)
 * OUTPUT: void
 */
void Warrior::attack(Warrior &warrior) {
    // Get the damage of the weapon of the warrior
    int damage = this->weapon.getDamage();
    // Get the health of the warrior
    int wHealth = warrior.getHealth();
    // Subtract the damage from the health
    wHealth -= damage;
    // Set the new health
    warrior.setHealth(wHealth);
}

/* FUNCTION: setHealth
 * DESCRIPTION: This function allows to set the health of a warrior
 * INPUT: int (health)
 * OUTPUT: void
 */
void Warrior::setHealth(int health) {
    this->health = health;
}

/* FUNCTION: displayHealth
 * DESCRIPTION: This function allows to display the health of a warrior
 * INPUT: void
 * OUTPUT: void
 */
void Warrior::displayHealth() {
    cout << this->name << " has " << this->health << " health points." << endl;
}

/* FUNCTION: takePotion
 * DESCRIPTION: This function allows a warrior to take a potion (adds 20 health points)
 * INPUT: void
 * OUTPUT: void
 */
void Warrior::takePotion() {
    // Get the health of the warrior
    int wHealth = this->getHealth();
    // Add 20 health points
    wHealth += 20;
    // Set the new health
    this->setHealth(wHealth);
}

// Getters
/* FUNCTION: getName
 * DESCRIPTION: This function allows to get the name of a warrior
 * INPUT: void
 * OUTPUT: string (name)
 */
string Warrior::getName() {
    return this->name;
}

/* FUNCTION: getWeapon
 * DESCRIPTION: This function allows to get the weapon of a warrior
 * INPUT: void
 * OUTPUT: Weapon class (weapon)
 */
Weapon Warrior::getWeapon() {
    return this->weapon;
}

/* FUNCTION: getHealth
 * DESCRIPTION: This function allows to get the health of a warrior
 * INPUT: void
 * OUTPUT: int (health)
 */
int Warrior::getHealth() {
    return this->health;
}