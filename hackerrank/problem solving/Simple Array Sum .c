//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,sum=0;          //initialising variables n and sum
    scanf("%d",&n);       //getting input from user
    int arr[n];           //initialising array of size n
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   //for loop to get input from user wrt array elements
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];           //adding all elements of array using for loop
    }
    printf("%d",sum);         //print sum of all elements
}

