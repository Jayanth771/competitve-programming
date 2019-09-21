//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mode(int arr[],int n,int num){
    int mode=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            mode++;
        }
    }
    return mode;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<100;i++){
        int j=0;
        j=mode(arr,n,i);
        printf("%d ",j);
    }
    
}
