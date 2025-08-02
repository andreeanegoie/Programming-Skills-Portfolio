#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[6] = {"jake", "zac", "ian", "ron", "sam", "dave"};//lowercase to make the search not case sensitive
    string to_search;
    bool found = false;// to simplify the check

    while (found==false) {
        cout << "Enter a name to search: ";
        cin >> to_search;// ask the user for a name

        // Convert input to lowercase
        for (int j = 0; j < to_search.length(); j++) {
            to_search[j] = tolower(to_search[j]);// put the input in lower case so te search is not case sensitive
        }

        // Check if the name exists in the list
        for (int i = 0; i < 6; i++) {
            if (to_search == names[i]) {
                found = true;
                break;
            }
        }

        if (found==true) {
            cout << "The name is on the list!" << endl;
        } else {
            cout << "The name is not on the list. Try another one." << endl;
        }
    }

    return 0;
}
