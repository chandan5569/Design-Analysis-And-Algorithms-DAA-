#include<stdio.h>
int main()
{

int a[100],i,n,j;

printf("enter how many numbers yow want to insert in the array\n");

scanf("%d",&n);

printf("enter those numbers \n");

for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}

for(i=0; i<=n; i++)
{
for(j=i+1; j<=n; j++)
{
if(a[i]==a[j])
{
printf(" %d ",a[i]);
}
}
}

return 0;
}
