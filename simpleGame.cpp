/*
*Author: Biniyam Abera
*Date: dec 8, 2024
*This program has a number guesing game
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main () {
    //seed random number based on time
    srand(time(0));

    //generate a random number between 0 and 10(inclusive),
    //note the remainder of any number divided by 11 is between 0 and 10.
    int randomNumber = rand() % 11;


    int input = 11;
    int i = 0;
    cout<<"enter a number ";
        //lets the user enter a number mulitple times.
        while (input != randomNumber) {
            cin >> input;
            //chackes if the input is an intiger.
            if (cin.fail()) {
                cout<<"input is not an intiger, please enter a valid intiger."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            }
            //if the input is an intiger this statement will run.
                else {
                    //i will count the number of times the user tries.
                    i = i + 1;
                //displays Lower if the number is higher than the randomNumber.
                if (input > randomNumber){
                    cout<<"Lower!"<<endl;
                }
                //displays higher if the number is lower than the randomNumber.
                else if (input < randomNumber) {
                    cout<<"Higher!"<<endl;
                }
                //displays Congraturaltions and the number of times the user tries
                //when the input is equal to randomnumber.
                else if (input == randomNumber) {
                    cout<<"congratulations "<<endl;
                    cout<<"you have tried "<<i<<" times!";
                }
                else {
                    break;
                }
            }
        }
    return 0;
}
