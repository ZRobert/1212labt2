/*//////////////////////////////////////////////////////////////////////////
//Program:  lab test 2.cpp
//Author:   Robert Payne
//Date:     3-15-2012
//Purpose:    This program asks the user to guess a number from 5 to 10.
//            The program generates a random number and checks the user's
//            guess to see if they match. If not, the program allows the
//            user to try again. The program will also let them know if
//            the number is higher or lower.
/////////////////////////////////////////////////////////////////////////*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int randNumber;     //the random number that is used
    int userGuess;      //the user's guess at the random number


    srand(clock());     //srand() function call is seeding the random number
                        //generator with the value from the clock() function call

    randNumber = rand() % 6 + 5;    //takes the rand() value and modifies it to be
                                    //an integer 5 through 10
    cout<< "Please guess the random number (5-10):    ";
    cin>> userGuess;

    if(userGuess == randNumber) //check to see if user's guess equals the randNumber
        cout<< "You got it!";

    else        //if guess is not correct...
    {
        if(randNumber > userGuess) //outputs a message telling them that their guess is too low
        {
            cout<<"Sorry, you did not get it, you are under. Guess again." <<endl;
            cin>> userGuess;
        }
        else    //outputs a message telling them their guess was too high
        {
            cout<<"Sorry, you did not get it, you are over. Guess again. " <<endl;
            cin>> userGuess;
        }
        if(userGuess == randNumber)     //checks for a 2nd time to see if their guess is correct
            cout<< "You got it!";

        else
            cout<< "Sorry, you did not get it, the number was " <<randNumber <<"!";  //outputs if they guessed wrong twice
    }

    return 0;
}
