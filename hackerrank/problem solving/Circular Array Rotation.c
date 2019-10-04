#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long int n,k,q;
    scanf("%lld %lld %lld",&n,&k,&q);
   k=k%n;
   long long int i,ar[n],x,s=0;
    for(i=0;i<n;i++)
       scanf("%lld",&ar[i]);
    for(i=1;i<=q;i++)
    {
          scanf("%lld",&x);
     s=n-k+x;
     if(s<n)
         printf("%lld\n",ar[s]);
     else if(s>=n)
     { s=s-n;
         printf("%lld\n",ar[s]);
    }
    }

    return 0;
}
