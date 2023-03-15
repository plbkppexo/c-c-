#include <stdio.h>
#include <stdlib.h>
int main()
{
	char t[12];
	printf("Enter your goal amount: ");
	fgets(t, 12, stdin);
	float target = atof(t);
	float bit = atof(t);
	float money = 0;
	int day = 0;
	while (money < target)
	{
		char n[12];
		printf("Enter money collected today: ");
		fgets(n, 12, stdin);
		float num = atof(n);
		money = money + num;
		day++;
		bit -= num;
		if (money >= target){
			if (day == 1) {
				printf("Congratulations! You take 1 day to reach your goal.\n");
			} else {
				printf("Congratulations! You take %d days to reach your goal.\n", day);
			}
		} else {
			printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, money, bit);
		}
	}
}