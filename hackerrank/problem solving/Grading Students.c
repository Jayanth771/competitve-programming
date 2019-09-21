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
    for(int i=0;i<n;i++){
        if(arr[i]>37 && arr[i]%5>2){
            while(arr[i]%5!=0){
                arr[i]++;
            }
        }
    }for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
