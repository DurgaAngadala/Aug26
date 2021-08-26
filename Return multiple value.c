#include <stdio.h>
void compare(int a, int b, int* address_max, int* address_min)
{
    if (a > b) {
        *address_max = a;
        *address_min = b;
    }
    else {
        *address_max = b;
        *address_min = a;
    }
}
int main()
{
    int max, min, x, y;
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
    compare(x, y, &max, &min);
    printf("\nThe max no. is %d" "\nThe min no. is %d",max, min);
    return 0;
}
