#include "test_s.h"

int main(int argc, char **argv)
{
	char	*p = "abcde";

	if (1 < argc)
	{
		if (!strcmp(argv[1], "official"))
			official_printf(p);
		else if (!strcmp(argv[1], "my"))
			my_printf(p);
		if (argc == 3)
		{
			if (!strcmp(argv[2], "leaks"))
				system("leaks -q a.out");
		}
	}
	return (0);
}
