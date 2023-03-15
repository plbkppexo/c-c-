#include <stdio.h>
int main()
{
    int sub, i, credit, total_credit = 0;
    float grade, ans, total = 0, num;
    char s;
    printf("Enter number of subject(s): ");
    scanf("%d", &sub);
    for (i = 1; i <= sub; i++)
    {
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%c", &credit, &s);
        if (s == 'A' || s == 'a') grade = 4.0;
        else if (s == 'B' || s == 'b') grade = 3.0;
        else if (s == 'C' || s == 'c') grade = 2.0;
        else if (s == 'D' || s == 'd') grade = 1.0;
        else grade = 0;
        num = (grade * credit);
        total += num;
        total_credit += credit;
    }
    ans = total / total_credit;
    printf("GPA = %.2f", ans);
}