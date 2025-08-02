#include <iostream>
using namespace std;

void  check() { 
   int x,reminder; 
   reminder=x%2; //for a number to be even it has to be divisable by 2
   if (reminder == 1){ //the reminder can be only 0 or 1
      cout<<"The provided number is odd."<<endl;}
      else{
   cout<<"The provided number is even."<<endl;}
      }
int main(){
    cout<< "Type your number: "<<endl;
    cin>>x;//Read the number to be checked
    check();//call the function
   return 0;
}
