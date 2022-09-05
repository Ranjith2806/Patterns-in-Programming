#include <stdio.h>

int main()
{
    int i,a;
    i = 5;
    while(i>=1)
    {
        a=i;
        while(a >= 1)
        {
            printf("%d",a);
            a=a-1;
        }
         printf("\n");
         i=i-1;
    }

    return 0;
}
