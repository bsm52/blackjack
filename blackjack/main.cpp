#include <iostream>

using namespace std;

int main()
{
    Deck deck;
    deck.shuffle();

    Player.p1; //add bust boolean
    Player.p2;

    deal(deck, p1, 2); //deals 2 cards for the player
    deal(deck, p2, 2);

    cout << "Player 1's hand has " << print.hand(p1) << endl;
    cout << "Player 1's hand has " << print.hand(p2) << endl;

    //check and see if any of the players were dealt 21 right off the bat
    if(total.p1 == 21)
        cout << "Player 1 wins" << end;
    if(total.p2 == 21)
        cout << "Player 2 wins" << end;


    bool hit; //maybe add hit member function to player class
    if(total.p1 > 21)
        p1.bust = true;




    return 0;
}
