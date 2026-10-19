#include<stdio.h>
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*f(n-1);
    }
}
int main()
{
    int n;
    printf("input n: ");
    scanf("%d",&n);
    n=f(n);
    printf("n!=%d",n);
    return 0;
}
