#include <iostream>
using namespace std;

void printArray(int n, int *array){
    
    string arr = "[";

    for(int i = 0; i < n; i++){

        arr += to_string(array[i]);
        
        if (i < n - 1)
        {
            arr += " ";
        }
    }

    arr += "]";
    printf("%s\n", arr.c_str());
}