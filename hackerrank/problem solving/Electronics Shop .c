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
    long long int b,nk,nu;
    scanf("%lld %lld %lld",&b,&nk,&nu);
    long long int k[nk];
    long long int u[nu];
    for(long long int i=0;i<nk;i++){
        scanf("%lld",&k[i]);
    }
    for(long long int i=0;i<nu;i++){
        scanf("%lld",&u[i]);
    }
    long long int sum=0,x=0;
    long long int *a;
    a = (long long int*) malloc(3000 * sizeof(long long int));
    for(long long int i=0;i<nk;i++){
        for(long long int j=0;j<nu;j++){
            sum=k[i]+u[j];
            if(b>=sum){
                a[x]=sum;
                x++;
            }
            
        }
    }
    long long int m=a[0];
    for(long long int i=0;i<x;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    if(m>0 && m<=b){
        printf("%lld",m);
    }else{
        printf("%d",-1);
    }
}
