#include <cs50.h>
#include <stdio.h>

int hashes(void);

int main(void)
{
    printf("How many columns? (1-8)\n"); //asks user how many columns they want
    int height;
    do
    {
        height = get_int("Column height (1-8): "); //gets the column height
    }
    while ((height < 1) || (height > 8)); // only allows numbers 1-23

    for (int loop = 1; loop <= height; loop++)
        {
        for (int space = (height - loop); space > 0; space--)
            {
            printf(" "); // prints the blank spaces
            }
        for (int length = 1; length <= loop; length++)
            {
            printf("#"); // prints the hashtags
            }
        printf("  ");
        for (int length = 1; length <= loop; length++)
            {
            printf("#"); // prints the hashtags
            }
        printf("\n");
        }
}
