#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    int sum;
    int possible[8][3][3] = {{ { 8, 1, 6 }, { 3, 5, 7 }, { 4, 9, 2 } },
    { { 6, 1, 8 }, { 7, 5, 3 }, { 2, 9, 4 } },
    { { 4, 9, 2 }, { 3, 5, 7 }, { 8, 1, 6 } },
    { { 2, 9, 4 }, { 7, 5, 3 }, { 6, 1, 8 } },
    { { 8, 3, 4 }, { 1, 5, 9 }, { 6, 7, 2 } },
    { { 4, 3, 8 }, { 9, 5, 1 }, { 2, 7, 6 } },
    { { 6, 7, 2 }, { 1, 5, 9 }, { 8, 3, 4 } },
    { { 2, 7, 6 }, { 9, 5, 1 }, { 4, 3, 8 } }};
     int best=1000000;
     for(int l = 0; l<8; l++){
        int sum = 0;
        for(int m = 0; m<3; m++){
            for(int n = 0; n< 3; n++){
                sum += abs(possible[l][m][n] - arr[m][n]);
            }
        }
        if(sum<best){
            best=sum;
        }
     }

    printf("%d",best);
}
