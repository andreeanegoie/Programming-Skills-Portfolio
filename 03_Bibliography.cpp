#include <iostream>
#include <string>
using namespace std;

int main () { 
int age; //Declare age as an integer
string name="", town=""; // Declare 2 empty strings for name and town
cout<<"What is your name? "<<endl;
//cin>>name; can only be used to read one name
getline(cin,name);//The fix provided for this issue is replacing the cin with getline (Source:https://www.w3schools.com/cpp/cpp_strings_input.asp)
cout<<"What is your hometown? "<<endl;
cin>>town;
cout<<"What is your age?  "<<endl;
cin>>age;
 //(Source: https://stackoverflow.com/questions/10349857/how-to-handle-wrong-data-type-input)
 while (cin.fail()) { // Keep asking for input until a valid integer is entered
        cin.clear();   // Clear the error flag on cin
        cin.ignore(1000, '\n');  // Discard the invalid input
        cout << "Your age must be an integer. Please try again: ";  // Display error message
        cin>>age;// Allow user to input their age again
    }
cout<<"User Biography:\nName: "<<name<<"\nHometown: "<<town<<""<<"\nAge: "<<age<<endl; //Display all information using a single cout
return 0;
}
