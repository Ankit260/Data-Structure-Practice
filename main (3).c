
#include <stdio.h>

int main()
{
    int a=5;
    int *b=&a;
    printf("%d",a);
    printf("\n%d",*b);
    *b=10;
    printf("\n%d",a);
    int **c=&b;
    printf("\n%d",**c);
    return 0;
}
