#include <unistd.h>
#include <sys/wait.h>

int	main(void)
{
	size_t* harray;
	int pid = fork();
	int pid2 = fork();
	while (1)
	{
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		harray = new size_t[8000000000];
		(void) harray;
	}
	waitpid(pid, NULL, 0);
	waitpid(pid2, NULL, 0);
}
