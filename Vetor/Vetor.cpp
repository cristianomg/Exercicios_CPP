#include "Vetor.h"
#include <iostream>
using namespace std;

Vetor::Vetor()
{
	int length = 0;
}

bool Vetor::Add(int element)
{
	int size = sizeof(arr) / sizeof(arr[0]);
	if ((length + 1) >= size)
		Resize();

	arr[length] = element;
	length++;
	return true;
}
bool Vetor::Add(int index, int element)
{
	int size = sizeof(arr) / sizeof(arr[0]);
	if ((length + 1) >= size)
		Resize();

	if (index > length + 1)
		return false;

	int varArr[100000];

	for (int i = 0; i < index; i++)
	{
		varArr[i] = arr[i];
	}

	varArr[index] = arr[index];

	for (int i = index; i < length; i++)
	{
		varArr[i + 1] = arr[i];
	}

	for (int i = 0; i < length + 1; i++)
	{
		arr[i] = varArr[i];
	}

	length++;
	return true;
}
void Vetor::Clear()
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = NULL;
	}
	length = 0;
}
bool Vetor::Contains(int element)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == element)
			return true;
	}
	return false;
}
int Vetor::Get(int index)
{
	return arr[index];
}
int Vetor::IndexOf(int element)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return -1;
}
bool Vetor::IsEmpty()
{
	return length == 0 ? true : false;
}
int Vetor::LastIndexOf(int element)
{
	int position = -1;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == element)
			position = i;
	}
	return position;
}
int Vetor::Remove(int index)
{
	if (index < length)
	{
		int varArr[100000];

		for (int i = 0; i < index; i++)
		{
			varArr[i] = arr[i];
		}

		varArr[index] = arr[index];

		for (int i = index+1; i < length; i++)
		{
			varArr[i] = arr[i];
		}

		for (int i = 0; i < length + 1; i++)
		{
			arr[i] = varArr[i];
		}

		length--;
		
	}
	return -1;
}
int Vetor::Size()
{
	return length;
}
void Vetor::Resize() {}


void Vetor::printArray(int arr[], int length)
{
	int i;
	for (i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void Vetor::BubbleSort(int arr[], int length)
{
	int i, j;
	for (i = 0; i < length - 1; i++)

		for (j = 0; j < length - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}
void Vetor::InsertionSort(int arr[], int length)
{
	int i, key, j;
	for (i = 1; i < length; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void Vetor::SelectionSort(int arr[], int length)
{
	int i, j, min_idx;

	for (i = 0; i < length - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < length; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
}
void Vetor::QuickSort()
{

}
void Vetor::MergeSort(){}

void Vetor::Sort(TypeSort type)
{
	int varArr[100000];
	for (int i = 0; i < length + 1; i++)
	{
		varArr[i] = arr[i];
	}
	switch (type)
	{
	case bubble:
		BubbleSort(varArr, length);
		break;
	case insertion:
		InsertionSort(varArr, length);
		break;
	case selection:
		SelectionSort(varArr, length);
		break;
	case quick:
		break;
	case merge:
		break;
	default:
		break;
	}

	printArray(varArr, length);

}
