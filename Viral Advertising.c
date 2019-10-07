#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int days;
    scanf("%d",&days);
    int link=0,cum=0,shared=5; 
    while(days>0){
        link=shared/2;
        cum+=link;
        shared=link*3;
        days--;
    }
    printf("%d",cum);
}
