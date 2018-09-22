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

int frequency(string note) { 
  int j = 0;
  if ((int) note[1] == 35) {
    j = 1;
  }
  else if ((int) note[1] == 98) {
    j = -1;
  }
  int diff_from_mid = atoi(&note[1 + abs(j)]) - 4;
  int freq = (int) note[0] - 65;
  int scale;
  if (freq == 1){
    scale = 2;
  }
  else if (freq == 2){
    scale = -9;
  }
  else if (freq == 3){
    scale = -7;
  }
  else if (freq == 4){
    scale = -5;
  }
  else if (freq == 5){
    scale = -4;
  }
  else if (freq == 6){
    scale = -2;
  }
  else if (freq == 7){
    scale = 0;
  }
  // BORED
  int scale = (freq == 0 || freq == 1) ? freq : freq - 8;

  int n = (diff_from_mid * 12) + scale + j;    
  float ffs = (n / 12.00);
  float frequency = pow(2.00, ffs) * 440;
  frequency = round(frequency);
  printf("%i\n", (int) frequency);
  return frequency;
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
