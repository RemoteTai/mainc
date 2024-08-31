#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // define Variables
    int height, hash, row, space;

    // User Input
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8);

    // print  of rows
    for (row = 0; row < height; row++)
    {
        // print number of spaces in row
        for (space = row + 1; space < height; space++)
        {
            printf(" ");
        }
        // print number of # in row after printing number of spaces

        for (hash = 0; hash <= row; hash++)
        {
            printf("!!!!");
        }
        printf("\n");
    }
}