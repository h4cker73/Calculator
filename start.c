#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    system("clear");
    printf("\033[0;31m #############################################  \n");
    printf("\033[0;31m ##  Simple calculator coded By Mr MJT      ## \n");
    printf("\033[0;31m ##  This is my first project in C language ## \n");
    printf("\033[0;31m ############################################# \n");
    printf("\n"); 
    printf("{</>} please enter the first value [x] : ");
    scanf("%d", &x);
    printf("{</>} please enter the second value [y] : ");
    scanf("%d", &y);
    printf("\n");
    int add = x + y;
    int sub = x - y;
    int mul = x * y;
    int div = x / y;
    printf("{</>} x + y = %d\n", add);
    printf("{</>} x - y = %d\n", sub);
    printf("{</>} x * y = %d\n", mul);
    printf("{</>} x / y = %d\n", div);
    return 0;
}
