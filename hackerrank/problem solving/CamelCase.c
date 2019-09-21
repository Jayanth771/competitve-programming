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
    char *str;
    str=(char*)malloc(1*sizeof(char));
    scanf("%s",str);
    long long int n=strlen(str);
    long long int count=1;
    for(long long int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            count++;
        }
    }
    printf("%lld",count);
}
