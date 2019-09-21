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
    int x1,v1,x2,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if((x1-x2)*(v2-v1)>0 && (x1-x2)%(v2-v1)==0){
        printf("YES");
    }else{
        printf("NO");
    }
}
