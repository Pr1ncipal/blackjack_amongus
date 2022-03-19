#include <iostream>
#include <cmath>
#include <ctime> //allows you to access the time
#include <cstdlib>

//#include "black.h"

using namespace std;
//initialize the bet function
void bet(int wager);
void start();
void dealer();

int main()
{

    srand((unsigned)time(0));

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
    
    dealer();

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
        cout << "you bet " << wager <<" chips. "<<endl;
    }
}

void dealer()
{
    int dCard1 = rand() % 13 + 1;
    int dCard2 = rand() % 13 + 1;
    int pCard1 = rand() % 13 + 1;
    int pCard2 = rand() % 13 + 1;

    cout<<"the dealer has "<<endl;

    switch (dCard1)
    {
		case 1: 
        {
            cout << "an Ace and "; 
			break;
        }
		case 11: 
        {
            cout << "a Jack and "; 
			break;
        }
		case 12: 
        {
            cout << "a Queen and ";
			break;
        }
		case 13: 
        {
            cout << "a King and "; 
			break;
        }
		default: 
        {
            cout <<"a "<< dCard1 << " and ";
			break;
        }
    }
    switch (dCard2) 
    {
		case 1: 
        {

            cout << "an Ace"; 
			break;
        }
		case 11: 
        {
            cout << "a Jack"; 
			break;
        }
		case 12: 
        {
            cout << "a Queen";
			break;
        }
		case 13: 
        {
            cout << "a King"; 
			break;
        }
		default: 
        {
            cout <<"a "<< dCard2;
			break;
        }
    }
//--------------------------------------------------------------------------------------
    cout<<endl;
    cout<<endl;
    cout<<"the player has "<<endl;
     switch (pCard1)
    {
		case 1: 
        {
            cout << " an Ace and "; 
			break;
        }
		case 11: 
        {
            cout << "a Jack and "; 
			break;
        }
		case 12: 
        {
            cout << "a Queen and ";
			break;
        }
		case 13: 
        {
            cout << "a King and "; 
			break;
        }
		default: 
        {
            cout << "a "<<pCard1 << " and ";
			break;
        }
    }
    switch (pCard2) 
    {
		case 1: 
        {

            cout << " an Ace"; 
			break;
        }
		case 11: 
        {
            cout << "a Jack"; 
			break;
        }
		case 12: 
        {
            cout << "a Queen";
			break;
        }
		case 13: 
        {
            cout << "a King"; 
			break;
        }
		default: 
        {
            cout <<"a "<< pCard2;
			break;
        }
    }
}