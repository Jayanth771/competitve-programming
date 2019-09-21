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
    long long int age;
    scanf("%lld",&age);
    long long int arr[age];
    for(int i=0;i<age;i++){
        scanf("%lld",&arr[i]);
    }
    long long int m=arr[0];
    for(int i=0;i<age;i++){
        if(arr[i]>m){
            m=arr[i];
        }}
    long long int ans=0;
    for(int i=0;i<age;i++){
        if(arr[i]==m){
            ans++;
        }
    }
    printf("%lld",ans);
    
}
