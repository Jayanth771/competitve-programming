#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",&str);
    int n=strlen(str),count=-1;
    char str1[n];
    for(int i=0;i<n;i++){
        if(i==0){
        str1[++count]=str[i];
        }else{
        if(str1[count]==str[i]){
            count--;
        }else{
            str1[++count]=str[i];
    }
    }
}
if(count==-1)
    printf("Empty String");
else
    {
    for(int i=0;i<=count;i++)
        printf("%c",str1[i]);
}



return 0;
}
