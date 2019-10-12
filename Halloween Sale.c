#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}

int howManyGames(int p,int d,int m,int s){
    int games=0;
    while(s >= 0){
        s-=p;
        p=max(p-d,m);
        games+=1;
    }
    return games-1;
}

int main(){
    int p,d,m,s;
    scanf("%d %d %d %d",&p,&d,&m,&s);
    int count;
    count=howManyGames(p,d,m,s);
    printf("%d",count);
}
