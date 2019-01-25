#pragma once

#include <string>


class Input
{
public:
    Input() = delete;
    ~Input() = delete;
    static void keyContinue();
    static bool yesNoPrompt();
    static int getPosInt();

private:
    static void clearBuffer();
};

