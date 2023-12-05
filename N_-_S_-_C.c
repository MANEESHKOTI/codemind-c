#include<stdio.h>
int main(){
    int x,z;
    scanf("%d %d",&x,&z);
    while(x<(z-1)){
        x++;
        printf("%d %d %d
",x,x*x,x*x*x);
    }
}