#include <iostream>
using namespace std;

class New_Class {                                       // declaring class
    public:                                             // access specifier
        int a_number;                                   // attribute
        string a_string;                                // attribute
        
        void print_message(){                           // method
            cout << "this is a class metod" << endl;
        }
        
        New_Class(string message) {                     // function in a class with same name is initialize function. type is not defined
            cout << "New_Class is called" << endl;
            cout << message << endl << endl;
        }

        void outside_function(string message);
};                                                      // must be ended with ;

void New_Class::outside_function(string message) {
    cout << "this " << message <<" was printed by an out-of-the-class function" << endl;
}

int main(){
    New_Class class_object("parameter can be passed here");

    class_object.a_number = 64;
    class_object.a_string = "some text";

    cout << class_object.a_number << endl
         << class_object.a_string << endl;

    class_object.print_message();
    class_object.outside_function("m3$$@g3");

    return 0; 
}
