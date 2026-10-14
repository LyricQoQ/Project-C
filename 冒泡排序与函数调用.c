#include<stdio.h>
void pop(int a[],int n) 
{
int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {t=a[j];a[j]=a[j+1];a[j+1]=t;}
        }
    }
}
int main()
{
int a[100],i,n;
printf("the number of your numbers need between 1 and 100:");
scanf("%d",&n);

printf("input your numbers:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
pop(a,n);
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}