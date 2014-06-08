#pragma once
#include <vector>
#include <iostream>
using namespace std;

template <class T>
void printArray(const vector<T>& theArray)
{
    for (size_t i = 0; i < theArray.size(); ++ i)
    {
        cout << "#" << i << "\t" << theArray[i] << endl;
    }
}

