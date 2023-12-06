#include<stdio.h>
int main(){
    int a,b,res_1=0,i=1,z=1,res_2=0;
    scanf("%d %d",&a,&b);
    while(i<a){
        if(a%i==0){
            res_1=res_1+i;
        } i++;}
        while(z<a){
            if(b%z==0){
            res_2=res_2+z;
        } z++;
    }  if(res_1==b && res_2==a){
        printf("Amicable");
    } else {
        printf("Not Amicable");
    }
}