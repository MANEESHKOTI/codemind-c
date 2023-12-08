#include<stdio.h>
int main(){
    int x,l,r=0;
    scanf("%d",&x);
    while(x>0){
        l=x%10;
        if(l>r){
            r=l;
        } x/=10;
    }  printf("%d",r);
}