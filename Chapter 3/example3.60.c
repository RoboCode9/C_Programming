/*Fig 3.6 fig03_60.c
Class average program with counter-controlled repetition*/
#include <stdio.h>

/* function main begin*/
int main (void)
{
    int counter = 1;
    int grade;
    int total = 0;
    int average;

    while (counter <= 10)
    {
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter += 1;
    }

    average = total / 10;

    printf("Class average is %d\n", average);

    return 0;
    
}