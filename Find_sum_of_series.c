#include<stdio.h>
int main(){
    int x,i=1;
    float res=0.00;
    scanf("%d",&x);
    while(i<=x){
        res = res+(1.0/i);
        i++;
    } printf("%.2f",res);
}