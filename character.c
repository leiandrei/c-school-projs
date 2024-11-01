#include <stdio.h>
#include <ctype.h> //isalpha, isdigit, islower, isupper

int main() {
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);
    getchar();


    if (isalpha(character)) {
        printf("'%c' is an alphabet\n", character);
        if (islower(character)) {
            printf("'%c' is a lowercase alphabet\n", character);
        } else if (isupper(character)) {
            printf("'%c' is an uppercase alphabet\n", character);
        } 
    } else {
        printf("'%c' is a digit\n", character);
    }
    return 0;
}