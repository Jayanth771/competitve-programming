//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void med(long long int a[],long int n){
    long long int i,j,temp;
    for(i=0;i<n;i++){
        
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
        
    }
    long long int median;
    if(n%2==0){
        median=(a[n/2]+a[(n/2)-1])/2;
        
    }else{
        median=a[((n+1)/2)-1];
    }printf("%lld",median);
    
    
}




int main(){
    long int n;
    scanf("%ld",&n);
    
    long long int a[n];
    long int i;
    //loop for taking input
    for(i=0;i<n;i++){
        scanf("%lld,",&a[i]);
    }
    med(a,n);
    
    
    return 0;
}
