#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
       int t;
       scanf("%d",&t);
      int n;
    while(t--)
    {   
        scanf("%d",&n) ;
        int h=1;
        int t=1;
            while(n--)
      {      if(t>0)
             {  h=h*2;
                t--;
            }
             else
             {  
             h=h+1;
               t++;
             }       
            }
         printf("%d\n",h);
    }         
}
