#include <stdio.h>
#include <cs50.h>

void hash(int n);
void space(int n);

// Gets input and prints pyramid with height "num" (num is betwwen 1 & 8)
int main(void)
{
    int num;
    do
    {
        num = get_int("Height: ");
    }
    while (num < 1 || num > 8);

    // Print (num-i) spaces and num '#'
    for (int i = 1; i <= num; i++)
    {
        space(num - i);
        hash(i);
        printf("  ");
        hash(i);
        printf("\n");
    }
}

// Print number of hashes
void hash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}

// Print number of spaces
void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
