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

    bool contin = 1;
    while(contin)
    {
        if(p1.total < 21 && !p1.stand)
            p1.hit();
        if(p2.total < 21 && !p2.stand)
            p2.hit();
        if(total.p1 == 21)
        {
            p1.stand = true;
        }
        if(total.p2 == 21)
        {
            p2.stand = true;
        }
        if(p1.stand && p2.stand)
            contin = 0;
        if(p1.bust && p2.bust)
            contin = 0;
        if(p1.stand && p2.bust)
            contin = 0;
        if(p1.bust && p2.stand)
            contin = 0;
    }
    if(p1.bust)
    {
        if(p2.bust)
            cout << "Tie" << endl;
        else
            cout << "Player 2 wins!" endl;
    }
    else if(p2.bust)
    {
        if(p1.stand)
            cout << "Player 1 wins!" endl;
    }
    else
    {
       if(p1.total < p2.total)
            cout << "Player 2 wins!" << endl;
       else if(p1.total > p2.total)
            cout <<  "Player 1 wins!" << endl;
       else
            cout << "Tie!" << endl;
    }

    return 0;
}
