#include<stdio.h>
int main(){
    int n,sum =0,j;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    } 
    for( j = 0 ; j<n ; j++){
        if(j%2==0 || j==0){
            sum+=arr[j];
        }
    } 
    printf("%d",sum);
}