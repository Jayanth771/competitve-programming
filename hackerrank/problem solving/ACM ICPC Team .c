//
//  main.c
//  jayanth
//
//  Copyright © 2019 Jayanth. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int m,n,count,res=0,num=0;
    scanf("%d%d",&m,&n);
    int i,j,k;char a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            count=0;
            for(k=0;k<n;k++)
            {
                if((a[i][k]-48)|(a[j][k]-48))
                    ++count;
            }
            if(num==count)
                ++res;
            if(count>num)
            {
                num=count;
                res=1;
            }
        }
    }
    printf("%d\n%d",num,res);
    return 0;
    
}
