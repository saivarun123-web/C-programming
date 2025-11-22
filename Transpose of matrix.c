#include<stdio.h>
int main()
{
	int a[12][12],i,j,m,n,b[12][12];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		b[i][j]=a[j][i];
	}
}
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
