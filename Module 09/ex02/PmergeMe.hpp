#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>
# include <vector>
# include <algorithm>
# include <deque>

class	PmergeMe {
	private:
		std::vector<int>	arr;
		std::deque<int>		deque;

	public:
		void	insertionSort(std::vector<int> &arr, int left, int right);
		void	merge(std::vector<int> &arr, int left, int mid, int right);
		void	mergeSortHelper(std::vector<int> &arr, int left, int right);
		void	mergeSort(std::vector<int> &arr);

		void	d_insertionSort(std::deque<int> &deq, int left, int right);
		void	d_merge(std::deque<int> &deq, int left, int mid, int right);
		void	d_mergeSortHelper(std::deque<int> &deq, int left, int right);
		void	d_mergeSort(std::deque<int> &deq);

		std::vector<int>&	getArr();
		std::deque<int>&	getDeque();

	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe&	operator=(const PmergeMe& other);
	~PmergeMe();

};

#endif