#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int s,t;
    scanf("%d %d",&s,&t);
    int a,b,m,n;
     scanf("%d %d",&a,&b);
     scanf("%d %d",&m,&n);
     int app[m];
     int orr[n];
     for(int i=0;i<m;i++){
        scanf("%d",&app[i]);
    }for(int i=0;i<n;i++){
        scanf("%d",&orr[i]);
    }
    for(int i=0;i<m;i++){
        app[i]=app[i]+a;
    }
    for(int i=0;i<n;i++){
        orr[i]=orr[i]+b;
    }
    int ca=0,co=0;
    for(int i=0;i<m;i++){
        if(app[i]>=s && app[i]<=t){
            ca++;
        }
    }
    for(int i=0;i<n;i++){
        if(orr[i]>=s && orr[i]<=t){
            co++;
        }
    }
    printf("%d\n%d",ca,co);
}
