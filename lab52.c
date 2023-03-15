#include <stdio.h>

int remove_vowel(
    char str[])
{
    int i = 0, j;
    while (1)
    {
        if (str[i] == '\0')
        {
            break;
        }
        else if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            str[i] = str[i + 1];
            j = i + 1;
            while (1)
            {
                if (str[j] == '\0')
                {
                    break;
                }
                else
                {
                    str[j] = str[j + 1];
                }
                j++;
            }
            i--;
        }
        i++;
    }
}

int main()
{
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n", str);

    return 0;
}