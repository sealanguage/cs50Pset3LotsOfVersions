// Helper functions for music

#include <cs50.h>
#include "helpers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// get the string
// find the / character. that char + 1 position is denom
// that char - 1 is the numer


// // Converts a fraction formatted as X/Y to eighths
// int duration(string fraction)

// int main(void)
// {

//             string fraction = get_string("enter a fraction:\n ");
//             // TODO
//             // take in a fraction of a string, assume numerator and demoniator are in one digit, return how many 8th notes long that note will last. it should be an integer. if num and denom are 1 digit long and have a slash in between.

//         // store the numbers in variables convert string to number    atoi
//         int numer = atoi(&fraction[0]);
//         int denom = atoi(&fraction[2]);

//         int frac = (8/denom) * numer;
//         printf("%i\n", frac);
//         return frac;
// }

// Calculates frequency (in Hz) of a note
// int frequency(string note)

int main(void)
{
            // TODO
            // input string note A#4 or A4. parse the string into note and octave. figure out where note and where octave is. calculate the frequency in the octave. return frequency
            // string named note
            // A4 = 440 h
    string fullnote = get_string("write a full note: \n");

    if (strlen(fullnote) == 3)
    {
        char letter = fullnote[0];
        char accidental = fullnote[1];
        int octave = atoi(&fullnote[2]);
        printf("%c %c %i", letter, accidental, octave);

    }
    if (strlen(fullnote) == 2)
    {
        char letter = fullnote[0];
        int octave = atoi(&fullnote[1]);
        printf("%c %i", letter, octave);

    }




}

// Determines whether a string represents a rest
// bool is_rest(string s)
// {
//     // TODO
//     // if a character in string s represents a rest, return true, otherwise return false
//     // rest represented by an empty line
//     // use string comapre (the lines in bday.txt) with the blank line


//     // will this work? is \n a single value? or should it be \0?
//     if  (strcmp(s, "") == 0)
//     //if (strcmp (s, second string) == 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }

// }
