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
    float arr[n];
    float p=0,ne=0,z=0;
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            p++;
        }
        if(arr[i]<0){
            ne++;
        }
        if(arr[i]==0){
            z++;
        }
    }
    float p1,n1,z1;
    p1=p/n;
    n1=ne/n;
    z1=z/n;
    printf("%f\n%f\n%f",p1,n1,z1);
}
