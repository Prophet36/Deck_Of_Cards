#pragma once

#include <string>


class Card
{
private:
    std::string m_face;
    std::string m_suit;

public:
    Card(std::string face, std::string suit);
    std::string convertCardToString(void) const;
};

