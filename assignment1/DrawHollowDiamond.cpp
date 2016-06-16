

#include "asterisks.h"


int main()
{
    int line_counter = 1;

    printSpaces(10);
    printAsterisk();
    printEndLine();

    while (line_counter < 6)
    {
        printSpaces(10 - line_counter);
        printAsterisk();
        printSpaces(line_counter * 2 - 1);
        printAsterisk();
        printEndLine();
        ++line_counter;
    }

    while (line_counter - 6 < 4)
    {
        printSpaces(line_counter);
        printAsterisk();
        printSpaces(19 - line_counter * 2);
        printAsterisk();
        printEndLine();
        ++line_counter;
    }

    printSpaces(10);
    printAsterisk();
    printEndLine();

    return 0;
}
