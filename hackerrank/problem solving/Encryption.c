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
    if(n==1 || n==4 || n==9 || n==16 || n==25 || n==36 || n==49 || n==64 || n==81){
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
