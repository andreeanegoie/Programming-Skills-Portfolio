#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[6] = {"jake", "zac", "ian", "ron", "sam", "dave"};//lowercase to make the search not case sensitive
    string to_search;
    bool found = false;// to simplify the check

    while (found==false) { //Loop while the name is not on the list
        cout << "Enter a name to search: ";
        cin >> to_search;// sAk the user for a name

        // Convert input to lowercase
        for (int j = 0; j < to_search.length(); j++) {
            to_search[j] = tolower(to_search[j]);// Put the input in lower case so te search is not case sensitive
        }

        // Check if the name exists in the list
        for (int i = 0; i < 6; i++) {// To go through every item on the list 
            if (to_search == names[i]) {
                found = true;// Change the boolean value to true if a name is found
                break; 
            }
        }

        if (found==true) {
            cout << "The name is on the list!" << endl; //output if the name boolean value is true (name is found)
        } else {
            cout << "The name is not on the list. Try another one." << endl;//output if the name boolean value is false
        }
    }

    return 0;
}
