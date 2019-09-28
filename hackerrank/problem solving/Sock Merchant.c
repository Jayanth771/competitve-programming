#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int n,count;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){ 
    scanf("%d",&arr[i]);
}
int sum=0;
for(int i=0;i<n;i++){
    count=1;
    if(arr[i]>0){
        for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            arr[j]=0;
        }
    }
    sum+=count/2;
    }
}

printf("%d",sum);
}
