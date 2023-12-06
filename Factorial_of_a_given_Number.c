#include<stdio.h>
int main(){
    int n,i=0,res=1;
    scanf("%d",&n);
    while(i<n){
       res=res*(n-i);
       i++;
    } printf("%d",res);
}