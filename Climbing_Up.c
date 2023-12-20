#include<stdio.h>
int main(){
    int x,y,q,r;
    scanf("%d%d",&x,&y);
    q=x/y;
    r=x%y;
    printf("%d",q+r);
}