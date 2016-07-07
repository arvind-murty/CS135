// Header Files
#include "formatted_cmdline_io_v11.h"
#include <cmath>
using namespace std;

// Global Constant Definitions
const double LOWER_COOR = 0.00;
const double HIGHER_COOR = 99.99;

// Global Function Prototypes
// Prints the title
    // Inputs: none
    // Outputs: none
void printTitle();

// Gets a coordinate
    // Inputs: lowerCoor, higherCoor
    // Outputs: coordinate
double getCoordinate(double lowerLimit, double higherLimit);

// Prints a divider line
    // Inputs: none
    // Outputs: none
void printDividerLine();

// Prints the top of the information table
    // Inputs: none
    // Outputs: none
void printTableTop();

// Prints one line of data
    // Inputs: testNum, x1, y1, x2, y2, midpoint_x, midpoint_y, distance, slope
    // Outputs: none
void printOneDataLine(int testNum, double x1, double y1, double x2, double y2, double midpoint_x, double midpoint_y, double distance, double slope);

// Calculates distance between two points
    // Inputs: x1, y1, x2, y2
    // Outputs: distance
double calcDistance(double x1, double y1, double x2, double y2);

// Calculates the midpoint of two coordinates
    // Inputs: coor1, coor2
    // Ouputs: midpointCoor
double calcMidCoor(double coor1, double coor2);

// Calculates the slope of a line using two points
    // Inputs: x1, y1, x2, y2
    // Outputs: slope
double calcSlope(double x1, double y1, double x2, double y2);

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
            // function: printTitle
            printTitle();

        // output a divider space
            // function: printEndLines
            printEndLines(1);

        // print divider line
            // function: printDividerLine
            printDividerLine();

        // output a divider space
            // function: printEndLines
            printEndLines(1);

    // input Data

        // get first data set

            // acquire first test number from user
                // function: promptForInt
                first_test_number = promptForInt("Enter first test number: ");

            // output a divider space
                // function: printEndLines
                printEndLines(1);

            // get first point from user

                // acquire x value
                    // function: iostream <<
                    cout << "Enter value for X1 ";
                    // function: getCoordinate
                    first_x1 = getCoordinate(LOWER_COOR, HIGHER_COOR);

                // acquire y value
                    // function: iostream <<
                    cout << "Enter value for Y1 "; 
                    // function: getCoordinate
                    first_y1 = getCoordinate(LOWER_COOR, HIGHER_COOR);

            // output a divider space
                // function: printEndLines
                printEndLines(1);

            // get second point from user
                
                // acquire x value
                    // function: iostream <<
                    cout << "Enter value for X2 ";
                    // function: getCoordinate
                    first_x2 = getCoordinate(LOWER_COOR, HIGHER_COOR);

                // acquire y value
                    // function: iostream <<
                    cout << "Enter value for Y2 ";
                    // function: getCoordinate
                    first_y2 = getCoordinate(LOWER_COOR, HIGHER_COOR);

            // output a divider space
                // function: printEndLines
                printEndLines(1);

            // print divider line
                // function: printDividerLine
                printDividerLine();

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
                    cout << "Enter value for X1 ";
                    // function: getCoordinate
                    second_x1 = getCoordinate(LOWER_COOR, HIGHER_COOR);

                // acquire y value
                    // function: iostream <<
                    cout << "Enter value for Y1 ";
                    // function: getCoordinate
                    second_y1 = getCoordinate(LOWER_COOR, HIGHER_COOR);

            // output a divider space
                // function: printEndLines
                printEndLines(1);

            // get second point from user
                
                // acquire x value
                    // function iostream <<
                    cout << "Enter value for X2 ";
                    // function: getCoordinate
                    second_x2 = getCoordinate(LOWER_COOR, HIGHER_COOR);

                // acquire y value
                    // function iostream <<
                    cout << "Enter value for Y2 ";
                    // function: getCoordinate
                    second_y2 = getCoordinate(LOWER_COOR, HIGHER_COOR);

            // output a divider space
                // function: printEndLines
                printEndLines(1);

    // calculate midpoints

        // calculate midpoint one
            // function: calcMidCoor
            first_midpoint_x = calcMidCoor(first_x1, first_x2);
            // function: calcMidCoor
            first_midpoint_y = calcMidCoor(first_y1, first_y2);

        // calculate midpoint two
            // function: calcMidCoor
            second_midpoint_x = calcMidCoor(second_x1, second_x2);
            // function: calcMidCoor
            second_midpoint_y = calcMidCoor(second_y1, second_y2);

    // calculate distances

        // calculate distance one
            // function: calcDistance
            first_distance = calcDistance(first_x1, first_y1, first_x2, first_y2);

        // calculate distance two
            // function: calcDistance
            second_distance = calcDistance(second_x1, second_y1, second_x2, second_y2);

    // calculate slopes

        // calculate slope one
            // function: calcSlope
            first_slope = calcSlope(first_x1, first_y1, first_x2, first_y2);

        // calculate slope two
            // function: calcSlope
            second_slope = calcSlope(second_x1, second_y1, second_x2, second_y2);

    // output Data

        // print table top
            // function: printTableTop
            printTableTop();

        // print first data set

            // print first line of data
                // function: printOneDataLine
                printOneDataLine(first_test_number, first_x1, first_y1, first_x2, first_y2, first_midpoint_x, first_midpoint_y, first_distance, first_slope);

        // print second data set

            // print second line of data
                // function: printOneDataLine
                printOneDataLine(second_test_number, second_x1, second_y1, second_x2, second_y2, second_midpoint_x, second_midpoint_y, second_distance, second_slope);

    // end program

        // return zero
        return 0;
   }

