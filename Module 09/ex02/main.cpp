#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "Usage: " << argv[0] << " [positive integer sequence]\n";
		return 1;
	}

	PmergeMe	mergeMe;

	for (int i = 1; i < argc; ++i) {
		int val = std::stoi(argv[i]);
		if (val < 0) {
			std::cerr << "Error" << std::endl;
			return 1;
		}
	}

	std::cout << "Before: ";
	for (int i = 1; i < argc; ++i)
	{
		try
		{
			int val = std::stoi(argv[i]);
			mergeMe.getArr().push_back(val);
			mergeMe.getDeque().push_back(val);
			if (i < 10)
				std::cout << val << ' ';
		}
		catch (std::exception &e)
		{
			std::cerr << "Error: " << e.what() << '\n';
			return 1;
		}
	}
	if (argc > 10)
		std::cout << "[...]";
	std::cout << std::endl;

	clock_t start = clock();
	mergeMe.mergeSort(mergeMe.getArr());
	clock_t end = clock();

	clock_t start1 = clock();
	mergeMe.d_mergeSort(mergeMe.getDeque());
	clock_t end1 = clock();

	double elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	double elapsed1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;

	std::cout << "After:  ";
	int n = mergeMe.getArr().size();
	for (int i = 0; i < n; ++i) {
		if (i <= 8)
			std::cout << mergeMe.getArr()[i] << ' ';
		else if (i > 10) {
			std::cout << "[...]";
			break;
		}
	}

	std::cout << std::endl;

	std::cout << "Time to process a range of " << mergeMe.getArr().size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << elapsed << " us" << std::endl;
	std::cout << "Time to process a range of " << mergeMe.getDeque().size() << " elements with std::deque  : " << std::fixed << std::setprecision(5) << elapsed1 << " us" << std::endl;
	return 0;
};