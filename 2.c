#include <stdio.h>

int main()
{
    int i,a;
    i = 1;
    while(i<=5)
    {
        a=i;
        while(a >= 1)
        {
            printf("%d",a);
            a=a-1;
        }
         printf("\n");
         i=i+1;
    }

    return 0;
}
