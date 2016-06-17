// Header Files
#include "formatted_cmdline_io_v11.h"

// Global Constant Definitions

    // none

// Global Function Prototypes

    // none

// Main Program Definition
int main()
   {
    // initialize program

        // initialize variables
        int test_number_1 = 0, test_number_2 = 0;
        string force_name_1 = "", force_name_2 = "";
        double first_force = 0.0, second_force = 0.0, first_acceleration = 0.0, second_acceleration = 0.0, first_mass = 0.0, second_mass = 0.0;

        // show title, with underline
            // function: iostream <<
            cout << "Mass Calculation Program" << endl << "========================";
            // function: printEndLines
            printEndLines(2);

    // input Data

        // get test numbers from user

            // acquire first experimental test number
                // function: iostream <<, >>
                cout << "Enter first experimental test number     : ";
                cin >> test_number_1;

            // acquire second experimental test number
                // function: promptForInt
                test_number_2 = promptForInt("Enter second experimental test number    : ");

        // output a divider space
            // function: printEndLines
            printEndLines(1);

        // get force name from user

            // acquire first force name
                // function: iostream <<, >>
                cout << "Enter first force name (cause of force)  : ";
                cin >> force_name_1;

            // acquire second force name
                // function: promptForString
                force_name_2 = promptForString("Enter second force name (cause of force) : ");

        // output a divider space
            // function: printEndLines
            printEndLines(1);

        // get force from user

            // acquire first force value
                // function iostream <<, >>
                cout << "Enter first force (Newtons)              : ";
                cin >> first_force;

            // acquire second force value
                // function promptForDouble
                second_force = promptForDouble("Enter second force (Newtons)             : ");

        // output a divider space
            // function: printEndLines
            printEndLines(1);

        // get acceleration from user

            // acquire first acceleration value
                // function: iostream <<, >>
                cout << "Enter first acceleration (m/s/s)         : ";
                cin >> first_acceleration;

            // acquire second acceleration value
                // function: promptForDouble
                second_acceleration = promptForDouble("Enter second acceleration (m/s/s)        : ");

    // calculate masses

        // calculate mass one
        first_mass = first_force / first_acceleration;

        // calculate mass two
        second_mass = second_force / second_acceleration;

    // output Data

        // make vertical space
            // function: printEndLines
            printEndLines(1);

        // print top line
            // function: printString
            printString("|--------------------------------------------------------------|", 64, "CENTER");
            // function: printEndLines
            printEndLines(1);

        // print main title
            // function: printChar
            printChar('|');
            // function: printString
            printString("DATA PRESENTATION", 62, "CENTER");
            // function: printChar
            printChar('|');
            // function: printEndLines
            printEndLines(1);

        // print sub titles

            // print top line
                // function: printString
                printString("|--------|---------------|----------|---------------|----------|", 64, "CENTER");
                // function: printEndLines
                printEndLines(1);

            // print main subtitle line
                // function: printString
                printString("|  Test  |   Force Name  |   Force  |  Acceleration |   Mass   |", 64, "CENTER");
                // function: printEndLines
                printEndLines(1);

            // print subtitle units line
                // function: printString
                printString("|   Num  |    (cause)    | (Newtons)|    (m/s/s)    |   (Kg)   |", 64, "CENTER");
                // function: printEndLines
                printEndLines(1);

            // print bottom line
                // function: printString
                printString("|--------|---------------|----------|---------------|----------|", 64, "CENTER");
                // function: printEndLines
                printEndLines(1);

        // print first data set

            // print left line edge (Pipe)
                // function: printChar
                printChar('|');

            // print test number
                // function: printInt
                printInt(test_number_1, 8, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print force name
                // function: printString
                printString(force_name_1, 15, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');
 
            // print force
                // function: printDouble
                printDouble(first_force, 2, 10, "RIGHT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print acceleration
                // function: printDouble
                printDouble(first_acceleration, 2, 15, "RIGHT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print mass
                // function: printDouble
                printDouble(first_mass, 2, 10, "RIGHT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print end of line
                // function: printEndLines
                printEndLines(1);

        // print second data set
            
            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print test number
                // function: printInt
                printInt(test_number_2, 8, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print force name
                // function: printString
                printString(force_name_2, 15, "CENTER");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');
 
            // print force
                // function: printDouble
                printDouble(second_force, 2, 10, "RIGHT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print acceleration
                // function: printDouble
                printDouble(second_acceleration, 2, 15, "RIGHT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print mass
                // function: printDouble
                printDouble(second_mass, 2, 10, "RIGHT");

            // print divider char (Pipe)
                // function: printChar
                printChar('|');

            // print end of line
                // function: printEndLines
                printEndLines(1);

        // print bottom line
            // function: printString
            printString("|--------|---------------|----------|---------------|----------|", 64, "CENTER");


    // end program

        // print vertical space
            // function: printEndLines
            printEndLines(1);

        // return zero
       return 0;
   }

// Supporting function implementations

    // none


