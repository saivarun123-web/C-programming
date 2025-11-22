#include<stdio.h>
int main()
{
	int A[10][10],n,i,j,Tr=0;
	printf("order of matix A ");
	scanf("%d",&n);
	printf("enter matrix A elemnts:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
	Tr=Tr+A[i][i];
	printf("trace of given matrix is %d",Tr);
	return 0;
}
