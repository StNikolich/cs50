#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// Function declaration
int strpos(char *haystack, char *needle);

int main(void)
{
    string name = get_string();
    printf("%c%c\n", toupper(name[0]), toupper(name[strpos(name, " ") + 1]));
}

int strpos(char *haystack, char *needle)
{
   char *p = strstr(haystack, needle);
   if (p)
   {
      return p - haystack;
   }

   return -1;
}