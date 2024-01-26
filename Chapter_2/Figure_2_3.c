/*Fig 2.3: fig02_03.c
Addition program*/

#include <stdio.h>
/* function main begins program execution */
int main ( void )
{
    int num1;
    int num2;
    int sum;

    printf( "Enter first number\n" );
    scanf( "%d", &num1 ); /*read first number*/

    printf( "Enter second number\n" );
    scanf ( "%d", &num2);

    sum = num1 + num2;

    printf( "Sum is %d\n", sum);

    return 0;
}