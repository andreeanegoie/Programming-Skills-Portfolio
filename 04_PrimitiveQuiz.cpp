#include <iostream>
#include <string>
#include <cctype> // Library that handles character classification and conversion - to change all characters to lower
using namespace std;

int main() {
    int score=0;
   string capital;
    // capitals from right_ans array can be written in lower case to avoid using an additional for loop
    string right_ans[10] = {"Paris", "Rome","Lisbon","Madrid","Helsinki","Sofia","Bucharest","Viena","Berlin","Warsaw"};
    string country[10] = {"France", "Italy","Portugal","Spain","Findland","Bulgaria","Romania","Austria","Germany","Poland"};

   for (int i = 0; i < 10; i++) {
        cout << "What is the capital of " << country[i] << "? ";//Will go through the country array one by one
        cin >> capital; // alows user to input an answer

        // convert user input to lowercase so the answer is not case sensitive (Source: https://stackoverflow.com/questions/2661766/how-do-i-lowercase-a-string-in-c)
       for (int j = 0; j < capital.length(); j++) { //Go from the first character to the last using the lenght of the input
            capital[j] = tolower(capital[j]);
        }

        // convert correct answer from the array to lowercase so it can be compared to the user input 
        string correct = right_ans[i]; //Create another string to store the lower case answers
        for (int j = 0; j < correct.length(); j++) {
            correct[j] = tolower(correct[j]);
        }

        if (capital == correct) {
            cout << "The answer is correct!" << endl;
            score++;// Increases score for every correct answer // Incerase score only if the answer is correct.
        } else {
            cout << "The answer is incorrect!" << endl;
        }
    }
cout<<"Your score is: "<<score<<endl; //Prints score at the end
    return 0;
}
