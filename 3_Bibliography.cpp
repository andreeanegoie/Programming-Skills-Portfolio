#include <iostream>
#include <string>
using namespace std;

int main () { 
int age; //Declare age as an integer
string name="", town=""; // Declare 2 empty strings for name and town
cout<<"What is your name? "<<endl;
//cin>>name; can only be used to read one name
getline(cin,name);
cout<<"What is your hometown? "<<endl;
cin>>town;
cout<<"What is your age?  "<<endl;
cin>>age;
 while (cin.fail()) { // Keep asking for input until a valid integer is entered
        cin.clear();   // Clear the error flag on cin
        cin.ignore(1000, '\n');  // Discard the invalid input
        cout << "Your age must be an integer. Please try again: ";  // Display error message
        cin>>age;// Allow user to input their age again
    }
cout<<"User Biography:\nName: "<<name<<"\nHometown: "<<town<<""<<"\nAge: "<<age<<endl; //Display all information using a single cout
return 0;
}
