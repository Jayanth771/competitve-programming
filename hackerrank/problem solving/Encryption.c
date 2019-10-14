#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str;
    str=(char*)malloc(81*sizeof(char));
    scanf("%s",str);
    int n;
    n=strlen(str);
    int i,j; 
    i=sqrt(n);
    if(n<=81 && ((n/sqrt(n))==sqrt(n))){
        j=i;
    }else{
    j=i+1;
    }
    int x=0;
    int t=0;
    while(t<j){
    while(x<n){
        printf("%c",str[x]);
        x+=j;
    }
    printf(" ");
    t++;
    x=t;
    }
}
