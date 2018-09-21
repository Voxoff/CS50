#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do { height = get_int("Height: "); }
    while (height < 0 || height >= 23);

    for (int i = 0; i < height; i++)
    {
        for (int s = 0; s < height - i - 1; s++)
        {
            printf(" ");
        }
        for (int q = 0; q <= i + 1; q++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

// height(4)   spaces i  height height - spaces
//    ##          3   0    4    1
//   ###          2   1    4    2
//  ####          1   2    4    3
// #####          0   3    4
