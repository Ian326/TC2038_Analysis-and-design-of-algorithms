#include <iostream>
#include "array_create.h"
#include "array_info.h"
#include "sort_bubble.h"
#include "sort_counting.h"
#include "sort_merge.h"
#include "sort_quick.h"

using namespace std;

int main(){

    bool menu = true;
    
    while(menu){

        printf("\n======================================================");
        printf("\nWelcome to the Ordering Algorithms Program i326.\n");

        printf("\nPlease choose one option:\n");
        printf("1. Bubble Sort\n"
               "2. Merge Sort\n"
               "3. Quick Sort\n"
               "4. Counting Sort\n"
               "5. Exit\n");
        
        string str;
        cin >> str;
    
        if (isInt(str)){
            int opt = stoi(str);
            int *arr;
            int arrLen;
            
            if (opt >= 1 && opt <= 5)
            {
                ArrayInfo arrStruct = createArray();
                arr = arrStruct.array;
                arrLen = arrStruct.size;

                printf("\n\nOriginal Array: ");
                printArray(arrLen, arr);
            }

            switch (opt)
            {
            case 1:
                BubbleSort(arrLen, arr);
                printf("[BubbleSort] Ordered Array: ");
                printArray(arrLen, arr);
                menu = 0;
                break;
            case 2:
                MergeSort(0, arrLen - 1, arr);
                printf("[MergeSort] Ordered Array: ");
                printArray(arrLen, arr);
                menu = 0;
                break;
            case 3:
                QuickSort(0, arrLen - 1, arr);
                printf("[QuickSort] Ordered Array: ");
                printArray(arrLen, arr);
                menu = 0;
                break;
            case 4:
                CountingSort(arrLen, arr);
                printf("[CountingSort] Ordered Array: ");
                printArray(arrLen, arr);
                menu = 0;
                break;
            case 5:
                menu = 0;
                break;
            default:
                printf("\nInvalid Option. Try again.\n");
            }
        }
        else{
            printf("\nInvalid Option. Try again.\n");
        }
    }

    printf("\nClosing program...\n");

    return 0;
};