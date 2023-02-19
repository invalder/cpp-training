#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	void	*ptr;
	char	*test = malloc(sizeof(char) * 100);

	for(int i = 0; i < 99 ; i++)
	{
		test[i] = i;
	}
	test[99] = 0;

	ptr = test;

	int i = 0;
	while ((char *)ptr)
	{
		printf("%p\n", (int *)ptr + i);
		i++;
	}
}