// Supporting function implementations
void printTitle()
   {
    // print title
        // function: iostream <<
        cout << "2D Point Calculations" << endl;
        cout << "=====================" << endl;
   }

double getCoordinate(double lowerLimit, double higherLimit)
   {
    // initialize variable
    double coordinate = 0;

    // get variable
        // function: iostream <<, >>
        cout << "<" << lowerLimit << " - " << higherLimit << "> : ";
        cin >> coordinate;

    // return variable
    return coordinate;
   }

void printDividerLine()
   {
    // print divider line
        // function: iostream <<
        cout << "|------------------------------------------------------------------------|" << endl;
   }

void printTableTop()
   {
    // print top title line
        // function: printString
        printString("|------------------------------------------------------------------------|", 74, "CENTER");
        // function: printEndLines
        printEndLines(1);

    // print title
        // function: printChar
        printChar('|');
        // function: printString
        printString("Calculation Table", 72, "CENTER");
        // function: printChar
        printChar('|');
        // function: printEndLines
        printEndLines(1);

    // print sub titles
        
        // print top subtitle line
            // function: printString
            printString("|------------------------------------------------------------------------|", 74, "CENTER");
            // function: printEndLines
            printEndLines(1);

        // print main subtitle line
            // function: printString
            printString("| Test | First Point | Second Point| Midpoint  |  Distance |    Slope    |", 74, "CENTER");
            // function: printEndLines
            printEndLines(1);

        // print units subtitle line
            // function: printString
            printString("| Num  |   (x1,y1)   |   (x2,y2)   |   Calc    |    Calc   |     Calc    |", 74, "CENTER");
            // function: printEndLines
            printEndLines(1);

        // print bottom subtitle line
            // function: printString
            printString("|------------------------------------------------------------------------|", 74, "CENTER");
            // function: printEndLines
            printEndLines(1);
   }

void printOneDataLine(int testNum, double x1, double y1, double x2, double y2, double midpoint_x, double midpoint_y, double distance, double slope)
   {
    // print data line
        // print divider char
            // function: printChar
            printChar('|');

        // print test num
            // function: printInt
            printInt(testNum, 6, "CENTER");

        // print divider char
            // function: printChar
            printChar('|');

        // print first point
            // function: printChar
            printChar('(');
            // function: printDouble
            printDouble(x1, 2, 5, "RIGHT");
            // function: printChar
            printChar(',');
            // function: printDouble
            printDouble(y1, 2, 5, "LEFT");
            // function: printChar
            printChar(')');

        // print divider char
            // function: printChar
            printChar('|');

        // print second point
            // function: printChar
            printChar('(');
            // function: printDouble
            printDouble(x2, 2, 5, "RIGHT");
            // function: printChar
            printChar(',');
            // function: printDouble
            printDouble(y2, 2, 5, "LEFT");
            // function: printChar
            printChar(')');

        // print divider char
            // function: printChar
            printChar('|');

        // print midpoint
            // function: printDouble
            printDouble(midpoint_x, 2, 5, "RIGHT");
            // function: printChar
            printChar(',');
            // function: printDouble
            printDouble(midpoint_y, 2, 5, "LEFT");
        
        // print divider char
            // function: printChar
            printChar('|');

        // print distance
            // function: printDouble
            printDouble(distance, 2, 11, "CENTER");

        // print divider char
            // function: printChar
            printChar('|');

        // print slope
            // function: printDouble
            printDouble(slope, 2, 13, "CENTER");
        
        // print divider char
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
   }

double calcDistance(double x1, double y1, double x2, double y2)
   {
    // initialize variable
    double distance = 0;

    // calculate distance
    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    // return variable
    return distance;
   }

double calcMidCoor(double coor1, double coor2)
   {
    // intitialze variable
    double coordinate = 0;

    // calculate coordinate of midpoint
    coordinate = (coor1 + coor2) / 2;

    // return variable
    return coordinate;
   }

double calcSlope(double x1, double y1, double x2, double y2)
   {
    // intialize variable
    double slope = 0;

    // calculate slope
    slope = (y2 - y1) / (x2 - x1);

    // return variable
    return slope;
   }
