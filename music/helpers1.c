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
    string fullnote = get_string("write a full note: ");
    char letter;
    char accidental = 0;
    float octave;

    if (strlen(fullnote) == 3)
    {
        letter = fullnote[0];
        accidental = fullnote[1];
        octave = atoi(&fullnote[2]);
        printf("%c %c %f\n", letter, accidental, octave);
        printf("3 chars octave = %.2f\n", octave);
        printf("3 chars accidental = %c\n", accidental);
        printf("3 chars letter = %c\n", letter);

    }
    if (strlen(fullnote) == 2)
    {
        letter = fullnote[0];
        octave = atoi(&fullnote[1]);
        printf("%c %f\n", letter, octave);
        printf("2 chars octave = %.2f\n", octave);
        printf("2 chars letter = %c\n", letter);
    }

    // find the hz value for each octave
    // float obaseline = 4.00;
    float basehz = 440.00;
    int octcount = 0;
    float hz;

    if (octave == 4)
    {
        printf("octave of 4 = %f\n", basehz);
    }

     // do the math if octave is > 4 -- 440 x 2 for each number more than 4; / 2 for each counter less than 4
    // gets octave and letter, does math to get setps from A4, does not calculate pow of 2 to 440.

    else if (octave > 4)
    {
        octcount = (octave - 4);
        hz = 440 * pow(2, octcount);
        printf("Hertz is %.2f\n", hz);
        printf("octcount value = %i\n", octcount);
        printf("basehz = %.2f\n", basehz);

    }
    else if (octave < 4)
    {
        octcount = 4 - octave;
        hz = 440 / pow(2, octcount);
        printf("Hertz is %.2f\n", hz);
        printf("octave is less than 4\n");
    }


    // for each note, take octave hz x 2 x/12 to get hz; return hz


    // const string NOTES[] = {"C", "C#", "D", "D#", "E", "F",
    //                     "F#", "G", "G#", "A", "A#", "B"
    //                   };

    // printf("Notes: %s\n", NOTES[0]);
    // char freq = 0;
    // float hzresult = 1;

    float hertz = 0.0;
    float numerator = 0.0;
    float themath = pow(2.0, (numerator/12));


    switch (letter)
    {
        case 'A':
        // code to be executed if n is equal to constant1;
            {
                printf("A octave before = %.2f, hz = %.2f\n", octave, hz);
                numerator = 12.0;
                hertz = hz * themath;
                printf("A octcount after = %.2d, hertzz = %.2f\n", octcount, hertz);
                printf("A case A hertz = %.2f\n", hz);
                break;
            }


        case 'B':
        // code to be executed if n is equal to constant2;
        {
            printf("B octave before = %.2f, hz = %.2f\n", octave, hz);
            float power = pow(2, (2.0/12));
            hertz = hz * power;
            printf("B octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }

        case 'C':
        // code to be executed if n is equal to constant2;
        {
            printf("C octave before = %.2f, hz = %.2f\n", octave, hz);
            float power = pow(2, (3.0/12));
            hertz = hz * power;
            printf("C octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }

        case 'D':
        // code to be executed if n is equal to constant2;
        {
            printf("D octave before = %.2f, hz = %.2f\n", octave, hz);
            float power = pow(2, (5.0/12));
            hertz = hz * power;
            printf("D octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }

        case 'E':
        // code to be executed if n is equal to constant2;
        {
            printf("E octave before = %.2f, hz = %.2f\n", octave, hz);
            float power = pow(2, (7.0/12));
            hertz = hz * power;
            printf("E octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }

        case 'F':
        // code to be executed if n is equal to constant2;
        {
            printf("F octave before = %.2f, hz = %.2f\n", octave, hz);
            float power = pow(2, (8.0/12));
            hertz = hz * power;
            printf("F octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }
        case 'G':
        // code to be executed if n is equal to constant2;
        {
            printf("G octave before = %.2f, hz = %.2f\n", octave, hz);
            float power = pow(2, (10.0/12));
            hertz = hz * power;
            printf("g octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }
    }


    switch (accidental)
    {
        case '#':
        // code to be executed if n is equal to constant1;
            {
                printf("A octave before = %.2f, hz = %.2f\n", octave, hz);
                float power = pow(2, (1.0/12));
                hertz = hertz * power;
                printf("A octcount after = %.2d, hertzz = %.2f\n", octcount, hertz);
                printf("A case A hertz = %.2f\n", hz);
                break;
            }


        case 'b':
        // code to be executed if n is equal to constant2;
        {
            printf("B octave before = %.2f, hz = %.2f\n", octave, hz);
            float power = pow(2, (1.0/12));
            hertz = (hertz / power);
            printf("B octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }

        default:
        // code to be executed if n is equal to constant2;
        {
            printf("B octave before = %.2f, hz = %.2f\n", octave, hz);
            // float power = pow(2, (1.0/12));
            // float hertz = hertz / ;
            // printf("B octcount after = %.2d, hertz = %.2f\n", octcount, hertz);
            break;
        }
    }





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
