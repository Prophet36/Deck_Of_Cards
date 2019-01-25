#include "Card.h"
#include <string>


Card::Card(std::string face, std::string suit)
{
    m_face = face;
    m_suit = suit;
}

std::string Card::convertCardToString(void) const
{
    std::string StringRepresentation = m_face + " of " + m_suit;
    return StringRepresentation;
}

