#include <stdio.h>

int main() {
    char n[] = "|---|";
    char h[] = "|-O-|";
    char l[] = "|-^-|";
    int i = 1,step = 2;
    int j, num, walk;
    while(1){
        if (i == 1) {
            printf("Input number of stairs: ");
            scanf("%d", &num);
            if (num == 0){
                printf("---- round %d ----\n", i);
                break;
            } else {
                printf("---- round %d ----\n", i);
                for (j = 1;j <= num; j++){
                    if (j == num - 1) printf("%s\n", h); 
                    else if (j == num) printf("%s\n", l); 
                    else printf("%s\n", n); 
                }
            }
        } else {
            printf("Input step command: ");
            scanf("%d", &walk);
            if (walk == 0){
                return 0;
            } else if (walk > 0){
                printf("---- round %d ----\n", i);
                step += walk;
                if (step >= num){
                    step = num;
                    for (j = num; j >= 1; j--){
                        if (j == num) printf("%s\n", h); 
                        else if (j == num - 1) printf("%s\n", l); 
                        else printf("%s\n", n); 
                    }
                } else {
                    for (j = num; j >= 1; j--){
                        if (j == step) printf("%s\n", h); 
                        else if (j == step - 1) printf("%s\n", l); 
                        else printf("%s\n", n);
                    }
                }
            } else {
                printf("---- round %d ----\n", i);
                step += walk;
                if (step <= 2){
                    step = 2;
                    for (j = 1; j <= num; j++){
                        if (j == num - 1) printf("%s\n", h); 
                        else if (j == num) printf("%s\n", l); 
                        else printf("%s\n", n); 
                        }
                } else {
                    for (j = num; j >= 1; j--){
                        if (j == step) printf("%s\n", h); 
                        else if (j == step - 1) printf("%s\n", l); 
                        else printf("%s\n", n);
                    }
                }
            }
        }
    i++;
    }
}