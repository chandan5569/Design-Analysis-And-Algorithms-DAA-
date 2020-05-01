#include<stdio.h>
int binarysearch(int a[],int x,int l,int r);
int main()
{
int a[100],n,x,result;
printf("enter the size of the array \n");
scanf("%d",&n);
printf("enter those elements \n");
for(int i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
printf("enter the number you want to search \n");

scanf("%d",&x);
result = binarysearch(a,x,0,n-1);

if(result==-1)

printf(" element is not present");

else

printf("element is present at location %d ",result);

}

int binarysearch(int a[],int x, int l, int r)
{
int mid;
mid=(l+r)/2;

if(r>=l)
{
if(a[mid]==x)

return mid;

else if(a[mid]>x)

return binarysearch(a,x,l,mid-1);

else

return binarysearch(a,x,mid+1,r);

}
else
return -1;
}






