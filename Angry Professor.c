#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main() {
   int t;
    scanf("%d",&t);
    while(t--)
        {
        int n,k,count=0;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)
            {
            int x;
            scanf("%d",&x);
            if(x<=0)
                count++;
        }
        if(count>=k)
            printf("NO\n");
        else
             printf("YES\n");
    }
    return 0;
}
