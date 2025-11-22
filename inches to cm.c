#include<stdio.h>
int main(){
    int height_in_inches;
    scanf("%d",&height_in_inches);
    double height_in_cm=height_in_inches*2.54;
    printf("%.2f",height_in_cm);
    return 0;
}
