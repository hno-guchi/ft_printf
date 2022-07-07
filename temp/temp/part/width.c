#include <stdio.h>

int	main(void)
{
	printf("\n----- check width, coversion c ------\n");
	printf("[%-10c]\n", 'a');
	printf("[%10c]\n", 'a');

	// printf("\n----- check width ------\n");
	// printf("[%-2147483648d]\n", 3);
	// printf("[%-2147483648d]\n", 3);

	printf("\n----- check width is * = -10 ------\n");
	printf("[%*c]\n", -10, 'A');
	printf("[%*s]\n", -10, "ABCDE");
	printf("[%*d]\n", -10, 42);
	printf("[%*i]\n", -10, 42);
	printf("[%*p]\n", -10, NULL);
	printf("[%*u]\n", -10, 42);
	printf("[%*x]\n", -10, 42);
	printf("[%*X]\n", -10, 42);

	printf("\n----- check width is * = 0 ------\n");
	printf("[%*c]\n", 0, 'A');
	printf("[%*s]\n", 0, "ABCDE");
	printf("[%*d]\n", 0, 42);
	printf("[%*i]\n", 0, 42);
	printf("[%*p]\n", 0, NULL);
	printf("[%*u]\n", 0, 42);
	printf("[%*x]\n", 0, 42);
	printf("[%*X]\n", 0, 42);

	printf("\n----- check width is * = 10 ------\n");
	printf("[%*c]\n", 10, 'A');
	printf("[%*s]\n", 10, "ABCDE");
	printf("[%*d]\n", 10, 42);
	printf("[%*i]\n", 10, 42);
	printf("[%*p]\n", 10, NULL);
	printf("[%*u]\n", 10, 42);
	printf("[%*x]\n", 10, 42);
	printf("[%*X]\n", 10, 42);

	printf("\n----- check width is [%%10-20s] ------\n");
	printf("[%10-20s]\n", 10, "ABCDEFG");

	return (0);
	printf("[%-3d]\n", 3);
	printf("[%-03d]\n", 3);
	printf("\n");

	printf("\n----- check combination flag + , flag \" \" ------\n");
	printf("[%+d]\n", 3);
	printf("[% d]\n", 3);
	printf("[% +d]\n", 3);
	printf("\n");

	printf("\n----- check combination flag 0 , flag \" \" ------\n");
	printf("[12345678901234567890]\n");
	printf("[%0 10d]\n", 3);
	printf("[% 010d]\n", 3);
	printf("\n");

	printf("\n----- check combination flag \" \" , width ------\n");
	printf("[12345678901234567890]\n");
	printf("[% 10d]\n", 3);
	printf("[% 010d]\n", 3);
	printf("\n");

	printf("\n----- check width ------\n");
	printf("[%30d]\n", 3);

	printf("\n----- check combination ellegal position ------\n");
	printf("[%10-d]\n", 3);
	printf("[%10+d]\n", 3);
	printf("[%10+q]\n", 3);
	printf("[%10+qd]\n", 3);
	printf("[%10+qqqqd]aaaaaa\n", 3);
	// printf("[%10+m] [%s]\n", 3, "ELLEGAL");
	// printf("[%10+q] [%s]\n", 3, "ELLEGAL");
	printf("[%10 0d]\n", 3);
	printf("\n");

	
	return (0);
}
