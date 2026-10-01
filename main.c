
#include <stdio.h>
int main(void) {


    int num;
    int abs;


    printf("input an integer: ");
    scanf("%d", &num);
    
    if (num<0) {
        abs= - num;

    } else {
        abs = num;
    }


    printf("The absolute value of %d is %d\n", num, abs);

    return 0;
    
}