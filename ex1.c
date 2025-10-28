
#include <unistd.h>

int	main()
{
	char *arr = "Holaa";
	while (*arr)
	{
		write(1, arr++, 1);
	}
}
