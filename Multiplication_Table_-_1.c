#include<stdio.h>
int main(){
    int x,i=1;
    scanf("%d",&x);
    while(i<=12){
        printf("%d x %d = %d
",x,i,(x*i));
        i++;
    }
}