template <typename T>
int easyfind(const T& container, int value) {
	typename T::const_iterator it = container.begin();
	while (it != container.end() && *it != value) {
		++it;
	}
	if (it == container.end()) {
		return (throw HardToFind(),-1);
	} else {
		return it - container.begin();
	}
}
