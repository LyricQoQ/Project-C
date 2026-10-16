[随机数生成.c](https://github.com/user-attachments/files/33530596/default.c)
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
srand(time(NULL));
int boom=rand()%100+1,n,i=0;
printf("the number is within the range from 1 to 100\n");
while(1)
{
printf("input your number:");
scanf("%d",&n);
if(n>=1&&n<=100)
{
if(n>boom){printf("the number is larger!\n");i++;}
if(n<boom){printf("the number is smaller!\n");i++;}
if(n==boom){printf("YOU WIN,Score=%d",i);break;}
}
else {printf("BUG");}
}
return 0;
}
