#include <iostream>

using namespace std;

int findPivotIdx(int leftMostIdx, int rightMostIdx, int array[]){

    int i = leftMostIdx;
    int j = rightMostIdx;
    int pivot = array[leftMostIdx];

    while(i < j){

        while(array[i] <= pivot && i <= rightMostIdx - 1){
            i++;
        }
        while (array[j] > pivot && j >= leftMostIdx + 1)
        {
            j--;
        }

        if(i < j){
            swap(array[i], array[j]);
        }
    }

    swap(array[leftMostIdx], array[j]);
    return j;
    
}

void QuickSort(int leftMostIdx, int rightMostIdx, int array[])
{
    if (leftMostIdx < rightMostIdx)
    {

        int pivotIdx = findPivotIdx(leftMostIdx, rightMostIdx, array);

        QuickSort(leftMostIdx, pivotIdx - 1, array);
        QuickSort(pivotIdx + 1, rightMostIdx, array);
    }
};