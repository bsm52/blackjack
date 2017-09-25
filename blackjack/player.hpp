#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player  //The player class which holds the "hand"
{
public:
    std::deque<Card> hand; //creates a deque of cards to make the hand
    Card take();  //plays the card
    void give(Card);  //receives the card
};


#endif // PLAYER_HPP
