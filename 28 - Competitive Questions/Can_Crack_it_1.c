/* What will the following line produce in a C program : 
  int a = 3;
  printf("%d %d %d\n",a,++a,a++); 
*/

#include<stdio.h>

int main(){

    int a = 3;
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}

/* Because when printf is running so it will run right to left so,
   When printf runs --> a++ printing initialize value because of post-fix Operator
                        (Precedence of post-fix operator is less than Assignment operator,
                        so first of all value of a will assign so on 3rd place it will 
                        print 3 and after do increment.)
                    --> when ++a will run so it will contains two increment of a++ and 
                        ++a , so it will run and print value 5.
                    --> and in the end, when a will run so it will print value of a so
                        it will print 5.
                    --> so output will --> 5 5 3 --> that's unpredictable for C Beginners...
*/