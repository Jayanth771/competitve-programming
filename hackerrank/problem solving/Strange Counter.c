#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long int t;
    scanf("%ld",&t);
    long int a,b=3;
    long int sum=4;
if (t>3){
    while(sum<=t){
        a=sum;
        b=b*2;
        sum=a+b;
    }
    printf("%ld",sum-t);
}else{
    printf("%ld",4-t);
}
}
