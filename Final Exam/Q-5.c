#include <stdio.h>
#define pf printf

int main() {
    int n, i, j;

    pf("Enter number of rows : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            pf("%d ", i * i);
        }
        pf("\n");
    }
}