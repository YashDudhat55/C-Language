#include <stdio.h>
#define pf printf

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++) {
        pf("Element %d: %d\n", i, arr[i]);
    }
}