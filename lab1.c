#include <stdio.h>
int main() {
    int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    
    int day = computer_time/1440;
    int days = day*1440;
    int dayPiece = computer_time - days;
    int hour = dayPiece/60;
    int hours = hour*60;
    int hourPiece = dayPiece - hours;
    printf("It is %d days %d hours and %d minutes.\n",day,hour,hourPiece);

    return 0;
}