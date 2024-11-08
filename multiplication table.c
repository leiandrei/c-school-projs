#include <stdio.h>
int main() 
{
    int number, nth_number;

    printf("Enter a number to generate is multiplication table: ");
    scanf("%d", &number);

    printf("Up to what number should the table go: ");
    scanf("%d", &nth_number);

    for (int i = 1; i <= nth_number; i++) 
    {
        int product = number * i;
        printf("%d x %d = %d\n", number, i, product);
    }
    if (nth_number < 0) {
        printf("Please enter positive integers only.");
    }
    return 0;
}