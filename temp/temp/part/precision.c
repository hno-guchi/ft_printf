#include <stdio.h>

int	main(void)
{
	printf("\n----- check width ------\n");
	printf("[%.08d]\n", 3);
	printf("[%.08d]\n", 3);

	printf("\n----- check width ------\n");
	// printf("[%.2147483648d]\n", 3);

	// precision is ignore
	printf("\n----- check precision is * = -3 ------\n");
	printf("[%.*c]\n", -3, 'A');
	printf("[%.*s]\n", -3, "ABCDE");
	printf("[%.*d]\n", -3, 42);
	printf("[%.*i]\n", -3, 42);
	printf("[%.*p]\n", -3, NULL);
	printf("[%.*p]\n", -3, "NULL");
	printf("[%.*u]\n", -3, 42);
	printf("[%.*x]\n", -3, 42);
	printf("[%.*X]\n", -3, 42);

	// precision is 0.
	printf("\n----- check precision is * = 0 ------\n");
	printf("[%.*c]\n", 0, 'A');
	printf("[%.*s]\n", 0, "ABCDE");
	printf("[%.*d]\n", 0, 42);
	printf("[%.*i]\n", 0, 42);
	printf("[%.*p]\n", 0, NULL);
	printf("[%.*p]\n", 0, "NULL");
	printf("[%.*u]\n", 0, 42);
	printf("[%.*x]\n", 0, 42);
	printf("[%.*X]\n", 0, 42);

	printf("\n----- check precision is * = 10 ------\n");
	printf("[%.*c]\n", 10, 'A');
	printf("[%.*s]\n", 10, "ABCDE");
	printf("[%.*d]\n", 10, 42);
	printf("[%.*i]\n", 10, 42);
	printf("[%.*p]\n", 10, NULL);
	printf("[%.*p]\n", 10, "NULL");
	printf("[%.*u]\n", 10, 42);
	printf("[%.*x]\n", 10, 42);
	printf("[%.*X]\n", 10, 42);

	printf("\n----- check width is -10 ------\n");
	printf("[%-10c]\n", 'A');
	printf("[%-10s]\n", "ABCDE");
	printf("[%-10d]\n", 42);
	printf("[%-10i]\n", 42);
	printf("[%-10p]\n", NULL);
	printf("[%-10p]\n", "NULL");
	printf("[%-10u]\n", 42);
	printf("[%-10x]\n", 42);
	printf("[%-10X]\n", 42);

	// precision is 0; minus flag is 1; width is 10
	printf("\n----- check precision is -10 ------\n");
	printf("[%.-10c]\n", 'A');
	printf("[%.-10s]\n", "ABCDE");
	printf("[%.-10d]\n", 42);
	printf("[%.-10i]\n", 42);
	printf("[%.-10p]\n", NULL);
	printf("[%.-10p]\n", "NULL");
	printf("[%.-10u]\n", 42);
	printf("[%.-10x]\n", 42);
	printf("[%.-10X]\n", 42);

	printf("\n----- check precision is 0 ------\n");
	printf("[%.0c]\n", 'A');
	printf("[%.0s]\n", "ABCDE");
	printf("[%.0d]\n", 42);
	printf("[%.0i]\n", 42);
	printf("[%.0p]\n", NULL);
	printf("[%.0p]\n", "NULL");
	printf("[%.0u]\n", 42);
	printf("[%.0x]\n", 42);
	printf("[%.0X]\n", 42);

	printf("\n----- check precision is 10 ------\n");
	printf("[%.10c]\n", 'A');
	printf("[%.10s]\n", "ABCDE");
	printf("[%.10d]\n", 42);
	printf("[%.10i]\n", 42);
	printf("[%.10p]\n", NULL);
	printf("[%.10p]\n", "NULL");
	printf("[%.10u]\n", 42);
	printf("[%.10x]\n", 42);
	printf("[%.10X]\n", 42);

	printf("\n----- check precision is . ------\n");
	printf("[%.c]\n", 'A');
	printf("[%.s]\n", "ABCDE");
	printf("[%.d]\n", 420);
	printf("[%.i]\n", 420);
	printf("[%.p]\n", NULL);
	printf("[%.p]\n", "NULL");
	printf("[%.u]\n", 420);
	printf("[%.x]\n", 420);
	printf("[%.X]\n", 420);

	printf("\n----- check precision is 1 ------\n");
	printf("[%.1c]\n", 'A');
	printf("[%.1s]\n", "ABCDE");
	printf("[%.1d]\n", 420);
	printf("[%.1i]\n", 420);
	printf("[%.1p]\n", NULL);
	printf("[%.1p]\n", "NULL");
	printf("[%.1u]\n", 420);
	printf("[%.1x]\n", 420);
	printf("[%.1X]\n", 420);

	return (0);
}
