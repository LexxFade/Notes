#include <iostream>
using namespace std;

//! Polymorphism
/* when 2 (or more) child classes make a parent class method do different task.
for example, here all animals are making different sound from one other
*/

// Base class
class Animal {
    public:
        void animalSound() {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Cat : public Animal {
    public:
        void animalSound() {
        cout << "The cat says: nya nyaa~ \n";
    }
};

// Derived class
class Dog : public Animal {
    public:
        void animalSound() {
        cout << "The dog says: bork bork \n";
    }
};

int main() {
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();
    return 0;
}
