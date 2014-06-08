#pragma once

using namespace std;

class InsertionSort
{
public:
    InsertionSort();
    virtual ~InsertionSort();

    void insertionSortAscend(vector<int>& intVector);
    void insertionSortDescend(vector<int>& intVector);
};


