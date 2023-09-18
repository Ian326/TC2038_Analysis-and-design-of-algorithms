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

        printf("\nWelcome to the Ordering Algorithms Program. First you'll create your array.\n\n");

        ArrayInfo arrStruct = createArray();
        int *arr = arrStruct.array;
        int arrLen = arrStruct.size;

        printf("Size of array: %i\n\n", arrLen);

        printf("Please choose one option:\n");
        printf("1. Bubble Sort\n"
               "2. Merge Sort\n"
               "3. Quick Sort\n"
               "4. Counting Sort\n"
               "5. Exit\n");
        string str;
        cin >> str;
    
        if (isInt(str)){
            int opt = stoi(str);
            switch (opt)
            {
            case 1:
                BubbleSort(arrLen, arr);
                menu = 0;
                break;
            case 2:
                MergeSort(0, 0);
                menu = 0;
                break;
            case 3:
                QuickSort(0, 0);
                menu = 0;
                break;
            case 4:
                CountingSort(0, 0);
                menu = 0;
                break;
            case 5:
                menu = 0;
                break;
            default:
                printf("Invalid Option. Try again.\n");
            }
        }
        else{
            printf("Invalid Option. Try again.\n");
        }
    }

    printf("\nClosing program...\n");

    return 0;
};