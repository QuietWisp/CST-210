#include "Barn.h"

// Constuctor
Barn::Barn() {
    // Chicken
    // Hen Solo
    for (int i = 0; i < 1; i++) {
        string name = "Hen Solo";
        Chicken c(name, 5);
        coop.push_back(c);
    }

    // Cow
    // Daisy Daisy Daisy
    for (int i = 0; i < 1; i++) {
        string name = "Daisy Daisy Daisy";
        Cow c(name, 1411);
        cowPen.push_back(c);
    }

    // Pig
    // Hammy
    for (int i = 0; i < 1; i++) {
        string name = "Hammy";
        Pig c(name, 280);
        pigPen.push_back(c);
    }
}

// Feed all chickens
void Barn::feedChickens() {
    for (Chicken& chicken : coop) {
        chicken.eat();
    }
}

// Feed all cows
void Barn::feedCows() {
    for (Cow& cow : cowPen) {
        cow.eat();
    }
}

// Feed all pigs
void Barn::feedPigs() {
    for (Pig& pig : pigPen) {
        pig.eat();
    }
}
