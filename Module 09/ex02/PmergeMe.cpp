#include "PmergeMe.hpp"
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other; }

PmergeMe::~PmergeMe() {}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other)
		*this = other;
	return *this;
}

std::vector<int>&	PmergeMe::getArr() { return this->arr; }

std::deque<int>&	PmergeMe::getDeque() { return this->deque; }

// Functions for std::vector

void	PmergeMe::insertionSort(std::vector<int>& arr, int left, int right)
{
    for(int i = left + 1; i <= right; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(j >= left && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void	PmergeMe::merge(std::vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
 
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1+ j];
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void	PmergeMe::mergeSortHelper(std::vector<int>& arr, int left, int right)
{
    if(right - left + 1 <= 10)
    {
        insertionSort(arr, left, right);
        return;
    }
    
    int mid = left + (right - left) / 2;
    mergeSortHelper(arr, left, mid);
    mergeSortHelper(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void	PmergeMe::mergeSort(std::vector<int>& arr)
{
    mergeSortHelper(arr, 0, arr.size() - 1);
}

// Functions for std::deque

void	PmergeMe::d_insertionSort(std::deque<int> &deq, int left, int right)
{
	for (int i = left + 1; i <= right; i++)
	{
		int temp = deq[i];
		int j = i - 1;
		while (j >= left && deq[j] > temp)
		{
			deq[j + 1] = deq[j];
			j--;
		}
		deq[j + 1] = temp;
	}
}

void	PmergeMe::d_merge(std::deque<int> &deq, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = deq[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = deq[mid + 1 + j];

	int i = 0, j = 0, k = left;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			deq[k] = L[i];
			i++;
		}
		else
		{
			deq[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		deq[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		deq[k] = R[j];
		j++;
		k++;
	}
}

void	PmergeMe::d_mergeSortHelper(std::deque<int> &deq, int left, int right)
{
	if (right - left + 1 <= 10)
	{
		d_insertionSort(deq, left, right);
		return;
	}

	int mid = left + (right - left) / 2;
	d_mergeSortHelper(deq, left, mid);
	d_mergeSortHelper(deq, mid + 1, right);
	d_merge(deq, left, mid, right);
}

void	PmergeMe::d_mergeSort(std::deque<int> &deq)
{
	d_mergeSortHelper(deq, 0, deq.size() - 1);
}
