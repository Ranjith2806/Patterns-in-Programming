#include <stdio.h>

int main()
{
    int i,a;
    i = 1;
    while(i<=5)
    {
        a=1;
        while(a<=i)
        {
            printf("%d",a);
            a=a+1;
        }
         printf("\n");
         i=i+1;
    }

    return 0;
}
