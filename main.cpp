#include <iostream>
#include "Warrior.h"

using namespace std;

int main() {
    // Create a first warrior
    // The warrior will be called "Conan" and will have 100 health points
    // a revolver with 10 damage points
    Warrior conan("Conan", 100, "revolver", 10);

    // Create a second warrior
    // The warrior will be called "Aragorn" and will have 100 health points
    // a sword with 20 damage points
    Warrior aragorn("Aragorn", 100, "sword", 20);

    // Conan attacks Aragorn
    conan.attack(aragorn);

    // Aragorn attacks Conan
    aragorn.attack(conan);

    // Display health evolution of Conan
    conan.displayHealth();

    // Display health evolution of Aragorn
    aragorn.displayHealth();

    // Conan takes a potion
    conan.takePotion();

    // Display health evolution of Conan
    conan.displayHealth();

    // Conan wins the fight (attack Aragorn until health = 0)
    while (aragorn.getHealth() > 0) {
        conan.attack(aragorn);
        aragorn.displayHealth();
    }
    // If Aragorn is dead, Conan wins
    if (aragorn.getHealth() <= 0) {
        cout << "Conan wins!" << endl;
    }

    return 0;
}
