#include <stdio.h>

int main(void) 
{
    int _option1, _option2;
    float burger = 150, chicken = 200, pasta = 250;
    float discount, final_price;
    
    printf("Choose your meal (1 - Burger, 2 - Chicken, 3 - Pasta): "); // meal input
    scanf("%d", &_option1);
    printf("Enter your membership status: "); // membership input
    scanf("%d", &_option2);
    
    switch(_option1) 
    {
        case 1: 
            if (_option2 == 1) {
                printf("Your final meal cost is: %.2f", burger);
            } else if (_option2 == 2) {
                discount = burger * 0.10;
                final_price = burger - discount;
                printf("Your final meal cost is: %.2f", final_price);
            } else {
                printf("Invalid Input!");
            }
            break;
        case 2:
            if (_option2 == 1) 
            {
                printf("Your final meal cost is: %.2f", chicken);
            } else if (_option2 == 2) {
                discount = chicken * 0.10;
                final_price = chicken - discount;
                printf("Your final meal cost is: %.2f", final_price);
            } else {
                printf("Invalid Input!");
            }
            break;
        case 3:
            if (_option2 == 1) 
            {
                printf("Your final meal cost is: %.2f", pasta);
            } else if (_option2 == 2) {
                discount = pasta * 0.10;
                final_price = pasta - discount;
                printf("Your final meal cost is: %.2f", final_price);
            } else {
                printf("Invalid Input!");
            }
            break;
        default:
            printf("Invalid Input!");
    }
    return 0;
}