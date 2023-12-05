#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int n = (x*2);
    while(n>0){
        if(n%2==0){
        printf("%d ",n);
        }n--;
    }
}