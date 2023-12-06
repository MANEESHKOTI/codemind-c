#include<stdio.h>
int main(){
    int n,res=0,l;
    scanf("%d",&n);
    int x=n;
    while(x>0){
        l=x%10;
        x=x/10;
        res=res*10+l;
        } if(res==n){
            printf("True");
        }else {
            printf("False");
        }
}