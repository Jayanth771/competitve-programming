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
    long int arr[n];
    int a[n];
    int x=0,i;
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                a[x]=j-i;
                x++;
            }
        }
    }
    int m=a[0];
    for(i=0;i<x;i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    int fal=-1;
    if(m>0 && m<n){printf("%d",m);
    }else{
        printf("%d",fal);
    }
}
