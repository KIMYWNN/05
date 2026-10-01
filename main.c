
#include <stdio.h>
int main(void) {


    int count =0; // 숫자 문자 개수 세는 변수
    char c;

    printf("input a string: ");
    




   while ( (c = getchar()) != '\n') {

    if ( c>= '0' && c <= '9') {
        count ++;
    }
   }


    printf("The number of digits is %d\n", count);

    return 0;
    
}