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

Player::void hit()
{
    std::cout << "Hit?"
}


#endif // PLAYER_CPP
