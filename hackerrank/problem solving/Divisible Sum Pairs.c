//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int a[],int n,int k){
    int i,j,temp;
    for(i=0;i<n;i++){
        
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
        
    }
    int count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                count++;
            }
        }
    }
    printf("%d",count);
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n,k);
}

