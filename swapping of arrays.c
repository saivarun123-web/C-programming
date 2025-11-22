#include<stdio.h>
int main(){
	int a[3][3];
	int i,j;
	printf("enter the elements:\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	scanf("%d",&a[i][j]);
	}
	}
	int b[3][3];
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	b[i][j]=a[j][i];
	printf("%d\t",b[i][j]);
	}
	printf("\n");
	}
}
