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

    //class called blackType

    int balance = 100, wager;

    //uses the start function


    //calls the bet function
    bet(wager);
    
    return 0;
}

void start()
{
     //add rules and directions maybe
    cout<<"Welcome to the sus game of Black Jack. You start with 100 chips."<<endl;
}


//betting functions
void bet(int wager)
{
    cout<<"input the amount of chips you woul like to wager. minimum wager is 1 chip."<<endl;
    cin>>wager;
   
    if(wager>100 || wager<1)
    {
        cout<<"your bet is incorrect. input again please.";
        cin>>wager;
    }
    else
    {
        cout<<"you bet "<<wager;
    }
}