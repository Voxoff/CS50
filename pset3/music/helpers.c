// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "helpers.h"
#include <math.h>

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
  int denom = atoi(&fraction[2]);
  int div, res;
  if(denom < 8)
  {
    div = 8 / denom;
    res = atoi(&fraction[0]) * div;
  }
  else if(denom > 8)
  {
    div = denom / 8;
    res = atoi(&fraction[0]) / div;
  }
  else
  {
    res = atoi(&fraction[0]);
  }
  return res;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{ 
  int j = ((int) note[1] == 35 || (int) note[1] == 98) ? 0 : 1;
  int diff_from_mid = atoi(&note[1 + j]) - 4;
  int freq = (int) note[0 + j] - 65;
  int scale = (freq == 0 || freq == 1) ? freq : freq - 8;
  int n = (diff_from_mid * 8) + scale;    
  float ffs = n / 12.00;
  float frequency = pow(2.00, ffs) * 440;
  return (int) frequency;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if(strcmp(s,"") == 0)
    {
      return true;
    }
    return false;
}
