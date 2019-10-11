#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

int n;
scanf("%d",&n);


for(int a0 = 0; a0 < n; a0++){
    int s;
    int e;
    int count = 0;
    scanf("%d %d",&s,&e);
    int i;
    for(i= s;i<=e;i++){
       int temp = sqrt(i);
        if(temp*temp ==i)
        {
            count++;
            i+=temp*2 ;
        }
    }
    printf("%d\n",count);
}

}
