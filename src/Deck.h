#pragma once

#include "Card.h"
#include <vector>


class Deck
{
private:
    const unsigned int m_deck_size = 52;
    std::vector<Card *> m_deck_of_cards;

public:
    Deck();
    ~Deck();
    std::vector<Card *> & getDeck(void);
    std::string printDeck(void);

private:
    void generateDeck(void);
};

