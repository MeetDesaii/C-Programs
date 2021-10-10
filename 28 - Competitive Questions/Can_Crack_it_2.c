// What will be the output of this program?

#include<stdio.h>

int main(){

    int x = 1, y = 2;
    x = x + y - (y = x);
    printf("%d %d", x, y);
    return 0;
}

// Here first x = x + y - (y = x) will associatively run left to right... so for x = x + y --> Precedence of + operator is greater than = operator so the x + y will become 3... then x = 3 - (y = x)... the value of x will assign in y so it will become 1... then x = 3 - 1... so this program will give output as a value of x is 2 and as a value of y is 1...
 