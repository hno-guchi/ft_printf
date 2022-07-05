#include <stdio.h>

int	main(void)
{
	printf("\n----- check flags, conversion c ------\n");
	printf("[%#c]\n", 'a');
	printf("[%0c]\n", 'a');
	printf("[%-c]\n", 'a');
	printf("[%+c]\n", 'a');
	printf("[% c]\n", 'a');
	printf("[%#0-+ c]\n", 'a');
	printf("\n");

	printf("\n----- check combination flag 0 , flag - ------\n");
	printf("[%03d]\n", 3);
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
