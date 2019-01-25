#include "Input.h"
#include <iostream>


void Input::keyContinue()
{
    std::cout << "\nPress ENTER to continue...";
    std::cin.get();
    clearBuffer();
}

bool Input::yesNoPrompt()
{
    char choice;
    while (!(std::cin >> choice) ||
        choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
    {
        clearBuffer();
        std::cout << "Enter correct answer (y/n): ";
    }
    clearBuffer();
    choice = tolower(choice);

    if (choice == 'y')
        return true;
    else
        return false;
}

int Input::getPosInt()
{
    int temp;
    while (!(std::cin >> temp) || temp < 1)
    {
        clearBuffer();
        std::cout << "Enter correct positive integer value: ";
    }
    clearBuffer();
    return temp;
}

void Input::clearBuffer()
{
    std::cin.clear();
    while (std::cin.get() != '\n')
        continue;
}

