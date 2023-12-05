#include<stdio.h>
int main(){
   int x,i=1,cnt_p=0;
   scanf("%d",&x);
   while(i<=x){
       if(x%i==0){
           cnt_p++;
       } i++;
   } if(cnt_p<=2){
       printf("Prime");
   }else{
       printf("Not Prime");
   } 
    
}