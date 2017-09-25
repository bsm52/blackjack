#include <iostream>

using namespace std;

int main()
{
    Deck deck;
    deck.shuffle();

    Player.p1; //add bust boolean
    Player.p2;

    deal(deck, p1, 2);
    deal(deck, p2, 2);

    print.deck(p1);
    print.deck(p2);

    if(total.p1 == 21)
        cout << "Player 1 wins" << end;
    if(total.p2 == 21)
        cout << "Player 2 wins" << end;


    bool hit; //maybe add hit member function to player class
    if(total.p1 > 21)
        p1.bust = true;




    return 0;
}
