void stringcat(char src[], char dest[])
{
    int i = 0;
    while (1)
    {
        if (dest[i] == '\0')
        {
            break;
        }
        i++;
    }
    int j = 0;
    while (1)
    {
        if (src[j] == '\0')
        {
            dest[i + j] = src[j];
            break;
        }
        else
        {
            dest[i + j] = src[j];
        }
        j++;
    }
}

int main()
{
    char in1[100], in2[100];

    printf("Input 1: ");
    gets(in1); /* read a line of characters from the input to "in1" variable */
    printf("Input 2: ");
    gets(in2); /* read another line of characters from the input to "in2" variable */
    stringcat(in1, in2);
    printf(" Output: ");
    printf("%s\n", in2);
    return 0;
}