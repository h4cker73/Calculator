#include <stdio.h>
#include <stdlib.h>
// if you are coming to read the source code i want to tell  you that there is no malware inside the script,continue reading :)
int main() {
    int x, y;
    system("clear");
    printf("\033[0;31m #############################################  \n");
    printf("\033[0;31m ##  Simple calculator coded By Mr MJT      ## \n");
    printf("\033[0;31m ##  This is my first project in C language ## \n");
    printf("\033[0,31m ##   press CTRL + Z to exit the script     ## \n"); 
    printf("\033[0;31m ############################################# \n");
    printf("\n"); 
    int xx = 0;
    while (xx < 2)
    {
       printf("\n");
       printf("-please enter the first value : ");
       scanf("%d", &x);
       printf("-please enter the second value : ");
       scanf("%d", &y);
       printf("\n");
       int add = x + y;
       int sub = x - y;
       int mul = x * y;
       int div = x / y;
       printf("%d + %d = %d\n", x, y, add);
       printf("%d - %d = %d\n", x, y, sub);
       printf("%d * %d = %d\n", x, y, mul);
       printf("%d / %d = %d\n", x, y, div);
    }
}
