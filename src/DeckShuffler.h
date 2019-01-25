#pragma once

#include "Card.h"
#include <vector>


class DeckShuffler
{
public:
    DeckShuffler() = delete;
    ~DeckShuffler() = delete;
    static void shuffleDeck(std::vector<Card *> & deck,
            unsigned int number_of_shuffles=1);
};

