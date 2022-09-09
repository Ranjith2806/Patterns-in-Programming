#include <stdio.h>

int main()
{
    int i,a;
    i = 1;
    while(i<=6)
    {
        a=5;
        while(a >= i)
        {
            printf("%d",a);
            a=a-1;
        }
         printf("\n");
         i=i+1;
    }

    return 0;
}
