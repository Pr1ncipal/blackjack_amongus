#include <iostream>
#include <cmath>
#include <ctime> //allows you to access the time
#include <cstdlib>

//#include "black.h"

using namespace std;
//Initializes various functions
void bet(int wager);
void start();
void dealer();
void tutorial();

int main()
{
    int balance = 100, wager;
    
    //Seeds RNG. 
    srand((unsigned)time(0));

    //Explains how a RNG works.
    /*
    srand is how you make a random number generator. however, since a computer doesn't understand what "random" actually is, you have to tell the computer where
    you want it to find the number from. in windows/c++/something, there is a way it finds the time in the background (ctime), but the time isn't in human
    readable date form, its just a bunch of numbers. In essence, this is a simple way to generate a "random number". while the number isn't TRULY random and could
    technically be found and used to cheat, that would be excessively diffifcult just to gimp a RNG. - Adrian
    */

    //Asks the player if they need a tutorial or if they want to start the game. Currently broken.
    /*
    bool x = 1;
    cout << "Do you need a tutorial? 1 for yes, 0 for no." << endl;
    cin >> x;
    */

    //Calls the bet function
    /*
    bet(wager);
    */
    
    //Calls the dealer function.
    dealer();
    
    return 0;
}

//Prints cards based on values. Not useful, since dealer function does this.
void cardPrinter()
{
int x;
switch (x)
{
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    {
        cout << "**********" << endl;
        cout << "*      " << x << " *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "* " << x << "      *" << endl;
        cout << "**********" << endl;
        break;
    }
    case 10:
    {
        cout << "**********" << endl;
        cout << "*      " << x << "*" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "*" << x << "      *" << endl;
        cout << "**********" << endl;
        break;
    }
    case 11:
    {
        cout << "**********" << endl;
        cout << "*      " << "J" << " *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "* " << "J" << "      *" << endl;
        cout << "**********" << endl;
        break;
    }
    case 12:
    {
        cout << "**********" << endl;
        cout << "*      " << "Q" << " *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "* " << "Q" << "      *" << endl;
        cout << "**********" << endl;
        break;
    }
    case 13:
    {
        cout << "**********" << endl;
        cout << "*      " << "K" << " *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "* " << "K" << "      *" << endl;
        cout << "**********" << endl;
        break;
    }
    case 1:
    case 14:
    {
        cout << "**********" << endl;
        cout << "*      " << "A" << " *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "*        *" << endl;
        cout << "* " << "A" << "      *" << endl;
        cout << "**********" << endl;
        break;
    }

} //Ends switch statement
    
} // Ends function.

//Start function. unsure of usage currently, broken.
void start()
{
     //add rules and directions maybe
    cout << "\nWelcome to the sus game of Black Jack. Since this is a new game, you start with 100 chips.\n" << endl;

    cout << "Rules & directions go here....\n" << endl;
}

