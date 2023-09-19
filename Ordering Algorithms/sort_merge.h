#include <iostream>

using namespace std;

void merge(int leftMostIdx, int mediumIdx, int rightMostIdx, int array[]){

    int leftLen = mediumIdx - leftMostIdx + 1;
    int rightLen = rightMostIdx - mediumIdx;

    int leftArr[leftLen], rightArr[rightLen];

    for (int i = 0; i < leftLen; i++)
        leftArr[i] = array[leftMostIdx + i];

    for (int i = 0; i < rightLen; i++)
        rightArr[i] = array[mediumIdx + 1 + i];

    int leftItr = 0;          // Initial index of left subarray
    int rightItr = 0;         // Initial index of right subarray
    int arrItr = leftMostIdx; // Initial index of merged subarray

    while (leftItr < leftLen && rightItr < rightLen)
    {
        if (leftArr[leftItr] <= rightArr[rightItr])
        {
            array[arrItr] = leftArr[leftItr];
            leftItr++;
        }
        else
        {
            array[arrItr] = rightArr[rightItr];
            rightItr++;
        }
        arrItr++;
    }

    while (leftItr < leftLen)
    {
        array[arrItr] = leftArr[leftItr];
        leftItr++;
        arrItr++;
    }

    while (rightItr < rightLen)
    {
        array[arrItr] = rightArr[rightItr];
        rightItr++;
        arrItr++;
    }
}

void MergeSort(int leftMostIdx, int rightMostIdx, int array[])
{   
    if(leftMostIdx < rightMostIdx){

        int mediumIdx = leftMostIdx + (rightMostIdx-leftMostIdx)/2;

        MergeSort(leftMostIdx, mediumIdx, array);
        MergeSort(mediumIdx + 1, rightMostIdx, array);
        merge(leftMostIdx, mediumIdx, rightMostIdx, array);
    }
};