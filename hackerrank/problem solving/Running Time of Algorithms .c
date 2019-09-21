//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(long int a[],int n){
    long int i,j,temp;
    int swaps=0;
    
    for(i=0;i<n;i++){
        
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                //swap function
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                //increasing value os swaps everytime swap function takes place
                swaps++;
            }
        }
        
    }
    
    printf("%d",swaps);
}




int main(){
    int n;
    scanf("%d",&n);
    long int a[n];
    int i;
    //loop for taking input
    for(i=0;i<n;i++){
        scanf("%ld,",&a[i]);
    }
    sort(a,n);
    
    
    return 0;
}
