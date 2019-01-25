#include "Card.h"
#include "DeckShuffler.h"
#include <random>
#include <string>
#include <vector>


void DeckShuffler::shuffleDeck(std::vector<Card *> & deck,
        unsigned int number_of_shuffles)
{
    std::random_device generator;
    std::mt19937 twister(generator());
    const int size = deck.size();
    std::uniform_int_distribution<unsigned int> distribution(0, size - 1);
    for (unsigned int i = 0; i < size * number_of_shuffles; i++)
    {
        unsigned int swap_from_idx = distribution(generator);
        unsigned int swap_to_idx = distribution(generator);
        Card * temp = deck.at(swap_from_idx);
        deck.at(swap_from_idx) = deck.at(swap_to_idx);
        deck.at(swap_to_idx) = temp;
    }
}

