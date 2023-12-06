#include<stdio.h>
int main(){
    int x,t,l,res=0;
    scanf("%d",&x);
    t=x*x;
    while(t>0){
        l=t%10;
        t=t/10;
        res=res+l;
    } if(res==x){
        printf("Neon Number");
    } else{
        printf("Not Neon Number");
    }
}