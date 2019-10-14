#include <stdio.h>
#include <stdlib.h>
void day_of_programmer(int year){
    if (year == 1918){
        printf("26.09.1918");
    }
    else if (((year <= 1917) && (year%4 == 0)) || ((year%400 == 0) || ((year%4 ==0) && (year%100 != 0)))){
        printf("12.09.%d",year);
     } else{
        printf("13.09.%d",year);
}
}
int main(){
    int n;
    scanf("%d",&n);
    day_of_programmer(n);
}
