#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int x=0;x<t;x++){
        int n, k, sum; 
        scanf("%d %d",&n,&k);
        sum = k*2;
        if(k && n%sum)
            printf("-1");
        else if(k==0) {
            for(int i=1;i<=n;i++)
                printf("%d ",i);
        }
        else {
            for(int i=1,j=1;i<=n;i++) {
                if(i<=sum-k)
                    printf("%d ",i+k);
                else if(i<=sum)
                    printf("%d ",i-k);
                if(i==sum) {
                    j++;
                    sum =(j*k)*2;
                }
            }
        }
        printf("\n");    
    }
    return 0;
}
