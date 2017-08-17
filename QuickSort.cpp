#include <iostream>
#include <random>

template<typename T>
void QuickSort(T rawdata[], int start, int end);

template<typename T>
int Partition(T rawdata[], int start, int end);

template<typename T>
void Swap(T &lhs, T &rhs);

template<typename T>
void printArray(T * array);

int randomChoose(int start, int end);


template<typename T>
void QuickSort(T rawdata[], int start, int end)
{
    if(start >= end)
	return;

/* ----STAGE I----
  Part the data into three parts.
     1. smaller than certain value
     2. certain value
     3. bigger or equal than certain value */

    //pivotkey is the <certain value> index
    int pivotkey = Partition(rawdata, start, end);

/* ----STAGE II-----
    Recursively QuickSort for first pats in STAGE I*/   
    QuickSort(rawdata, start, pivotkey - 1);

/* ----STAGE III-----
    Recursively QuickSort for first pats in STAGE I*/   

    QuickSort(rawdata, pivotkey + 1, end);
}

/*
========== Tools Functions ==========
1. Partition(T rawdata[], int start, int end)
2. Swap(T &lhs, T &rhs)
3. randomChoose(int start, int end)
*/

template<typename T>
int Partition(T rawdata[], int start, int end) 
{   
    int index = start;
    int pivotkey = start;
    int chosenIndex = randomChoose(start, end);
    
    Swap(rawdata[chosenIndex], rawdata[end]);
    for(; index < end; index++) {
	if(rawdata[index] < rawdata[end]) {
	    Swap(rawdata[pivotkey], rawdata[index]);
	    pivotkey++;
	}
    }
    Swap(rawdata[pivotkey], rawdata[end]);     
    return pivotkey;
}

template<typename T>
void Swap(T &lhs, T &rhs)
{
    T tmp = lhs;
    lhs = rhs;
    rhs = tmp;
}

int randomChoose(int start, int end)
{
    return rand() % (end - start + 1) + start;
}

template <typename T,unsigned S>
inline unsigned arraysize(const T (&v)[S]) { return S; }

template<typename T>
void printArray(T arr[], int length) 
{
    for(int i = 0; i < length; ++i)
	std::cout << arr[i] << "  ";
    std::cout << std::endl;
}

int main()
{
    int a[] = {4, 3, 2, 7, 9, 12, 3, 3, 11};
    int length = sizeof(a) / sizeof(*a);
    printArray(a, length);
    QuickSort(a, 0, length - 1);
    printArray(a, length); 
}


















