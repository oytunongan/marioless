#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ((height < 1) || (height > 8));
    int i;
    int j;
    int k;
    for (k = 1; k <= height; k++)
    {
        for (j = height - k; j < height; j++)
        {
            for (i = height - k; (i > 0) && (j == (height - k)); i--)
            {
                printf(" ");
            }
            printf("#");
        }
        printf("\n");
    }
}