#ifndef PLAYER_CPP
#define PLayer_CPP
#include "player.hpp"

Player::void give(Card card)
{
    hand.push_back(card);
}

Player::Card take()
{
    return hand.pop_back();
}

Player::void print(hand)
{
    for(int = 0; i < hand.siz(); i++)
        cout << hand[i] << endl;
}

Player::void hit(Deck deck)
{
    string input;
    std::cout << "Hit? [y/n]" << endl;
    cin >> input;
    if(input == "y" && input == "Y")
        //make draw function???

}


#endif // PLAYER_CPP
