// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
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
