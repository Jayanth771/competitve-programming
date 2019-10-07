#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long long int i, n, m, score;
    long long int rank, arr[100000];
    scanf("%lld", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld", &arr[rank+1]);
        if (arr[rank+1] != arr[rank]) {
            rank++;
    }
    }
    scanf("%lld", &m);

    for (i = 0; i < m; i++) {
        scanf("%lld", &score);
        while (rank && score >= arr[rank]) {
            rank--;
        }
        printf("%lld\n", rank+1);
    }
    return 0;
}
