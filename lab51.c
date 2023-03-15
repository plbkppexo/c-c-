#include <stdio.h>

int main() {
    char s[50];
    printf("String (without a space): ");
	scanf("%s", s);
	int i, num = 0;
	for (i = 0; i < 50; i++){
		if (s[i] == '\0'){
			puts(" ");
			break;
		}
		if (s[i] == 'a' || s[i] == 'A') {
			num++;
			printf("%c ",s[i]);
		} else if (s[i] == 'e' || s[i] == 'E') {
			num++;
			printf("%c ",s[i]);
		} else if (s[i] == 'i' || s[i] == 'I') {
			num++;
			printf("%c ",s[i]);
		} else if (s[i] == 'o' || s[i] == 'O') {
			num++;
			printf("%c ",s[i]);
		} else if (s[i] == 'u' || s[i] == 'U') {
			num++;
			printf("%c ",s[i]);
		}
	}
	if (num == 0 || num == 1){
		printf("This string contains %d vowel.", num);
	} else {
		printf("This string contains %d vowels.", num);
	}


}