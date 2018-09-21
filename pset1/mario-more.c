#include <stdio.h>
#include <cs50.h>
int main(void) {
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    for(int count = 0; count < height; count++)
    {
        for(int space = 0; space < height - count - 1; space++)
        {
            printf(" ");
        }
        for(int hash = 0; hash < count + 1; hash ++)
        {
            printf("#");
        }
        printf("  ");
        for(int hash = 0; hash < count + 1; hash ++)
        {
            printf("#");
        }
        printf("\n");
    }
}
