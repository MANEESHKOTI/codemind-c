#include<stdio.h>
int main(){
    int n,sum=0,i=0;
    scanf("%d",&n);
    n=n-1;
    while(n > 0){
        sum+=n;
        n--;
    }
    printf("%d",sum);
}