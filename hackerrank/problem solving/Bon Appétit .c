//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int bc;
    scanf("%d",&bc);
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sum=sum-arr[k];
    int ba;
    ba=sum/2;
    if(ba==bc){
        printf("Bon Appetit");
    }else{
        printf("%d",bc-ba);
    }
    
}

