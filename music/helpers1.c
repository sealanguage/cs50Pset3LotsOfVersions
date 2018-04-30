// Helper functions for music

#include <cs50.h>
#include <helpers.h>
#include <stdlib.h>
#include <string.h>


int atoi(s[0]);
int atoi(s[2]);
int num = s[0];
int denom = s[2];



// // Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
            // TODO
            // take in a fraction of a string, assume numerator and demoniator are in one digit, return how many 8th notes long that note will last. it should be an integer. if num and denom are 1 digit long and have a slash in between. 1/8 convert character into a number.
        // get the string
        // convert string to number    atoi
        int frac = (8/s[2]) x s[0];
        return (8/s[2]) x s[0];
}

// // Calculates frequency (in Hz) of a note
// int frequency(string note)
// {
//             // TODO
//             // input string note A#4 or A4. parse the string into note and octave. figure out where note and where octave is. calculate the frequency in the octave. return frequency
            // string named note
            // A4 = 440 hz
            //
// }

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    // if a character in string s represents a rest, return true, otherwise return false
    // rest represented by an empty line
    // use string comapre (the lines in bday.txt) with the blank line


    // will this work? is \n a single value? or should it be \0?
    if  (strcmp(s[0] == '\n'))
    {
        return true;
    }
    else
    {
        return false;
    }

}
