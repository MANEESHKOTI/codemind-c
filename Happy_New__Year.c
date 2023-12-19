#include<stdio.h>
int main(){
    int h,m,h1;
    scanf("%d %d",&h,&m);
    h1 = (24-h)*60;
    printf("%d",(h1-m));
}