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

void Vetor::BubbleSort()
{

}
void Vetor::MergeSort(){}
void Vetor::SelectionSort(){}
void Vetor::QuickSort(){}
void Vetor::InsertionSort(){}

void Vetor::Sort(TypeSort type)
{
	switch (type)
	{
	case bubble:
		break;
	case insertion:
		break;
	case selection:
		break;
	case quick:
		break;
	case merge:
		break;
	default:
		break;
	}
}
