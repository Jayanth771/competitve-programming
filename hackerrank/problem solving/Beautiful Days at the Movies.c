#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int beautifulDay(int n,int k) {
int temp,sum=0;
temp=n;
while (n != 0)
  {
    sum=sum*10;
    sum=sum+n%10;
    n =n/10;
  }
if(abs(temp-sum)%k==0){
    return 1;
}else{
    return 0;
}

}

int main()
{int i,j,k,count=0;
scanf("%d %d %d",&i,&j,&k);
for(int n=i;n<=j;n++){
    if(beautifulDay(n,k)==1){
        count++;
    }
}
printf("%d",count);
    
    return 0;
}

