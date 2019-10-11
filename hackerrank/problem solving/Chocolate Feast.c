#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int na;
    scanf("%d", &na); 
    for (int i=0;i <na;i++) {
        int n, c, m;
        scanf("%d %d %d", &n, &c, &m);
        int ans, nw;
        ans=n/c;
        nw=ans;
        int sum = 0;
        while (nw>=m) {
            sum+=(nw/m);
            nw= (nw/m)+(nw%m);
        }    
        printf("%d\n",ans+sum);
    }
    return 0;
}
