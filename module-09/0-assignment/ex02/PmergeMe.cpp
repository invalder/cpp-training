#include "PmergeMe.hpp"

template <typename T>
bool PmergeMe<T>::isAllDigits(const char* str) {
	if (*str == '-' || *str == '+') {
		++str; // Skip the sign character if present
	}

	while (*str) {
		if (*str < '0' || *str > '9') {
			return false; // Not a digit
		}
		++str;
	}
	return true; // All characters are digits
}

template <typename T>
template <typename U>
bool PmergeMe<T>::isSorted(const U& container) {
	typename U::const_iterator it = container.begin();
	typename U::const_iterator next = it;
	++next;

	while (next != container.end()) {
		if (*next < *it) {
			return false; // Not sorted
		}
		++it;
		++next;
	}

	return true; // Sorted
}

template <typename T>
void	PmergeMe<T>::parseInput()
{
	for (int i = 0; i < _n; ++i) {
		if (!isAllDigits(_argv[i + 1]))
		{
			std::cerr << "Usage: " << _argv[0] << " <value1> <value2> ... <valueN>" << std::endl;
			throw (InputException(ERR_NOT_DIGIT));
		}

		char* endPtr;
		long chk = std::strtol(_argv[i + 1], &endPtr, 10);
		if (chk > INT_MAX)
			throw (InputException(ERR_TOO_BIG));
		if (chk < 0)
			throw (InputException(ERR_NEG));

		int	val = std::atoi(_argv[i + 1]);
		_vectorInput.push_back(val);
		_dequeInput.push_back(val);
	}
}

// Insertion Sort Implementation
template <typename T>
template <typename U>
void	PmergeMe<T>::insertionSort(U& arr, int left, int right)
{
	for (int i = left + 1; i <= right; ++i) {
		typename U::value_type key = arr[i];
		int j = i - 1;

		while (j >= left && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// Merge-Insertion Sort Function
template <typename T>
template <typename U>
void	PmergeMe<T>::mergeInsertionSort(U& arr, int left, int right, int threshold)
{
	if (left < right) {
		if (right - left + 1 <= threshold) {
			insertionSort(arr, left, right);
		} else {
			int mid = left + (right - left) / 2;

			mergeInsertionSort(arr, left, mid, threshold);
			mergeInsertionSort(arr, mid + 1, right, threshold);

			U temp(right - left + 1);
			int i = left, j = mid + 1, k = 0;
			while (i <= mid && j <= right) {
				if (arr[i] <= arr[j])
					temp[k++] = arr[i++];
				else
					temp[k++] = arr[j++];
			}
			while (i <= mid)
				temp[k++] = arr[i++];
			while (j <= right)
				temp[k++] = arr[j++];

			for (typename U::size_type p = 0; p < temp.size(); ++p)
				arr[left + p] = temp[p];
		}
	}
}

template <typename T>
PmergeMe<T>::PmergeMe(int ac, char **av) : _argc(ac), _argv(av)
{
	if (_argc < 2)
	{
		std::cerr << "Usage: " << _argv[0] << " <value1> <value2> ... <valueN>" << std::endl;
		throw (InputException(ERR_INPUT));
	}
	_n = _argc - 1;
	parseInput();

	if (isSorted(_vectorInput) || isSorted(_dequeInput))
		throw (InputException(ERR_SORTED));
}

template <typename T>
PmergeMe<T>::PmergeMe(const PmergeMe &ref) : _n(ref._n), _argc(ref._argc), _argv(ref._argv)
{
	parseInput();

	if (isSorted(_vectorInput) || isSorted(_dequeInput))
		throw (InputException(ERR_SORTED));
}

template <typename T>
PmergeMe<T>&	PmergeMe<T>::operator=(const PmergeMe & rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_argc = rhs._argc;
		this->_argv = rhs._argv;

		parseInput();

		if (isSorted(_vectorInput) || isSorted(_dequeInput))
			throw (InputException(ERR_SORTED));
	}
	return (*this);
}

template <typename T>
PmergeMe<T>::~PmergeMe(){
}

template <typename T>
void	PmergeMe<T>::sortAndTime(int threshold){
	(void) threshold;

	std::vector<int> vectorArr(_vectorInput);
	std::deque<int> dequeArr(_dequeInput);

	// clock_t start_time_vector = clock();
	// mergeInsertionSort(vectorArr, 0, _n - 1, threshold);
	// clock_t end_time_vector = clock();
	// _vectorElapsedTime = static_cast<double>(end_time_vector - start_time_vector) / CLOCKS_PER_SEC;

	// clock_t start_time_deque = clock();
	// mergeInsertionSort(dequeArr, 0, _n - 1, threshold);
	// clock_t end_time_deque = clock();
	// _dequeElapsedTime = static_cast<double>(end_time_deque - start_time_deque) / CLOCKS_PER_SEC;

	struct timeval start_time_vector, end_time_vector;
	gettimeofday(&start_time_vector, NULL);
	mergeInsertionSort(vectorArr, 0, _n - 1, threshold);
	gettimeofday(&end_time_vector, NULL);
	_vectorElapsedTime = (end_time_vector.tv_sec - start_time_vector.tv_sec) * 1e6 + (end_time_vector.tv_usec - start_time_vector.tv_usec);

	struct timeval start_time_deque, end_time_deque;
	gettimeofday(&start_time_deque, NULL);
	mergeInsertionSort(dequeArr, 0, _n - 1, threshold);
	gettimeofday(&end_time_deque, NULL);
	_dequeElapsedTime = (end_time_deque.tv_sec - start_time_deque.tv_sec) * 1e6 + (end_time_deque.tv_usec - start_time_deque.tv_usec);

	if (!isSorted(vectorArr) || !isSorted(dequeArr))
		throw (InputException(ERR_NOT_SORTED));

	std::cout << "Before: ";
	printSample(_vectorInput);

	std::cout << "After: ";
	printSample(vectorArr);
}

template <typename T>
void	PmergeMe<T>::printResults()
{
	std::cout << "Time to process a range of " << _n << " elements with std::" << "vector : " << std::fixed << std::setprecision(5) << _vectorElapsedTime << " usec" << std::endl;
	std::cout << "Time to process a range of " << _n << " elements with std::" << "deque : " << std::fixed << std::setprecision(5) << _dequeElapsedTime << " usec" << std::endl;
}

template <typename T>
template <typename U>
void PmergeMe<T>::printSample(const U& container) {
	if (_n <= 10) {
		for (typename U::const_iterator it = container.begin(); it != container.end(); ++it) {
			std::cout << *it << " ";
		}
	} else {
		int count = 0;
		for (typename U::const_iterator it = container.begin(); it != container.end() && count < 10; ++it) {
			std::cout << *it << " ";
			++count;
		}
		std::cout << "[...]";
	}
	std::cout << std::endl;
}

template class PmergeMe<std::vector<int> >;
template class PmergeMe<std::deque<int> >;
