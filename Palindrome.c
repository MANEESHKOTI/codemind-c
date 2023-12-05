#include<stdio.h>
int main(){
    int x,l,res=0;
    scanf("%d",&x);
    int n = x;
    while(n>0){
        l=n%10;
        n=n/10;
        res = res*10+l;
    } if(x==res){
        printf("Palindrome");
    }else if(x!=res){
        printf("Not Palindrome");
    }
}