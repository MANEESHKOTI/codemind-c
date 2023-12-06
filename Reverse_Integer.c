#include<stdio.h>
int main(){
    int x,l,res=0;
    scanf("%d",&x);
    while(x!=0){
        l=x%10;
        x=x/10;
        res = res*10+l;
    } printf("%d",res); }