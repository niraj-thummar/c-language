//. Print 1 to 10 then modify program print 1 to n.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}