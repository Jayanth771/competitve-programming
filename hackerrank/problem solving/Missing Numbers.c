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
    long int m,n;
    scanf("%ld",&m);
    long int arr[m];
    for(long i=0;i<m;i++){
        scanf("%ld",&arr[i]);
    }
    scanf("%ld",&n);
    long int brr[n];
    for(long i=0;i<n;i++){
        scanf("%ld",&brr[i]);
    }
    long int a[10001];
    for(long i=0;i<10001;i++){
        a[i]=0;
    }
    for(long i=0;i<m;i++){
        a[arr[i]]--;
    }for(long i=0;i<n;i++){
        a[brr[i]]++;
    }for(long i=0;i<10001;i++){
        if(a[i]>0){
            printf("%ld ",i);
        }
    }
}

