#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for ( int i =0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
  int k = arr[0];
    for( int j  = 0 ; j < n ; j++){
        if(k>arr[j]){
            k=arr[j];
        } 
        
    }
    printf("%d",k); 
}