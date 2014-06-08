#include "StdAfx.h"
#include <vector>
#include "InsertionSort.h"

InsertionSort::InsertionSort(void)
{
}


InsertionSort::~InsertionSort(void)
{
}

void InsertionSort::insertionSortAscend(vector<int>& intVector)
{
    for (size_t j = 1; j < intVector.size(); ++ j)
    {
        int key = intVector[j];
        int i = j - 1;
        while (i >= 0)
        {
            if (intVector[i] > key)
            {
                intVector[i + 1] = intVector[i];
            }
            else
            {
                break;
            }
            -- i;
        }
        intVector[i + 1] = key;
    }
}

void InsertionSort::insertionSortDescend(vector<int>& intVector)
{
    for (size_t j = 1; j < intVector.size(); ++ j)
    {
        int key = intVector[j];
        int i = j - 1;
        while (i >= 0)
        {
            if (intVector[i] < key)
            {
                intVector[i + 1] = intVector[i];
            }
            else
            {
                break;
            }
            -- i;
        }
        intVector[i + 1] = key;
    }
}
