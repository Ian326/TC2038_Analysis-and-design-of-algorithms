#include <iostream>

using namespace std;

void BubbleSort(int n, int array[]){
    int i, j;

    bool swapped;

    for(i = 0; i < n - 1; i++){

        for(j = i + 1; j < n; j++){

            if(array[j] < array[i]){
                swap(array[j], array[i]);
                swapped = true;
            }

        }

        if (not swapped){
            break;
        }
    
    }

    printf("\n[BubbleSort] Ordered Array: ");
    printArray(n, array);
};