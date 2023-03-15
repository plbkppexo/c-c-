#include <stdio.h>

int charcount(char *s)
{

    int i = 0;
    int j = 0;
    while (1)
    {
        if (s[i] == '\0')
        {
            break;
        }
        else
        {
            j++;
        }
        i++;
    }
    return j;
}

void charweave(char *s, char *result)
{
    int i = 0;
    int j = 0;
    int k = charcount(s) - 1;
    int m = 0;
    while (1)
    {
        if (s[j + i] == '\0')
        {
            result[m] = s[j + i];
            break;
        }
        else
        {
            result[m] = s[j + i];
            m++;
            result[m] = s[k - i];
        }
        m++;
        i++;
    }
}

int main()
{
    char str[100], result[200];

    printf("String: ");
    gets(str); /* read a line of characters from the input to "str" variable */
    charweave(str, result);
    printf("Output: %s\n", result);
    return 0;
}