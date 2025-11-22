#include<stdio.h>

 int main()
{
int a[10], n,i,j,t,min;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before sorting:");
for(i=0;i<n;i++)
printf("%d\t", a[i]);
printf("\n");
for(i=0;i<n;i++)
{ 
min=i;
for(j=i+1;j<n;j++)
{
    if(a[min]>a[j])
{
min=j;
}
}
if(min!=i)
{
t=a[min];
a[min]=a[i];
a[i]=t;
}
}
printf("after sorting:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
