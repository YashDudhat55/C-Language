#include <stdio.h>
#define pf printf

int main(){
    int a[3][3], i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            pf("Enter the elements of the 2D array : ");
            scanf("%d", &a[i][j]);
        }
    }

    pf("\nOutput of the 2D array : ");

    for (i = 0; i < 3; i++){
            pf("\n");
        for (j = 0; j < 3; j++){
            pf("%d ", a[i][j]);
        }
    }

    return 0;
}