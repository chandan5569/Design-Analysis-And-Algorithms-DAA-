#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the two numbers whose lcm is to be found\n");
scanf("%d%d",&a,&b);
for(i=a>b?a:b; i<=a*b; i=i+(a>b?a:b))
{
if(i%a==0 && i%b==0)
{
break;
}
}
printf("lcm of the two given numbers is %d ",i);
return 0;
}
