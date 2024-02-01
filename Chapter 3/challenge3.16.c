#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float gallons, miles, average;
    int selection;

    printf("Would you like to start the mpg program? (enter -1 to end, enter a number besides -1 to start): ");
    scanf("%d", &selection);

    while (selection != -1)
    {
        printf("Enter the gallons used: ");
        scanf("%f", &gallons);

        if(gallons == 0)
        {
            printf("Cannot divide by zero!\n");
            continue;
        }

        printf("Enter the miles driven: ");
        scanf("%f", &miles);

        average = miles / gallons;

        printf("The miles per gallon is: %2.2f\n", average);

        printf("Would you like to continue using the mpg program? (enter -1 to end, enter a number besides -1 to continue): ");
        scanf("%d", &selection);
        
    }
    
    return 0;
    
}
