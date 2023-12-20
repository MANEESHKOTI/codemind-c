#include<stdio.h>
int main(){
    int n;
    float sum=0.00;
    scanf("%d",&n);
    int arr[n];
    for( int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for( int j =0 ; j < n ; j++){
        sum+=arr[j];
    }
    printf("%.2f",sum/n);
}