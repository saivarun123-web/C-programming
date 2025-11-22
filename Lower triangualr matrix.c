//write a c program to check the given matrix is lower traingular matrix or not
#include<stdio.h>
int main()
{
	int a[12][12],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				printf("Given matrix is not a lower triangular matrix");
				return 0;
			}
		}
	}
	printf("Given matrix is an lower triangular matrix");
	return 0;
}
