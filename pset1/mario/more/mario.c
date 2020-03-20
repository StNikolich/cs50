#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function declaration
char *str_repeat(char *str, size_t count);

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    for (int i = 1; i <= height; i++)
    {
        printf("%s%s  %s\n", str_repeat(" ", height - i), str_repeat("#", i), str_repeat("#", i));
    }
}

// Function to repeat string or char
char *str_repeat(char *str, size_t count)
{
    // Check if count zero
    if (count <= 0)
    {
        return "";
    }

    // Requesting memory for value
    char *result = malloc(strlen(str) * count + count);

    // If NULL so mean fails for requesting memory
    if (result == NULL)
    {
        return "";
    }

    do
    {
        strcat(result, str);
    }
    while (--count > 0);

    return result;
}