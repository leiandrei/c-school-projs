// loan eligibility system 
// monthly income should be atleast 15,000
// age between 18 and 65
// loan amount should not exceed 10 times the monthly income
// error handling 
#include <stdio.h>

int main(void) 
{
    int monthly_income, age, loan_amount;

    printf("Enter monthly income: ");
    scanf("%d", &monthly_income);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter desired loan amount: ");
    scanf("%d", &loan_amount);

    if (monthly_income >= 15000) 
    {
        if (age >= 18 && age <= 65) 
        {
            if (loan_amount <= monthly_income * 10) 
            {
                printf("Congratulations. You are eligible for the loan.");
            }
        } else 
        {
            printf("Sorry, you do not meet the loan eligibility requirements");
        }
    } else if (monthly_income < 0) 
    {
        printf("ERROR!");
        printf("\nError: Invalid Input!");
    } else if (monthly_income < 15000) 
    {
        printf("Sorry, you do not meet the loan eligibility requirements");
    }
    return 0;

}