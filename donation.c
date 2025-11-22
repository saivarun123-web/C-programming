#include<stdio.h>
#include<stdlib.h>
int main() {
    int X,Y;
    scanf("%d %d",&X,&Y);
    int donation=abs(X-Y);
    printf("%d",donation);
    return 0;
}
