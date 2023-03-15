#include <stdio.h>
#include <string.h>

typedef struct
{
    char id[10];
    int score;

} studentRecord;

void init(studentRecord list[], int size)
{
    int i;
    char sd1[] = "55100001";
    char sd2[] = "55100002";
    char sd3[] = "55100003";
    for (i = 0; i < size; i++)
    {
        if (i == 0)
        {
            strcpy(list[i].id, sd1);
            list[i].score = 0;
        }
        else if (i == 1)
        {
            strcpy(list[i].id, sd2);
            list[i].score = 0;
        }
        else
        {
            strcpy(list[i].id, sd3);
            list[i].score = 0;
        }
    }
}

void enterScore(studentRecord list[], int size)
{
    char sd[10];
    int sc, i, j;
    for (i = 0; i < size; i++)
    {
        scanf("%s %d", sd, &sc);
        for (j = 0; j < size; j++)
        {
            if (strstr(list[j].id, sd) != NULL)
            {
                list[j].score = sc;
            }
        }
    }
}

void printRecords(studentRecord list[], int size)
{
    int i;

    printf("   ID        Score\n");
    for (i = 0; i < size; i++)
    {
        printf("%s       %d\n", list[i].id, list[i].score);
    }
}

int main()
{
    int enter;
    studentRecord list[3];

    init(list, 3);
    enterScore(list, 3);
    printRecords(list, 3);
    return 0;
}
