template <typename T, class Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>(){

}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &src) : std::stack<T, Container>(src){

}

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack(void){

}

template <typename T, class Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(MutantStack const &rhs)
{
	if (this != &rhs)
	{
		std::stack<T, Container>::operator=(rhs);
	}
	return (*this);
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void)
{
	return (this->c.begin());
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void)
{
	return (this->c.end());
}

template <typename T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin(void) const
{
	return (this->c.begin());
}

template <typename T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end(void) const
{
	return (this->c.end());
}
