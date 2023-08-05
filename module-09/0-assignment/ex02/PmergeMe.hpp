#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <cstdlib> // For atoi
# include <ctime>   // For measuring time
# include <string>
# include <cctype>
# include <iomanip>
# include <sys/time.h> // Include for timeval and gettimeofday

# define ERR_TOO_BIG "Error: BIGGER Than Int. "
# define ERR_NEG "Error: Negative Numbers. "
# define ERR_NOT_DIGIT "Error: Unexpected Input. "
# define ERR_OPN "Error: could not open file. "
# define ERR_INPUT "Error: Input Error. "
# define ERR_SORTED "Error: Input already sorted. "
# define ERR_NOT_SORTED "Error: Output not sorted. "

template <typename T>
class PmergeMe {
	private:
		int					_n;
		int					_argc;
		char**				_argv;
		std::vector<int>	_vectorInput;
		std::deque<int>		_dequeInput;
		double				_vectorElapsedTime;
		double				_dequeElapsedTime;

		void	parseInput();

		template <typename U>
		void	insertionSort(U& arr, int left, int right);

		template <typename U>
		void	mergeInsertionSort(U& arr, int left, int right, int threshold);

		bool	isAllDigits(const char* str);

		template <typename U>
		bool	isSorted(const U& container);

	public:
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe & ref);
		PmergeMe& operator=(const PmergeMe & rhs);

		~PmergeMe(void);

		void	sortAndTime(int threshold);
		void	printResults(void);

		template <typename U>
		void	printSample(const U& container);
};

class InputException {
	private:
		std::string	_message;
	public:
		InputException(const std::string& msg) : _message(msg) {}
		const std::string& getMessage() const { return _message; }
};

#endif
