/*(a)
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
#include<stdio.h>
int main()
{
    int num,m=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        
        for(int j=1; j<=i; j++)
        {
            printf(" %2d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}