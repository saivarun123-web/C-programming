#include<stdio.h>
#include<stdlib.h>
int main() {
    int A,B;
    scanf("%d %d",&A,&B);
    int correct=A+B;
    int typo=A*B;
    int diff=abs(correct-typo);
    printf("%d",diff);
    return 0;
}

