#include <stdio.h>

int main() {

    int integerValue;

    printf("Enter an integer value: ");

    scanf("%d", &integerValue);

    printf("The character corresponding to ASCII value %d is: '%c'\n", integerValue, (char)integerValue);
    
    return 0;
}
