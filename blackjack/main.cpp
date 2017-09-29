#include <iostream>
#include "deck.hpp"
#include "player.hpp"

using namespace std;

int main()
{
    Deck deck;
    deck.shuffle();

    Player p1; //add bust boolean
    Player p2;

    deal(deck, p1, 2); //deals 2 cards for the player
    deal(deck, p2, 2);

    cout << "Player 1's hand has " << print.hand(p1) << endl;
    cout << "Player 1's hand has " << print.hand(p2) << endl;

    //check and see if any of the players were dealt 21 right off the bat
    if(total.p1 == 21)
        cout << "Player 1 wins" << end;
    if(total.p2 == 21)
        cout << "Player 2 wins" << end;


    play(p1, p2);

    winner(p1, p2);

    return 0;
}
