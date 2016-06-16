
#include "asterisks.h"


int main ()
{
    int counter;

    printSpaces (13);
    printAsterisks (5);
    printEndLine ();

    for (counter = 0; counter < 3; counter++)
    {
        printSpaces (11 - 2 * counter);
        printAsterisk ();
        printSpaces (7 + 4 * counter);
        printAsterisk ();
        printEndLine ();
    }

    for (counter = 0; counter < 5; counter++)
    {
        printSpaces (5);
        printAsterisk ();
        printSpaces (19);
        printAsterisk ();
        printEndLine ();
    }

    for (counter = 2; counter >= 0; counter--)
    {
        printSpaces (11 - 2 * counter);
        printAsterisk ();
        printSpaces (7 + 4 * counter);
        printAsterisk ();
        printEndLine ();
    }

    printSpaces (13);
    printAsterisks (5);
    printEndLine ();
    
    return 0;
}
