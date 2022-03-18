#include <iostream>
#include <cmath>
#include <ctime> //allows you to access the time

#include "black.h"

using namespace std;
//initialize the bet function
void bet(int wager);
void start();

int main()
{

    srand((unsigned)time(0)); //dont really know but lets u choose a random number. we used it in a previous lab

    /*srand is how you make a random number generator. however, since a computer doesn't understand what "random" actually is, you have to tell the computer where
    you want it to find the number from. in windows/c++/something, there is a way it finds the time in the background (ctime), but the time isn't in human
    readable date form, its just a bunch of numbers. In essence, this is a simple way to generate a "random number". while the number isn't TRULY random and could
    technically be found and used to cheat, that would be excessively diffifcult just to gimp a RNG. - Adrian
    */

    //class called blackType

    int balance = 100, wager;

    //uses the start function
    start();

    //calls the bet function
    bet(wager);
    
    return 0;
}

void start()
{
     //add rules and directions maybe
    cout << "\nWelcome to the sus game of Black Jack. Since this is a new game, you start with 100 chips.\n" << endl;

    cout << "Rules & directions go here....\n" << endl;
}


//betting functions
void bet(int wager)
{
    cout<<"input the amount of chips you woul like to wager. minimum wager is 1 chip."<<endl;
    cin>>wager;
   
    if(wager > 100 || wager < 1)
    {
        cout << "your bet is incorrect. input again please.";
        cin >> wager; 
    }
    else
    {
        cout << "you bet " << wager;
    }
}