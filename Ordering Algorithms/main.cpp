#include <iostream>
#include "sort_bubble.h"
#include "sort_counting.h"
#include "sort_merge.h"
#include "sort_quick.h"

using namespace std;

int main(){

    bool menu = 1;

    while(menu){
        
        printf("\nWelcome to the Ordering Algorithms Program. Please choose one to run:\n");
        printf("1. Bubble Sort\n"
               "2. Merge Sort\n"
               "3. Quick Sort\n"
               "4. Counting Sort\n"
               "5. Exit\n");
        int opt;
        cin >> opt;

        switch (opt)
        {
        case 1:
            BubbleSort(0, 0);
            break;
        case 2:
            MergeSort(0, 0);
            break;
        case 3:
            QuickSort(0, 0);
            break;
        case 4:
            CountingSort(0, 0);
            break;
        case 5:
            printf("Closing program...\n");
            menu = 0;
            break;
        default:
            printf("Invalid Option\n");
        }
    }

    return 0;
};