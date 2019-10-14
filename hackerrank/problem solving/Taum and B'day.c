#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int taumBday(long long int b,long long int w,long long int x,long long int y,long long int z){
    long long int cost = 0;
    if (((x+z)*w)<(y*w)){
        cost=x*b+(x+z)*w;
    }else if(((y+z)*b)<(x*b)){
        cost=(y+z)*b+y*w;
    }else{
        cost=x*b+y*w;
    }return cost;
}
int main(){
    long long int n;
    scanf("%lld",&n);
    while(n--){
        long long int b,w,bc,wc,z,ans;
        scanf("%lld %lld",&b,&w);
        scanf("%lld %lld %lld",&bc,&wc,&z);
        ans=taumBday(b,w,bc,wc,z);
        printf("%lld\n",ans);
    }
}
