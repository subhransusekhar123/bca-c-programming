#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("write a number");
    scanf("%d", &a);
    printf("write a number");
    scanf("%d", &b);
    printf("write a number");
    scanf("%d", &c);

    d = ( a + b+ c )/3;


    printf("%d", d);
    return 0;
}