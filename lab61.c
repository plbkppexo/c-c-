#include <stdio.h>
#define ARRAY_SIZE 5

char calculateGrade(int midtermScore, int finalScore) {
    int score = midtermScore + finalScore;
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}
struct StudentRecord { 
char id[12];
int midterm;
int final;
};

int main()
{
    struct StudentRecord students[ARRAY_SIZE];
    int i;
    for (i=0; i <  ARRAY_SIZE; i++) {
        printf("Enter Student ID: ");
        scanf("%s", students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }
    char grade[5];
    for (i=0; i <  ARRAY_SIZE; i++) {
        grade[i] = calculateGrade(students[i].midterm, students[i].final);
    }
    for (i=0; i <  ARRAY_SIZE; i++) {
        printf("Student ID %s receives grade %c.\n", students[i].id, grade[i]);
    }
}