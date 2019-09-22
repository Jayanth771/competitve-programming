#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int m=arr[0];
    for(int i=0;i<n;i++){
        if(m<arr[i]){
            m=arr[i];
        }
    }
    if(m>k){
        printf("%d",m-k);
    }else{
        printf("%d",0);
    }
}
