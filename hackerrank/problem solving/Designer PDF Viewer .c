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
    int arr[26];
    for(int i=0;i<26;i++){
        scanf("%d",&arr[i]);
    }
    char *str;
    str=(char*)malloc(10*sizeof(char));
    scanf("%s",str);
    int n=strlen(str);
    int x=0;
    int arr1[1000];
    for(int i=0;i<n;i++){
        arr1[x]=(int)str[i];
        x++;
    }
    int a[1000];
    int y=0;
    for(int j=97;j<=122;j++){
        for(int i=0;i<x;i++){
            if(arr1[i]==j){
                a[y]=arr[j-97];
                y++;
            }
            
        }
    }
    int m=a[0];
    for(int i=0;i<y;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    printf("%d",m*n);
}





