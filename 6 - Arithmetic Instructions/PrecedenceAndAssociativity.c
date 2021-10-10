// Explain step by step evaluation of 3*x/y-z+k where x=2, y=3, z=3, k=1...

#include<stdio.h>

int main(){

    int x=2, y=3, z=3, k=1;
    int result = 3*x/y-z+k;

    printf("Result of this Instruction : %d",result);
    return 0;
}

/* result = 3 * x / y - z + k         --> If precedence is same so it will perform left to right associativity...
   result = 3 * 2 / 3 - 3 + 1
   result = 6 / 3 - 3 + 1
   result = 2 - 3 + 1
   result = -1 + 1
   result = 0
*/