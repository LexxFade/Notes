#include <iostream>
using namespace std;

void defined_and_declared() {
    cout << "the typical way to define functions" << endl;
}

void declare_first1();
void declare_first2(string name, int age, bool from_army = false);
int declare_first3(int num1, int num2);

int main() {
    defined_and_declared();
    declare_first1();
    
    declare_first2("John", 21, true);
    declare_first2("Alex", 36);
    
    cout << "sum of 2 and 4 is: " << declare_first3(2, 4) << endl;
    return 0;
}

void declare_first1() {
    cout << "functions can be declared first and defined later like this one" << endl;
}

//? parameters type is also defined. default value can be assigned if nothing is passed
void declare_first2(string name, int age, bool from_army) {
    cout << name << " is " << age << " old." << endl
    << "in army: "<< from_army << endl;
}

int declare_first3(int num1, int num2) {
    return num1+num2;
}
