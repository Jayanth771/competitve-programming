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
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m,d,j,k;
    int sum=0,count=0;
    scanf("%d %d",&d,&m);
    for(k=0;k<n-m+1;k++){
        for(j=k;j<k+m;j++){
            sum+=arr[j];
            
        }
        if(sum==d){
            count++;
        }
        sum=0;
    }
    printf("%d",count);
}
