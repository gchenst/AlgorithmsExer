#pragma once

template<typename T>
class SelectSort
{
public:
    SelectSort(T& A);
    virtual ~SelectSort();

    void sort();

private:
    T& myA;
};

template<typename T>
SelectSort<T>::SelectSort(T& A) : myA(A)
{
}


template<typename T>
SelectSort<T>::~SelectSort()
{
}

template<typename T>
void SelectSort<T>::sort()
{
    for (int i = 0; i < myA.size() - 1; ++ i)
    {
        int minNoIndex = i + 1;
        if (i != myA.size() - 1)
        {
            for (int j = i + 2; j <= myA.size() - 1; ++ j)
            {
                if (myA[minNoIndex] > myA[j])
                {
                    minNoIndex = j;
                }
            }
        }
        if (myA[i] > myA[minNoIndex])
        {
            myA[i] += myA[minNoIndex];
            myA[minNoIndex] = myA[i] - myA[minNoIndex];
            myA[i] = myA[i] - myA[minNoIndex];
        }
    }
}
