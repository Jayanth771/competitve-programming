#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int x;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
    for(x=0;x<=n;x++){
        if(arr[x]==i){
            for(int j=0;j<n;j++){
                if(arr[j]==x+1){
                    printf("%d\n",j+1);    
                }
            }
        }
    }
    }
}
