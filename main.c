#include <stdio.h>
int main(void) {


    int num;
    printf("input a number: ");
    scanf("%d", &num);
    
    if (num>0) {
        printf("positive number\n");

    } else if (num<0) {
        printf("negative number\n");
    } else {
        printf("zero");
    }
    return 0;
    
}