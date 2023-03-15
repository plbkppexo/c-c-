#include <stdio.h>

int main() {
    int hour, minute;
    char s[5];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %s", &hour, &minute, s);
    if (s[0] == 'a' || s[0] == 'A'){
        if (hour == 12){
            hour = 0;
        }
        printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
    } else {
        if (hour == 12){
            return printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
        }
        hour += 12;
        printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
    }
}