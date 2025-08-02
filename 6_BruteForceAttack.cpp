#include <iostream>
#include <string>
using namespace std;
string right_pass="12345";//Initialise the right password
string password=""; //To store the user password
int attempts=5;//Limit the number of attempts to 5

int main() {
cout<<"Type a password:"<<endl;
cin>>password;
while ((password!=right_pass)&&(attempts>>1)){ //Loop while the password is wrong and the user still has attempts left
attempts--;//Decrease the number of attemts left
cout<<"You have "<<attempts<<" more attempts. Input another password: ";//Inform the user about the number of attempts left
cin>>password;}//read another password
cout<<"Welcome to the Secure Area"<<endl;//Right password confirmation

return 0;
} 
    
