#include <stdio.h>
int main()
{
    printf("Hello world\n");
    printf("Enter two numbers\n");
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum=%d", c);
}