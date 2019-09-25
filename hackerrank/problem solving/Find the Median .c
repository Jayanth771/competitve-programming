//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(long long int* a, long long int* b) 
{ 
    long long int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int partition (long long int arr[], long long int low, long long int high) 
{ 
    long long int pivot = arr[high];    
    long long int i = (low - 1);   
  
    for (long long int j = low; j <= high- 1; j++) 
    { 
        
        if (arr[j] < pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(long long int arr[], long long int low, long long int high) 
{ 
    if (low < high) 
    { 
        
        long long int pi = partition(arr, low, high); 
  
    
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    }
   
}



int main(){
    long long int n;
    scanf("%ld",&n);
    
    long long int a[n];
    long long int i;
 
    for(i=0;i<n;i++){
        scanf("%lld,",&a[i]);
    }
   quickSort(a, 0, n-1);
    long long int median;
    if(n%2==0){
        median=(a[n/2]+a[(n/2)-1])/2;
        
    }else{
        median=a[((n+1)/2)-1];
    }printf("%lld",median);
    
    return 0;
}
