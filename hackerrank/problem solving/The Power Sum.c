#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count=0;
void check(int n,int q,int sum,int pos)
    {
    if(sum>n)
        return;
    else if(sum==n)
        {
        count++;
        return;
        
    }
    else
        {
        while(pow(pos,q)<=n)
        {
       sum+=pow(pos,q);
        check(n,q,sum,pos+1);
        sum-=pow(pos,q);
        pos++;
        }
    }
}  

int main() {
    int n,q;
    scanf("%d %d",&n,&q);
   check(n,q,0,1);
    printf("%d",count);
    return 0;
}
