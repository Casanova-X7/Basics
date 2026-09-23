#include <stdio.h>

int main() {

    int num;

    printf("Enter a number to find its size in bytes: ");
    scanf("%d", &num);
    
    printf("The size of %d is %lu bytes.\n", num, sizeof(num));

    char c;

    printf("Enter a character to find its size in bytes: ");
    scanf(" %c", &c);

    printf("The size of '%c' is %lu bytes.\n", c, sizeof(c));

    float f;

    printf("Enter a float number to find its size in bytes: ");
    scanf("%f", &f);

    printf("The size of %f is %lu bytes.\n", f, sizeof(f));

    return 0;
}