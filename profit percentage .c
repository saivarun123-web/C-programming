#include<stdio.h>
int main(){
    float a,b,c,d;
    scanf("%f%f",&a,&b);
    c=b-a;
    d=(c/a)*100;
    printf("%.2f",d);
}
