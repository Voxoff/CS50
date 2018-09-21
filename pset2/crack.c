#include <cs50.h>
#include <stdio.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <string.h>
#define _GNU_SOURCE
#include <crypt.h>

// HASH: 50fkUxYHbnXGw
// PW: ROFL

void check(char* salt, char* key);

int main(int argc, string argv[])
{
  if (argc != 2)
  {
    printf("Usage ./crack k");
    return 1;
  }
  char *key = argv[1];
  char *salt = malloc(5);
  for(int i = 97; i <= 122; i++)
  {
    salt[0] = (char) i;
    check(salt,key);
  }
  // Two
  for(int i = 97; i <= 122; i++)
  {
    salt[0] = (char) i;
    for(int j = 97; j <= 122; j++)
    {
      salt[1] = (char) j;
      check(salt,key);
    }
  }
  // Three
  for(int i = 97; i <= 122; i++)
  {
    salt[0] = (char) i;
    for(int j = 97; j <= 122; j++)
    {
      salt[1] = (char) j;
      for(int k = 97; k <= 122; k++)
      {
        salt[2] = (char) k;
        check(salt,key);
      }
    }
  }
  // Four
  for(int i = 97; i <= 122; i++)
  {
    salt[0] = (char) i;
    for(int j = 97; j <= 122; j++)
    {
      salt[1] = (char) j;
      for(int k = 97; k <= 122; k++)
      {
        salt[2] = (char) k;
        for(int l = 97; l <= 122; l++)
        {
          salt[3] = (char) l;
          check(salt,key);
        }
      }
    }
  }
  for(int i = 97; i <= 122; i++)
  {
    salt[0] = (char) i;
    for(int j = 97; j <= 122; j++)
    {
      salt[1] = (char) j;
      for(int k = 97; k <= 122; k++)
      {
        salt[2] = (char) k;
        for(int l = 97; l <= 122; l++)
        {
          salt[3] = (char) l;
          for(int a = 97; a <= 122; a++)
          {
            salt[4] = (char) a;
            check(salt,key);
          }
        }
      }
    }
  }
  return -1;
}

void check(char* salt, char* key)
{
  char *pass = crypt(salt,key);
  if(strcmp(pass, key) == 0)
  {
    printf("SUCCESS: PASSWORD IS %s\n", salt);
  }
}
// int main(void)
// {

//   char *key = "50fkUxYHbnXGw";
//   char *salt = "rofl";
//   printf("%s\n", key); 
//   printf("%s\n", salt);
//   char *ans = crypt(salt, key);
//   printf("%s\n", ans);
// }



// anushree:50xcIMJ0y.RXo
// brian:50mjprEcqC/ts
// bjbrown:50GApilQSG3E2
// lloyd:50n0AAUD.pL8g
// malan:50CcfIk1QrPr6
// maria:509nVI8B9VfuA
// natmelo:50JIIyhDORqMU
// rob:50JGnXUgaafgc
// stelios:51u8F0dkeDSbY
// zamyla:50cI2vYkF0YU2
