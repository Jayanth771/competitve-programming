//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(long int a[]){
    long int i,j,temp;
    
    for(i=0;i<5;i++){
        
        for(j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
                
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
        
    }
    
    long int min,max;
    min=a[0]+a[1]+a[2]+a[3];
    max=a[4]+a[1]+a[2]+a[3];
    printf("%ld %ld",min,max);
    
    
    
}
int main(){
    long int arr[5];
    for(int i=0;i<5;i++){
        scanf("%ld",&arr[i]);
    }
    sort(arr);
    
}