//Tutorial function. currently broken
void tutorial()
{
    cout << "When you play the house, you play against the casino, which is represented by the dealer. " << endl;
    cout << "The dealer deals one card face up to each player, from left to right, with the last card going to the houses hand, which is face down. " << endl;
    cout << "The dealer will then deal one card facing up to each player and then the house." << endl;
    
    cout << "After the initial deal, the blackjack rules indicate that the dealer will ask each player, in succession, if he/she needs one or more cards." << endl; 
    cout << "As the player, you can ask for one or more cards(called a hit)until you either go over 21 (bust), or you think you have the best possible hand." << endl;

    cout << "Once you have all the cards you need, you stay or stand, meaning you signal to the dealer that you dont want any more cards. " << endl;
    cout << "Each subsequent player then decides whether to hit or stand." << endl;

    cout << "After all the players have completed their hands or gone bust, the dealer reveals his or her down card. " << endl;
    cout << "Depending on the cards in the dealers hand, the blackjack rules at the table will dictate whether the dealer will hit or stand." << endl;
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

//Prints out what cards the player and dealer have. Currently, it just generates random cards.
void dealer()
{
    int dCard1 = rand() % 13 + 1;
    int dCard2 = rand() % 13 + 1;
    int pCard1 = rand() % 13 + 1;
    int pCard2 = rand() % 13 + 1;

    cout<<"\nCards Up! The dealer has:\n "<<endl;

    switch (dCard1)
    {
		case 1: 
        {
            cout << "**********" << endl;
            cout << "*      " << "A" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "A" << "      *" << endl;
            cout << "**********" << endl;
            cout << "an Ace " << endl; 
			break;
        }
		case 10:
        {
            cout << "**********" << endl;
            cout << "*      " << "10" << "*" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*" << "10" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a 10 " << endl; 
			break;
        }
        case 11: 
        {
            cout << "**********" << endl;
            cout << "*      " << "J" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "J" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Jack " << endl; 
			break;
        }
		case 12: 
        {
            cout << "**********" << endl;
            cout << "*      " << "Q" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "Q" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Queen " << endl;
			break;
        }
		case 13: 
        {
            cout << "**********" << endl;
            cout << "*      " << "K" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "K" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a King "<< endl; 
			break;
        }
		default: 
        {
            cout << "**********" << endl;
            cout << "*      " << dCard1 << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << dCard1 << "      *" << endl;
            cout << "**********" << endl;
            cout <<"a "<< dCard1 << endl;
			break;
        }
    }
    
    cout << "As well as... " << endl;
    
    switch (dCard2) 
    {
		case 1: 
        {
            cout << "**********" << endl;
            cout << "*      " << "A" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "A" << "      *" << endl;
            cout << "**********" << endl;
            cout << "an Ace" << endl; 
			break;
        }
        case 10:
        {
            cout << "**********" << endl;
            cout << "*      " << "10" << "*" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*" << "10" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a 10 " << endl; 
			break;
        }
		case 11: 
        {
            cout << "**********" << endl;
            cout << "*      " << "J" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "J" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Jack" << endl; 
			break;
        }
		case 12: 
        {
            cout << "**********" << endl;
            cout << "*      " << "Q" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "Q" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Queen" << endl;
			break;
        }
		case 13: 
        {
            cout << "**********" << endl;
            cout << "*      " << "K" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "K" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a King" << endl; 
			break;
        }
		default: 
        {
            cout << "**********" << endl;
            cout << "*      " << dCard2 << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << dCard2 << "      *" << endl;
            cout << "**********" << endl;
            cout <<"a "<< dCard2 << endl;
			break;
        }
    }
//--------------------------------------------------------------------------------------
    cout<<endl;
    cout<<endl;
    cout<<"However, the player has...\n "<<endl;
    switch (pCard1)
    {
		case 1: 
        {
            cout << "**********" << endl;
            cout << "*      " << "A" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "A" << "      *" << endl;
            cout << "**********" << endl;
            cout << "an Ace " << endl; 
			break;
        }
		case 10:
        {
            cout << "**********" << endl;
            cout << "*      " << "10" << "*" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*" << "10" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a 10 " << endl; 
			break;
        }
        case 11: 
        {
            cout << "**********" << endl;
            cout << "*      " << "J" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "J" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Jack " << endl; 
			break;
        }
		case 12: 
        {
            cout << "**********" << endl;
            cout << "*      " << "Q" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "Q" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Queen " << endl;
			break;
        }
		case 13: 
        {
            cout << "**********" << endl;
            cout << "*      " << "K" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "K" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a King "<< endl; 
			break;
        }
		default: 
        {
            cout << "**********" << endl;
            cout << "*      " << pCard1 << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << pCard1 << "      *" << endl;
            cout << "**********" << endl;
            cout <<"a "<< pCard1 << endl;
			break;
        }
    }

    cout << "As well as... " << endl;

    switch (pCard2) 
    {
		case 1: 
        {
            cout << "**********" << endl;
            cout << "*      " << "A" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "A" << "      *" << endl;
            cout << "**********" << endl;
            cout << "an Ace" << endl; 
			break;
        }
        case 10:
        {
            cout << "**********" << endl;
            cout << "*      " << "10" << "*" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*" << "10" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a 10 " << endl; 
			break;
        }
		case 11: 
        {
            cout << "**********" << endl;
            cout << "*      " << "J" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "J" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Jack" << endl; 
			break;
        }
		case 12: 
        {
            cout << "**********" << endl;
            cout << "*      " << "Q" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "Q" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a Queen" << endl;
			break;
        }
		case 13: 
        {
            cout << "**********" << endl;
            cout << "*      " << "K" << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << "K" << "      *" << endl;
            cout << "**********" << endl;
            cout << "a King" << endl; 
			break;
        }
		default: 
        {
            cout << "**********" << endl;
            cout << "*      " << pCard2 << " *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "*        *" << endl;
            cout << "* " << pCard2 << "      *" << endl;
            cout << "**********" << endl;
            cout <<"a "<< pCard2 << endl;
			break;
        }
    }

    cout << endl;

}