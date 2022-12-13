//
// Created by xicun on 13/12/2022.
//

#ifndef CLASSESCPP_WEAPON_H
#define CLASSESCPP_WEAPON_H

#include <string>

using namespace std;

// Create the prototype for a Weapon class
// A weapon is characterized by a type and damage
class Weapon {
private:
    string type;
    int damage;
public:
    Weapon(string type, int damage);
    string getType();
    int getDamage();
    void setType(string type);
    void setDamage(int damage);
};

#endif //CLASSESCPP_WEAPON_H
