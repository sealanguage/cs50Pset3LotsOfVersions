// Helper functions for music

#include <cs50.h>
#include "helpers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


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
    printf("10 power 2 %.2f\n", pow(float(10.00), float(2.00)));    //  this does not printf
    string fullnote = get_string("write a full note: \n");
    int octave;

    if (strlen(fullnote) == 3)
    {
        char letter = fullnote[0];
        char accidental = fullnote[1];
        octave = atoi(&fullnote[2]);
        printf("%c %c %i\n", letter, accidental, octave);
        printf("3 octave = %i\n", octave);
        printf("3 letter = %c\n", letter);

    }
    if (strlen(fullnote) == 2)
    {
        char letter = fullnote[0];
        octave = atoi(&fullnote[1]);
        printf("%c %i\n", letter, octave);
        printf("2 octave = %i\n", octave);
        printf("2 letter = %c\n", letter);
    }

    // float obaseline = 4.00;
    float basehz = 440.00;
    int octcount = 0;
    //float hz;

    if (octave == 4)
    {
        return 440;
    }
    else if (octave > 4)
    {

        octcount = (octave - 4) + 1;
        printf("octcount value = %i\n", octcount);
        printf("basehz = %.2f\n", basehz);
        printf("octave 5 ^ 2 math: %.2f\n", round(pow(2, octcount)));

    }
    else if (octave < 4)
    {
        octcount = 4 - octave;
    }
    printf("octave counter = %i\n", octcount);

    // do the math if octave is > 4 -- 440 x 2 for each number more than 4; / 2 for each counter less than 4




    // for (int i = 0; i > obaseline; i++)
    // {

    //     //multiply A4 by 2 for each additional octave
    //     octcount++;
    //     int octhz = basehz * 2;
    //     return octhz;
    //     printf("%d", octhz);
    //     printf("end of hz math\n");

    // }



}

// Determines whether a string represents a rest
// bool is_rest(string s)
// {
//     // TODO
//     // if a character in string s represents a rest, return true, otherwise return false
//     // rest represented by an empty line
//     // use string comapre (the lines in bday.txt) with the blank line


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
