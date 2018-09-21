// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    if(fraction)
    {
      return 2;
    }
  return -1;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    if(note)
    {
      return 440;
    }
  return -1;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    printf("%s", s);
    if(strcmp(s,"") == 0)
    {
      return true;
    }
    return false;
}
