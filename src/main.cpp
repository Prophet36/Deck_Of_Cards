#include "Card.h"
#include "Deck.h"
#include "DeckShuffler.h"
#include "Input.h"
#include <iostream>
#include <vector>

void run();

int main()
{
    std::cout << "Welcome to my program!\n";

    run();

    std::cout << "Thank you for using my program!\n";
    Input::keyContinue();
    return 0;
}

void run()
{
    std::cout << "Creating deck of cards...\n";
    Deck deck;
    std::cout << "Do you want to print deck? (y/n)\n";

    if (Input::yesNoPrompt())
    {
        std::cout << deck.printDeck();
    }

    std::cout << "Do you want to shuffle deck? (y/n)\n";
    bool shuffle = Input::yesNoPrompt();

    while (shuffle)
    {
        {
            std::cout << "How many times do you want to shuffle deck?\n";
            int shuffle_times = Input::getPosInt();
            std::cout << "Shuffling deck of cards...\n";
            DeckShuffler::shuffleDeck(deck.getDeck(), shuffle_times);
            std::cout << "Do you want to print shuffled deck? (y/n)\n";
            if (Input::yesNoPrompt())
            {
                std::cout << deck.printDeck();
            }
        }
        std::cout << "Do you want to shuffle deck again? (y/n)\n";
        if (!Input::yesNoPrompt())
            break;
    }

    return;
}

