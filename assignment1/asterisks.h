#ifndef ASTERISKS
#define ASTERISKS

/*
INSTRUCTIONS:
    
   This file can be used for the first laboratory.  It has several comments
   in it that explain how a program should look.  Comments are text parts of
   the program that are not compiled or used as part of the program. See
   comment information below.

   The area above these instructions is for programmer information; it is
   not required that you use this, but it is a good idea
   
*/

// There are two kinds of comments:

// Single-line comments can be typed like this with two forward slashes

/* 
Multiple-line comments can use the "slash-star" characters for the beginning, 
and the "star-slash" characters for the end.
*/

/*
END OF INSTRUCTIONS
*/

/*
Header files are necessary if you are using previously generated code
from other sources.  For example, you will need iostream to be able to
implement input and output actions with cin and cout.  You will need cmath
when you use functions that generate random numbers or functions that
calculate square roots, sines, cosines, etc.  You will also need to type
the "using namespace std:" after your include files
*/

// Header files
#include <iostream> // for console I/O
#include <cstdlib>

using namespace std;

/*
Your global constants can go immediately below your header file declarations.
Note that global constants are an excellent professional practice in
software development; global variables on the other hand, are a very bad
practice, and should rarely, if ever, be used.  While there might be some
value to using global variables in other places, they should NEVER be used
in any non-trivial program.
*/

// Global Constants
const char ASTERISK = '*';
const char SPACE = ' ';

void printAsterisk()
   {
    cout << '*';
   }

void printSpace()
   {
    cout << ' ';
   }

void printEndLine()
   {
    cout << endl;
   }

void printAsterisks( int numAsterisks )
   {
     while( numAsterisks > 0 )
        {   
         cout << ASTERISK;
         numAsterisks--;
        }
   }

void printSpaces( int numSpaces )
   {
    while( numSpaces > 0 )
       {
        cout << SPACE;
        numSpaces--;
       }
   }

void printEndLines( int numEndLines )
   {
    while( numEndLines > 0 )
       {
        cout << endl;
        numEndLines--;
       }
   }

#endif


