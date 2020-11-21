#include <iostream>
using namespace std;

class ParentClass {
    public:
        string public_string = "public readable n writable data";
        void hello_message() {
            cout << "hello world\n";
        }
    protected:
        string info = "secret between classes";
};

class ChildClass : public ParentClass {
    public:
        string public_string = "edited the content";
        ChildClass(){
            // child class is exposing the secret message
            cout << info << endl;
        }
};

class AnotherParentClass {
    public:
        int random_numbers = 324234;
        void tell_bye() {
            cout << "bye world" << endl;
        }
};

class MultipleParents : public AnotherParentClass, public ParentClass {
    public:
        int random_numbers = 6573;
};

int main(){
    ChildClass test_object;
    test_object.hello_message();
    cout << test_object.public_string << endl;
    cout << endl;

    MultipleParents text_object2;
    cout << text_object2.random_numbers << endl;
    text_object2.hello_message();
}
