// Helper functions for music

#include <cs50.h>
#include "helpers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int numer = atoi(&fraction[0]);
        int denom = atoi(&fraction[2]);

        int frac = (8/denom) * numer;
        return frac;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
    string fullnote = get_string("write a full note: \n");
    int octave;
    note = fullnote;

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

     // find the hz value for each octave
    // float obaseline = 4.00;
    float basehz = 440.00;
    int octcount = 0;
    float hz;

    if (octave == 4)
    {
        printf("octave of 4 = 440\n");
        //return 440;
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

    // subtract octave from for to get power of 2 division for lower octave hz values
    else if (octave < 4)
    {
        octcount = 4 - octave;
        hz = 440 / pow(2, octcount);
        printf("Hertz is %.2f\n", hz);
        printf("octave is less than 4\n");
    }


    // for each note, take octave hz x 2 x/12 to get hz; return hz

}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if  (strcmp(s, "") == 0)
    //if (strcmp (s, second string) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}





// /**
//  * Prompts user for a line of text from standard input and returns
//  * it as a string (char *), sans trailing line ending. Supports
//  * CR (\r), LF (\n), and CRLF (\r\n) as line endings. If user
//  * inputs only a line ending, returns "", not NULL. Returns NULL
//  * upon error or no input whatsoever (i.e., just EOF). Stores string
//  * on heap, but library's destructor frees memory on program's exit.
//  */
// string get_string(va_list *args, const string format, ...) __attribute__((format(printf, 2, 3)));
// string GetString(void) __attribute__((deprecated));
// #define get_string(...) __extension__ IF_ELSE(ISEMPTY(__VA_ARGS__))(WARN(get_string(NULL, NULL)))(get_string(NULL, __VA_ARGS__))
