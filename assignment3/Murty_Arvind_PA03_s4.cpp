// Header Files
#include "formatted_cmdline_io_v11.h"
#include <cmath>

// Global Constant Definitions

    // none

// Global Function Prototypes

    // none
// Main Program Defintion
int main()
   {
    // initialize program

        // initialize variables
        int first_test_number = 0, second_test_number;
        double first_x1 = 0, first_y1 = 0, first_x2 = 0, first_y2 = 0;
        double second_x1 = 0, second_y1 = 0, second_x2 = 0, second_y2 = 0;
        double first_distance = 0, second_distance = 0;
        double first_midpoint_x = 0, first_midpoint_y, second_midpoint_x, second_midpoint_y = 0;
        double first_slope = 0, second_slope = 0;

        // show title, with underline
            // function: iostream <<
            cout << "2D Point Calculations" << endl << "=====================" << endl;

        // output a divider space
            // function: printEndLines
            printEndLines(1);

    // input Data

        // get first data set

            // acquire first test number from user
                // function: iostream <<, >>
                cout << "Enter first test number: ";
                cin >> first_test_number;

            // output a divider space
                // function: printEndLines
                printEndLines(1);

            // get first point from user

                // acquire x value
                    // function: iostream <<, >>
                    cout << "First Point (X1,Y1)" << endl;
                    cout << "Enter value for X1 (0.00 - 99.99) : ";
                    cin >> first_x1;

                // acquire y value
                    // function: iostream <<, >>
                    cout << "Enter value for Y1 (0.00 - 99.99) : ";
                    cin >> first_y1;

            // output a divider space
                // function: printEndLines
                printEndLines(1);

            // get second point from user
                
                // acquire x value
                    // function: iostream <<
                    cout << "Second Point (X2, Y2)" << endl;
                    // function: promptForDouble
                    first_x2 = promptForDouble("Enter value for X2 (0.00 - 99.99) : ");


                // acquire y value
                    // function: promptForDouble
                    first_y2 = promptForDouble("Enter value for Y2 (0.00 - 99.99) : ");

            // output a divider space
                // function: printEndLines
                printEndLines(1);

        // get second data set

            // acquire second test number from user
                // function: promptForInt
                second_test_number = promptForInt("Enter second test number: ");

            // output a divider space
                // function: printEndLines
                printEndLines(1);
            
            // get first point from user

                // acquire x value
                    // function: iostream <<
                    cout << "First Point (X1, Y1)" << endl;
                    // function: promptForDouble
                    second_x1 = promptForDouble("Enter value for X1 (0.00 - 99.99) : ");

                // acquire y value
                    // function: promptForDouble
                    second_y1 = promptForDouble("Enter value for Y1 (0.00 - 99.99) : ");


            // outpue a divider space
                // function: printEndLines
                printEndLines(1);

            // get second point from user
                
                // acquire x value
                    // function: iostream <<
                    cout << "Second Point (X2,Y2)" << endl;
                    // function: promptForDouble
                    second_x2 = promptForDouble("Enter value for X2 (0.00 - 99.99) : ");

                // acquire y value
                    // function: promptForDouble
                    second_y2 = promptForDouble("Enter value for Y2 (0.00 - 99.99) : ");

            // output a divider space
                // function: printEndLines
                printEndLines(1);


    // calculate midpoints

        // calculate midpoint one
        first_midpoint_x = (first_x1 + first_x2) / 2;
        first_midpoint_y = (first_y1 + first_y2) / 2;

        // calculate midpoint two
        second_midpoint_x = (second_x1 + second_x2) / 2;
        second_midpoint_y = (second_y1 + second_y2) / 2;

    // calculate distances

        // calculate distance one
        first_distance = sqrt((first_x1 - first_x2) * (first_x1 - first_x2) + (first_y1 - first_y2) * (first_y1 - first_y2));

        // calculate distance two
        second_distance = sqrt((second_x1 - second_x2) * (second_x1 - second_x2) + (second_y1 - second_y2) * (second_y1 - second_y2));

    // calculate slopes

        // calculate slope one
        first_slope = (first_y2 - first_y1) / (first_x2 - first_x1);

        // calculate slope two
        second_slope = (second_y2 - second_y1) / (second_x2 - second_x1);

    // output Data

        // print top line
            // function: printString
            printString("|------------------------------------------------------------------------|", 74, "CENTER");
            // function: printEndLines
            printEndLines(1);

        // print main title
            // function: printChar
            printChar('|');
            // function: printString
            printString("Calculation Table", 72, "CENTER");
            // function: printChar
            printChar('|');
            // function: printEndLines
            printEndLines(1);

        // print sub titles

            // print top line
                // function: printString
                printString("|------------------------------------------------------------------------|", 74, "CENTER");
                // function: printEndLines
                printEndLines(1);


            // print main subtitle line
                // function: printString
                printString("| Test | First Point | Second Point| Midpoint  |  Distance |    Slope    |", 74, "CENTER");
                // function: printEndLines
                printEndLines(1);

            // print bottom subtitle line
                // function: printString
                printString("| Num  |   (x1,y1)   |   (x2,y2)   |   Calc    |   Calc    |     Calc    |", 74, "CENTER");
                // function: printEndLines
                printEndLines(1);

            // print bottom line
                // function: printString
                printString("|------------------------------------------------------------------------|", 74, "CENTER");
                // function: printEndLines
                printEndLines(1);

        // print first data set

            // print left line edge (Pipe)
                // function: printChar
                printChar('|');

            // print test number
                // function: printInt
                printInt(first_test_number, 6, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print first point
                // function: printChar
                printChar('(');
                // function: printDouble
                printDouble(first_x1, 2, 5, "RIGHT");
                // function: printChar
                printChar(',');
                // function: printDouble
                printDouble(first_y1, 2, 5, "LEFT");
                // function: printChar
                printChar(')');

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print second point
                // function: printChar
                printChar('(');
                // function: printDouble
                printDouble(first_x2, 2, 5, "RIGHT");
                // function: printChar
                printChar(',');
                // function: printDouble
                printDouble(first_y2, 2, 5, "LEFT");
                // function: printChar
                printChar(')');

            // print divider char
                // function: printChar
                printChar('|');

            // print midpoint
                // function: printDouble
                printDouble(first_midpoint_x, 2, 5, "RIGHT");
                // function: printChar
                printChar(',');
                // function: printDouble
                printDouble(first_midpoint_y, 2, 5, "LEFT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print distance
                // function: printDouble
                printDouble(first_distance, 2, 11, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print slope
                // function: printDouble
                printDouble(first_slope, 2, 13, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print end of line
                // function: printEndLines
                printEndLines(1);

        // print second data set
        
            // print left line edge (Pipe)
                // function: printChar
                printChar('|');

            // print test number
                // function: printInt
                printInt(second_test_number, 6, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print first point
                // function: printChar
                printChar('(');
                // function: printDouble
                printDouble(second_x1, 2, 5, "RIGHT");
                // function: printChar
                printChar(',');
                // function: printDouble
                printDouble(second_y1, 2, 5, "LEFT");
                // function: printChar
                printChar(')');

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print second point
                // function: printChar
                printChar('(');
                // function: printDouble
                printDouble(second_x2, 2, 5, "RIGHT");
                // function: printChar
                printChar(',');
                // function: printDouble
                printDouble(second_y2, 2, 5, "LEFT");
                // function: printChar
                printChar(')');

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print midpoint
                // function: printDouble
                printDouble(second_midpoint_x, 2, 5, "RIGHT");
                // function: printChar
                printChar(',');
                // function: printDouble
                printDouble(second_midpoint_y, 2, 5, "LEFT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print distance
                // function: printDouble
                printDouble(second_distance, 2, 11, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print slope
                // function: printDouble
                printDouble(second_slope, 2, 13, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print end of line
                // function: printEndLines
                printEndLines(1);

            // print bottom line
                // function: printString
                printString("|------------------------------------------------------------------------|", 74, "CENTER");

            // print end of line
                // function: printEndLines
                printEndLines(1);

    // end program

        // return zero
        return 0;
   }

// Supporting function implementations

    // none
