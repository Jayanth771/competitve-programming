#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min,max;
    int minc=0,maxc=0;
    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxc++;
        }
        if(arr[i]<min){
            min=arr[i];
            minc++;
        }
    }
    printf("%d %d",maxc,minc);
}
