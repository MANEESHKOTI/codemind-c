#include<stdio.h>
int main(){
    int a,b;
    float A;
    scanf("%d %d",&a,&b);
    A = (float)(a+b)/2;
    printf("Average of %d and %d is: %.2f",a,b,A);
}