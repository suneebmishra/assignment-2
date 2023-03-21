#include<stdio.h>
int main()
{
    int i, a, b=1;
    for(i=1;i<=5;i++)
    {
        for(a=1;a<=i;a++)
        {
            printf("%d", b);
            b+=1;
        }
        printf("\n");
        
    }
    return 0;
}
