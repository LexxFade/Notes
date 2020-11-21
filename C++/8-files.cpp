#include <iostream>
#include <fstream>                                          // required to deak with files
using namespace std;

//! classes in fstream library to create, write and read files
/* ofstream 	Creates and writes to files
   ifstream 	Reads from files
   fstream 	    A combination of ofstream and ifstream: creates, reads, and writes to files
*/

void create_write() {
    ofstream MyFile("filename.txt");                        // Create and open a text file
    MyFile << "Files can be tricky, but it is fun enough!"; // Write to the file
    MyFile.close();                                         // Close the file
}

void read() {
    string myText;                                          // Create a text string, which is used to output the text file
    ifstream MyReadFile("filename.txt");                    // Read from the text file
    
    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        cout << myText;                                     // Output the text from the file
    }

    MyReadFile.close();                                     // Close the file
}

int main() {
    create_write()
    read()
}
