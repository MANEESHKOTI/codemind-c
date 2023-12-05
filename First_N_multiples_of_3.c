#include<stdio.h>
int main(){
    int x,i=1,cnt=0;
    scanf("%d",&x);
    while(cnt<x){
        if(i%3==0){
            printf("%d ",i);
            i++;
            cnt++;
        } else if (i%3!=0){
            i++;
        }
    }
}