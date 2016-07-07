// Header Files
#include "formatted_cmdline_io_v11.h"
#include <cmath>
using namespace std;

// Global Constant Definitions

// Global Function Prototypes
// Prints the title
    // Inputs: none
    // Outputs: none
void printTitle();

// Gets a coordinate
    // Inputs: lowerCoor, higherCoor
    // Outputs: coordinate
double getCoordinate(lowerCoor, higherCoor);

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
double calcMidpoint(double coor1, double coor2);

// Calculates the slope of a line using two points
    // Inputs: x1, y1, x2, y2
    // Outputs: slope
double calcSlope(double x1, double y1, double x2, double y2);

// Main Program Defintion
int main()
   {
    // initialize program

        // initialize variables

        // show title, with underline
            // function: printTitle

        // output a divider space
            // function: printEndLines

        // print divider line
            // function: printDividerLine

        // output a divider space
            // function: printEndLines

    // input Data

        // get first data set

            // acquire first test number from user
                // function: promptForInt

            // output a divider space
                // function: printEndLines

            // get first point from user

                // acquire x value
                    // function: getCoordinate

                // acquire y value
                    // function: getCoordinate

            // output a divider space
                // function: printEndLines

            // get second point from user
                
                // acquire x value
                    // function: getCoordinate

                // acquire y value
                    // function: getCoordinate

            // output a divider space
                // function: printEndLines

            // print divider line
                // function: printDividerLine

            // output a divider space
                // function: printEndLines

        // get second data set

            // acquire second test number from user
                // function: promptForInt

            // output a divider space
                // function: printEndLines
            
            // get first point from user

                // acquire x value
                    // function: getCoordinate

                // acquire y value
                    // function: getCoordinate

            // output a divider space
                // function: printEndLines

            // get second point from user
                
                // acquire x value
                    // function: getCoordinate

                // acquire y value
                    // function: getCoordinate

            // output a divider space
                // function: printEndLines

    // calculate midpoints

        // calculate midpoint one
            // function: calcMidCoor
            // function: calcMidCoor

        // calculate midpoint two
            // function: calcMidCoor
            // function: calcMidCoor

    // calculate distances

        // calculate distance one
            // function: calcDistance

        // calculate distance two
            // function: calcDistance

    // calculate slopes

        // calculate slope one
            // function: calcSlope

        // calculate slope two
            // function: calcSlope

    // output Data

        // print table top
            // function: printTableTop

        // print first data set

            // print first line of data
                // function: printOneDataLine

        // print second data set

            // print second line of data
                // function: printOneDataLine

    // end program

        // return zero
        return 0;
   }

// Supporting function implementations
