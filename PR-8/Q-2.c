#include <stdio.h>
#define pf printf

void printCubes(int size, int arr[size][size]) {
    pf("\nCubes of all elements : \n");
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int val = arr[i][j];
            pf("%d ", val * val * val);
        }
        pf("\n");
    }
}

int main() {
    int a;

    pf("Enter array's size : ");
    if (scanf("%d", &a) != 1) return 1;

    int matrix[a][a];

    pf("\nEnter array elements : \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            pf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printCubes(a, matrix);

    return 0;
}