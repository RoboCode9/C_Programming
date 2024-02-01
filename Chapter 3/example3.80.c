/*3.80*/
#include <stdio.h>

int main (void)
{
    int counter = 0;
    int total = 0;
    int grade;
    float average;

    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);

    while (grade != -1)
    {
        total += grade;
        counter += 1;

        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }

    if(counter != 0)
    {
        average = ( float ) total / counter;
        printf("Class average is %.2f\n", average);
    }
    else
    {
        printf("No grades were entered\n");
    }
    
    return 0;
}