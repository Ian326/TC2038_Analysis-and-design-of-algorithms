#include <iostream>
#include "array_print.h"
#include "array_info.h"
using namespace std;

bool isInt(const string &str)
{
    bool result = true;
    try
    {
        // Convert string to int
        int n = stoi(str);
    }
    catch (const invalid_argument &e)
    {
        result = false;
    }
    catch (const out_of_range &e)
    {
        result = false;
    }
    return result;
}

ArrayInfo createArray(){

    string str;
    int arrLen;
    bool valid_len = false;

    while (not valid_len)
    {

        printf("Give me the length of you array: ");

        cin >> str;

        if (isInt(str))
        {
            arrLen = stoi(str);

            if (arrLen > 0)
                valid_len = true;

            else
                printf("Length must be at least 1\n\n");
        }

        else
            printf("Not a number, try again.\n\n");
    }

    int *array = new int[arrLen];

    for (int i = 0; i < arrLen; i++)
    {
        int value;
        bool valid_value = false;

        while(not valid_value){

            printf("Give me the %i element of the array: ", i);
            cin >> str;
            if (isInt(str))
            {
                array[i] = stoi(str);
                valid_value = true;
            }
            else
            {
                printf("Not a number, try again.\n\n");
            }
        }
    }

    printf("Original Array: ");
    printArray(arrLen, array);

    ArrayInfo arr;
    arr.array = array;
    arr.size = arrLen;

    return arr;
}