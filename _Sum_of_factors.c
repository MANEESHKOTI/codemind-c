#include<stdio.h>
int main(){
    int x,i=1,res=0;
    scanf("%d",&x);
    while(i<x){
        if(x%i==0){
            res = res+i;
        }i++;
    }printf("%d",res); 
}