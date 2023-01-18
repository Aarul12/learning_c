
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter your numbers: \n");
    scanf("%d %d", &a,&b);
    
    printf("Add: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);
    printf("Division: %d\n", a/b);
    printf("Modulus: %d\n", a%b);
    
    return 0;
}
