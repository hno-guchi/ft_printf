#include "test_large_x.h"

int main(int argc, char **argv)
{
	if (1 < argc)
	{
		if (!strcmp(argv[1], "official"))
			official_printf();
		else if (!strcmp(argv[1], "my"))
			my_printf();
		if (argc == 3)
		{
			if (!strcmp(argv[2], "leaks"))
				system("leaks -q a.out");
		}
	}
	return (0);
}
