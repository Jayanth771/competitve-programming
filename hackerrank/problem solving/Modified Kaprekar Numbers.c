//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kap(long int n){
    long int nd=0,temp,ns,nn=0;
    ns=n*n;
    temp=ns;
    while(temp>0){
        nd++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        nn++;
        temp/=10;
    }
    temp=ns;
    long int arr[nd];
    for(long int i=0;i<nd;i++){
        arr[i]=temp%10;
        temp/=10;
    }
    long int sum1=0,sum2=0;
    for(long int i=nd-nn;i<nd;i++){
        sum2+=arr[i];
        sum2*=10;
    }
    sum2/=10;
    for(long int i=0;i<nd-nn;i++){
        sum1+=arr[i];
        sum1*=10;
    }
    sum1/=10;
    if(sum1+sum2==n){
        return 1;
    }else{
        return 0;
    }
    
}


int main(){
    long int s,e,c=0;
    scanf("%ld %ld",&s,&e);
    for(long i=s;i<=e;i++){
        if(kap(i)==1){
            printf("%ld ",i);
            c++;
        }
    }if(c==0){
        printf("INVALID RANGE");
    }
}
