#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "card.hpp"

class Player  //The player class which holds the "hand"
{
public:
    std::deque<Card> hand; //creates a deque of cards to make the hand
    Card take();  //plays the card
    void give(Card);  //receives the car
    void print(hand); //prints the cards in the hand
};


#endif // PLAYER_HPP
