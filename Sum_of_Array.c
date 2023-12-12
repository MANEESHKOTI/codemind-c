#include<stdio.h>
int main(){
    int n,j,sum = 0;
    scanf("%d",&n);
    int arr[n];
    for( int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    while(j<n){
        sum+=arr[j];
        j++;
    }
    printf("%d",sum);
}