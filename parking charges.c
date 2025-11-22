#include<stdio.h>
int main() {
    int X,Y,H;
    scanf("%d %d %d",&X,&Y,&H);
    int charges;
    if (H<=1) {
        charges=X;
    } else {
        charges=X+(H-1)*Y;
    }
    printf("%d",charges);
    return 0;
}
