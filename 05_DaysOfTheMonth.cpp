#include <iostream>
using namespace std;
int main(){
 cout << "Pick a month" << endl;//Request selection of the month
 cout << "1: January\n2: February\n3: March\n4: April\n5: May\n6: June\n7: July\n8: August\n9: September\n10: October\n11: November\n12: December" << endl;//output menu
 int month;//variable for month choice
 cin >> month;//get choice
 switch(month){//evaluate input variable as switch exression
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "This month has 31 days." << endl;
    break;
    case 4: case 6: case 9: case 11:
        cout << "This month has 30 days."  << endl;
    break;
    case 2:
    cout << "This month has 28 days, 29 if it is a leap year."  << endl;
    break;
    default:
        cout <<"Invalid Input"<< endl;//error message
 return 0;
 }
}
