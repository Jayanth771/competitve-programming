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
    char str[n];
    scanf("%s",&str);
    int sum=0;
    int count=0;
    
    for(int i=0;i<n;i++){
        if(str[i]=='U'){
            if(++sum==0){
                count++;
            }
        }
        else{
            sum-=1;
        }
    }
    printf("%d",count);
}

