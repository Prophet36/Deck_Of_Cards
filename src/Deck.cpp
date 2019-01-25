#include "Deck.h"
#include <string>
#include <vector>


Deck::Deck()
{
    generateDeck();
}

Deck::~Deck()
{
    while (!m_deck_of_cards.empty())
    {
        delete m_deck_of_cards.back();
        m_deck_of_cards.pop_back();
    }
}

std::vector<Card *> & Deck::getDeck(void)
{
    return m_deck_of_cards;
}

std::string Deck::printDeck(void)
{
    std::string StringToPrint = "Current deck of cards:\n";
    for (unsigned int i = 0; i < m_deck_of_cards.size(); i++)
    {
        StringToPrint.append(std::to_string(i + 1) + ": ");
        StringToPrint.append(m_deck_of_cards.at(i)->convertCardToString());
        
        if (i != m_deck_of_cards.size() - 1)
        {
            StringToPrint.append(", ");
        }
        if ((i + 1) % 4 == 0)
        {
            StringToPrint.append("\n");
        }
    }
    StringToPrint.append("\n");
    return StringToPrint;
}

void Deck::generateDeck(void)
{
    std::vector<std::string> card_faces = { "Ace", "2", "3", "4", "5", "6",
                                            "7", "8", "9", "10", "Jack",
                                            "Queen", "King" };
    std::vector<std::string> card_suits = { "Clubs", "Diamonds", "Hearts",
                                            "Spades" };
    for (unsigned int i = 0; i < card_suits.size(); i++)
    {
        std::string suit = card_suits.at(i);
        for (unsigned int j = 0; j < card_faces.size(); j++)
        {
            std::string face = card_faces.at(j);
            Card * new_card = new Card(face, suit);
            m_deck_of_cards.push_back(new_card);
        }
    }
}

