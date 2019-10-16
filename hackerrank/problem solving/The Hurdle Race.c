#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxima(int a[] , int n){
    max = a[0];
    for(int i=0 ; i<n ; i++){
        if(max<a[i])max = a[i];
    }
    return max;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    
    int m = maxima(arr,n);
    
    if(m>k){
        printf("%d",m-k);
    }else{
        printf("%d",0);
    }
}
