#include <iostream>

using namespace std;

void Merge(const int *SR, int *TR, int low, int high, int mid);

void MergeSort(const int *SR, int *TR, int low, int high) 
{
    int *TMP = new int[sizeof(SR) / sizeof(*SR)]();
    if (low == high) TR[low] = SR[low];
    else {
	int mid = (low + high) / 2;
	MergeSort(SR, TMP, low, mid);
	MergeSort(SR, TMP, mid + 1, high);
	Merge(TMP, TR, low, mid, high);
    } 
}


