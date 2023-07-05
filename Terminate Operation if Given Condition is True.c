//Terminate Operation in Given Condition
#include<stdio.h>
int main () {
    int n;
    
    for (;1;) {
    printf("Input a Number: \n");
    scanf("%d", &n);
    
    if (n%7 == 0) {
        printf("It is a multiple of 7. Operation Terminated \n");
        break;
    }
    printf("It is not a multiple of 7. \n\n");
    }
    return 0;
}