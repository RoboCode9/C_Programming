/* Programming Challenge 2.19
Addition, Average, and Product program*/

#include <stdio.h>
/* function main begin program execution */
int main ( void )
{
    int number1;
    int number2;
    int number3;
    int sum;
    int average;
    int product;
    int three = 3;

    printf( "Enter first number\n" );
    scanf( "%d", &number1 );

    printf( "Enter second number\n" );
    scanf( "%d", &number2 );

    printf( "Enter third number\n" );
    scanf( "%d", &number3 );

    sum = number1 + number2 + number3;

    average = sum / three;

    product = number1 * number2 * number3;

    printf( "Sum is %d\n", sum );
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);

    return 0;
}