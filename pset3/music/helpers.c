// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "helpers.h"
#include <math.h>

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
  int math = fraction[2] / 8; 
  return fraction[0] / math;
  return -1;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
  if((int) note[1] == 35 || (int) note[1] == 98)
  {
    int oct = atoi(&note[2]);
    int diff_from_mid = oct - 4;
    int freq = (int) note[0] - 65;
    int scale = (freq == 0 || freq == 1) ? freq : freq - 8;
    int n = (diff_from_mid * 8) - scale;
    n = strcmp(&note[1], "#") == 0 ? n + 1 : n -1;
    float ffs = n / 12.00;
    float frequency = pow(2.00, ffs) * 440;
    printf("%i\n", (int) frequency);
    return (int) frequency;
  }
  else
  {
    int oct = atoi(&note[1]);
    int diff_from_mid = oct - 4;
    int freq = (int) note[0] - 65;
    int scale = (freq == 0 || freq == 1) ? freq : freq - 8;
    int n = (diff_from_mid * 8) - scale;    
    float ffs = n / 12.00;
    float frequency = pow(2.00, ffs) * 440;
    printf("%i\n", (int) frequency);
    return (int) frequency;
  }
  return -1;
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
