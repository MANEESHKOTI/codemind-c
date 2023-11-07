#include<stdio.h>
int main(){
    int x,l;
    scanf("%d",&x);
    l=x%10;
    while( x > 0){
       x=x/10;
       x--;
       if ( x = 1){
           break;
       }
    } printf("%d",x+l);
}