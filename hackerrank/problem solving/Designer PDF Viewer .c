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
    int i = 0;
    while(i<26){
        scanf("%d",&arr[i]);
        i = i + 1;
    }
    char *str;
    str=(char*)malloc(10*sizeof(char));
    scanf("%s",str);
    int n=strlen(str);
    int x;
    x = 0;
    int arr1[1000];
    i = 0;
    while(i<n){
        arr1[x]=(int)str[i];
        x++;
        i++;
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
    i = 0;
    while(i<y){
        if(a[i]>m){
            m=a[i];
        }
        i = i + 1;
    }
    printf("%d",m*n);
    return 0;
}





