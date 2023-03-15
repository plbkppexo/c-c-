#include <stdio.h>

double findAverage(char *filename)
{
    FILE *fin;
    double num;
    double total = 0;
    double average;
    int n = 0;
    fin = fopen(filename, "r");
    while ((fscanf(fin, "%lf", &num)) != EOF)
    {
        total += num;
        n++;
    }
    average = total / n;
    return average;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}