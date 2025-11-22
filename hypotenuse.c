#include<stdio.h>
#include<math.h>
int main() {
    int x,y;
    float hypotenuse;
    scanf("%d %d",&x,&y);
    hypotenuse=sqrt(x*x+y*y);
    printf("%.2f",hypotenuse);
    return 0;
}
