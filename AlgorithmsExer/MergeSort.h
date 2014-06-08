#pragma once

#include "Helper.h"

template<typename T>
class Merge
{
public:
    Merge(T& A);
    virtual ~Merge() {}
    void merge(const int p, const int q, const int r);
	void merge_nosentinel(const int p, const int q, const int r);
private:
    T& myA;
};

template<typename T>
Merge<T>::Merge(T& A) : myA(A)
{
}

template<typename T>
void Merge<T>::merge(const int p, const int q, const int r)
{
    const int sentinel = 0x7FFFFFFF;
    T L, R;
    int i(0);
    for (; i <= q - p; ++ i)
    {
        L.push_back(myA[p + i]);
    }
    L.push_back(sentinel);

    for (i = 1; i <= r - q; ++ i)
    {
        R.push_back(myA[q + i]);
    }
    R.push_back(sentinel);

    i = 0;
    int j(0);
    for (int k = p; k <= r; ++ k)
    {
        if (L[i] <= R[j])
        {
            if (L[i] != sentinel)
            {
                myA[k] = L[i ++ ];
            }
        }
        else
        {
            if (R[j] != sentinel)
            {
                myA[k] = R[j ++ ];
            }
        }
    }
}

template<typename T>
void Merge<T>::merge_nosentinel(const int p, const int q, const int r)
{
    const int sentinel = 0x7FFFFFFF;
    T L, R;
    int i(0);
    for (; i <= q - p; ++ i)
    {
        L.push_back(myA[p + i]);
    }

    for (i = 1; i <= r - q; ++ i)
    {
        R.push_back(myA[q + i]);
    }

    i = 0;
    int j(0);
    for (int k = p; k <= r; ++ k)
    {
        if (L[i] <= R[j])
        {
            if (L[i] != sentinel)
            {
                myA[k] = L[i ++ ];
            }
        }
        else
        {
            if (R[j] != sentinel)
            {
                myA[k] = R[j ++ ];
            }
        }
    }
}

// ==========================================================
template<typename T>
class MergeSort
{
public:
    MergeSort(T& A, const int p, const int r);
    virtual ~MergeSort() {}

    void sort();

private:
    Merge<T> mergeObject;
    T& myA;
    int myP;
    int myR;
};

template<typename T>
MergeSort<T>::MergeSort(T& A, const int p, const int r) :
    mergeObject(A), myA(A), myP(p), myR(r)
{
}

template<typename T>
void MergeSort<T>::sort()
{
    if (myP < myR)
    {
        int q(0);
		q = floor((double(myP + myR)) / 2);
        MergeSort<T> oneMergeSort(myA, myP, q);
        oneMergeSort.sort();
        MergeSort<T> twoMergeSort(myA, q + 1, myR);
        twoMergeSort.sort();
        mergeObject.merge(myP, q, myR);
    }
}
