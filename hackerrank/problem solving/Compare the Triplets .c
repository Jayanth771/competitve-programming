//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[3],b[3];
    int as=0,bs=0;
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            as++;
        }if(b[i]>a[i]){
            bs++;
        }
    }
    printf("%d %d",as,bs);
}


