#include<stdio.h>
int main(){
    int x,a,b,i=1;
    scanf("%d %d %d",&x,&a,&b);
    for(int i=a; i<=b; i++){
        printf("%d x %d = %d
",x,i,(x*i));
    }
}