#ifndef black_H
#define black_H

#include <iostream>

using namespace std;
//class header and impementation file
class blackType
{
    public:
        void wager();
        void start();
        void hand(int card);
        void results(bool side, int hand);
        void winner(int pHand, int dHand);
        bool stayHit(int hand);
        int draw();
        blackType();
    private:
        const bool player = true;
        const bool dealer = false;

};

void blackType::start()
{
    //add rules and directions maybe
    cout<<"Welcome to the sus game of Black Jack. You start with 100 chips."<<endl;
}



#endif