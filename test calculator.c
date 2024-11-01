#include <stdio.h>

int main() 
{
    float x, y, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &x);

    printf("Enter operator: ");
    scanf(" %c", &operator);
    getchar();

    printf("Enter second number: ");
    scanf("%f", &y);

    switch(operator) {
        case '+':
            result = x + y;
            printf("Result %.2f", result);
            break;
        case '-':
            result = x - y;
            printf("Result %.2f", result);
            break;
        case '*':
            result = x * y;
            printf("Result %.2f", result);
            break;
        case '/':
            result = x + y;
            printf("Result %.2f", result);
            break;
        default:
            printf("Invalid Operator. Use +, -, *, /\n");
    }
    return 0;
}
