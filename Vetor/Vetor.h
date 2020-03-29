#pragma once
#include "Enums.h"
using namespace std;
class Vetor
{
private:
	int arr[100000];
	int length = 0;
	void BubbleSort();
	void MergeSort();
	void SelectionSort();
	void QuickSort();
	void InsertionSort();
public:
	Vetor();
	bool Add(int element);
	bool Add(int index, int element);
	void Clear();
	bool Contains(int element);
	int Get(int index);
	int IndexOf(int element);
	bool IsEmpty();
	int LastIndexOf(int element);
	int Remove(int index);
	int Size();
	void Resize();
	void Sort(TypeSort type);
};

