#include <iostream>
using namespace std;
//* ↑ can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects
/* example:
    std::string greeting = "Hello";
    std::cout << greeting;
*/


// single line comment. there are additional ? ! characters for better comment vscode extension.

/* this is a
multiline
comment 
*/

//! declaring variables
int my_num = 183;                           // integer              size: 4 bytes
double two_decimal = 312.34;                // 2 decimal number     size: 8 bytes
char my_char = 'a';                         // single char          size: 4 bytes
string my_str = "some words";               // string
bool some_condition = false;                // boolean              size: 1 byte
float my_float = 4.2345;                    // float                size: 1 byte

//! methods
double sum = my_num + two_decimal;          // addition
int n1 = 23, n2 = 64, n3 = 6;               // declair many vars in one line
const float pi = 3.14;                      // this number cannot be changed now

//! numbers trial
int trial_int = 22/7;
float trial_float = 22/7;
double trial_double = 22/7;

//! big numbers, 12e19 is same as 12 x 10^3
float big_float = 12e93;                    // will output inf
double big_int = 12e93;                     // will output 1.2e+94

//! char
char single_letter = 'a';                   // single character
char ascii_letter = 65;                     // capital A
char ascii_character = 222;                 // Þ character

//! operations
int add       = n1 + n2;
int minus     = n1 - n2;
int multiply  = n1 * n2;
double divide = n1 / n2;
int mod       = n1 % n2;

//! append strings
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);

//! String Concatenation
string first_name = "John ";
string last_name = "Doe";
string full_name = first_name + last_name;

//! arrays
string cars1[4];
string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
int myNum[3] = {10, 20, 30};

//! array size
string cars3[] = {"Volvo", "BMW", "Ford"};   // size of array is always 3
string cars4[5] = {"Volvo", "BMW", "Ford"};  // size of array is 5, even though it's only three elements inside it



//! main function
int main()
{
    //? different print ways
    cout << "Hello world!" << endl;
    printf("again hello world\n");
    cout << my_char << endl;
    cout << "I am " << my_num << "years old, and " << my_str << endl;
    cout << sum << "\n";


    //? number trial
    cout << "trial int: " << trial_int << endl ;
    cout << "trial float: " << trial_float << endl;
    cout << "trial double: " << trial_double << endl;


    //? user input
    int input_number;
    cin >> input_number;
    cout << "you entered the number- " << input_number << endl;


    //? big numbers
    cout << big_int << endl;


    //? chars
    cout << single_letter << endl;
    cout << ascii_letter << endl;
    cout << ascii_character << endl;


    //? size (.length also works)
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size();


    //? indexing
    string myString = "Hello";
    cout << myString[0];                  // output -->  H
    myString[3] = 'a';
    

    //? cin considers a space (whitespace, tabs, etc) as a terminating character, 
    //? which means that it can only display a single word (even if you type many words)
    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;                      // input ---> John Doe
    cout << "Your name is: " << fullName; // output --> Your name is: John
    

    //? return bigger/smaller number
    cout << max(5, 10);
    cout << min(5, 10);


    //? bool print result
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;                 // output --> 1 (true)
    cout << isFishTasty;                 // output --> 0 (false)


    //? if-else
    int time1 = 22;
    if (time1 < 10) {
        cout << "Good morning.";
    } else if (time1 < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening." << endl;
    }


    //? 1 line alternative if-else
    int time2 = 20;
    string result = (time2 < 18) ? "Good day." : "Good evening.";
    cout << result;


    //? case statement
    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "invalid day";        // basically else statement for case
    }


    //? while loop
    int g = 0;
    while (g < 5) {
        cout << g << "\n";
        g++;
    }


    //? do-while loop
    int h = 0;
    do {
        cout << h << "\n";
        h++;
    }
    while (h < 5);


    //? for loop
    for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
    }


    //? break- breaks the loop completly
    for (int j = 0; j < 10; j++) {
    if (j == 4) {
        break;
        }
        cout << j << "\n";
    }

    int k = 0;
    while (k < 10) {
        cout << k << "\n";
        k++;
        if (k == 4) {
            break;
        }
    } 



    //? continue- skips only the current-going loop
    for (int l = 0; l < 10; l++) {
    if (l == 4) {
        continue;
        }
        cout << l << "\n";
    }

    int m = 0;
    while (m < 10) {
        if (m == 4) {
            m++;
            continue;
            }
        cout << m << "\n";
        m++;
    }


    //? references (basically same as bash aliases)
    string food1 = "Pizza";
    string &meal = food1;
    cout << food1 << "\n";            // output --> Pizza
    cout << meal << "\n";             // output --> Pizza


    //? memory addresses
    string food2 = "Pizza";
    cout << &food2;                   // output --> 0x6dfed4


    //? pointers
    //? A pointer is a variable that stores the memory address as its value. 
    //? * sign does 2 things- 
    //? When used in declaration (string* ptr), it creates a pointer variable.
    //? When not used in declaration, it act as a dereference operator.
    string food3 = "Pizza";           // A food variable of type string
    string* ptr3 = &food3;            // A pointer variable, with the name ptr, that stores the address of food
    cout << food3 << "\n";            // Output the value of food (Pizza)
    cout << &food3 << "\n";           // Output the memory address of food (0x6dfed4)
    cout << ptr3 << "\n";             // Output the memory address of food with the pointer (0x6dfed4)
    
    //? changing ptr also changes food but location stays constant
    string food4 = "Pizza";
    string* ptr4 = &food4;
    cout << food4 << "\n";            // Output the value of food (Pizza)
    cout << &food4 << "\n";           // Output the memory address of food (0x6dfed4)
    cout << *ptr4 << "\n";            // Access the memory address of food and output its value (Pizza)
    *ptr4 = "Hamburger";              // Change the value of the pointer
    cout << *ptr4 << "\n";            // Output the new value of the pointer (Hamburger)
    cout << food4 << "\n";            // Output the new value of the food variable (Hamburger)
    cout << &food4 << "\n";           // location stays the same
    return 0;
}
