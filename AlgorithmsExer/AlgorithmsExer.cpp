// AlgorithmsExer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <vector>
#include "InsertionSort.h"
#include "SelectSort.h"
#include "MergeSort.h"
#include "DecDigital.h"
#include "Helper.h"

int _tmain(int argc, _TCHAR* argv[])
{
    vector<int> intArray;
	intArray.push_back(31);
	intArray.push_back(41);
	intArray.push_back(59);
	intArray.push_back(26);
	intArray.push_back(41);
	intArray.push_back(58);
    vector<int> anotherIntArray(intArray);
    anotherIntArray.push_back(22);

    InsertionSort insertionSort;

	cout << "Before insertion sort in ascend:" << endl;
    printArray(intArray);

	insertionSort.insertionSortAscend(intArray);

	cout << "After insertion sort in ascend:" << endl;
	printArray(intArray);

	insertionSort.insertionSortDescend(intArray);

	cout << "After insertion sort in descend:" << endl;
	printArray(intArray);

    DecDigital decDigital("01", "11");

    cout << decDigital.getResult() << endl;

    SelectSort<vector<int>> selectSortObj(intArray);

    selectSortObj.sort();
    cout << "After select sort in ascend:" << endl;
    printArray(intArray);

    cout << "Before merge sort:" << endl;
    printArray(anotherIntArray);

    MergeSort<vector<int>> mergeSort(anotherIntArray, 0, anotherIntArray.size() - 1);
    mergeSort.sort();
    cout << "After merge sort:" << endl;
    printArray(anotherIntArray);
	return 0;
}

