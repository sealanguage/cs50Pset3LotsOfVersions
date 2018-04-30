// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    // take in a fraction of a string, assume numerator and demoniator are in one digit, return how many 8th notes long that note will last. it should be an integer. if num and denom are 1 digit long and have a slash in between. 1/8 convert character into a number.
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
    // input string note A#4 or A4. parse the string into note and octave. figure out where note and where octave is. calculate the frequency in the octave. return frequency
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    // if s represents a rest, return true, otherwise return false
    // rest represented by an empty line
    if  (array[0] == '\n)
    {
        return true;
    }
    else
    {
        return false;
    }



}
