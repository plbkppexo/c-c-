#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *
stoupper(const char str[])
{
    char *s = (char *)malloc(sizeof(char) * 100);
    int i = 0;
    while (1)
    {
        if (str[i] == '\0')
        {
            s[i] = str[i];
            break;
        }
        else
        {
            s[i] = str[i];
        }
        i++;
    }
    int j = 0;
    while (1)
    {
        if (s[j] == '\0')
        {
            break;
        }
        else
        {
            s[j] = toupper(s[j]);
        }
        j++;
    }
    return s;
}

int main()
{
    char s[100];
    char *result;

    scanf("%s", s);
    result = stoupper(s);
    if (result == s)
        printf("ERROR.\n");
    printf("%s\n", result);
}