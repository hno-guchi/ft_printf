#include <stdio.h>

int	main(void)
{
	printf("\n----- check flags ------\n");
	printf("[%%#c]     = [%#c]\n", 'a');
	printf("[%%0c]     = [%0c]\n", 'a');
	printf("[%%-c]     = [%-c]\n", 'a');
	printf("[%%+c]     = [%+c]\n", 'a');
	printf("[%% c]     = [% c]\n", 'a');
	printf("[%%#0-+ c] = [%#0-+ c]\n", 'a');
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf("[%#*c]\n", 0, 'a');
	printf("[%0*c]\n", 0, 'a');
	printf("[%-*c]\n", 0, 'a');
	printf("[%+*c]\n", 0, 'a');
	printf("[% *c]\n", 0, 'a');
	printf("[%#0-+ *c]\n", 0, 'a');
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf("[%#1c]\n", 'a');
	printf("[%01c]\n", 'a');
	printf("[%-1c]\n", 'a');
	printf("[%+1c]\n", 'a');
	printf("[% 1c]\n", 'a');
	printf("[%#0-+ 1c]\n", 'a');
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf("[%#10c]\n", 'a');
	printf("[%010c]\n", 'a');
	printf("[%-10c]\n", 'a');
	printf("[%+10c]\n", 'a');
	printf("[% 10c]\n", 'a');
	printf("[%#0-+ 10c]\n", 'a');
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf("[%#.0c]\n", 'a');
	printf("[%0.0c]\n", 'a');
	printf("[%-.0c]\n", 'a');
	printf("[%+.0c]\n", 'a');
	printf("[% .0c]\n", 'a');
	printf("[%#0-+ .0c]\n", 'a');
	printf("\n");

	printf("\n----- check flags, precision 1 ------\n");
	printf("[%#.1c]\n", 'a');
	printf("[%0.1c]\n", 'a');
	printf("[%-.1c]\n", 'a');
	printf("[%+.1c]\n", 'a');
	printf("[% .1c]\n", 'a');
	printf("[%#0-+ .1c]\n", 'a');
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf("[%#.10c]\n", 'a');
	printf("[%0.10c]\n", 'a');
	printf("[%-.10c]\n", 'a');
	printf("[%+.10c]\n", 'a');
	printf("[% .10c]\n", 'a');
	printf("[%#0-+ .10c]\n", 'a');
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf("[%#10.10c]\n", 'a');
	printf("[%010.10c]\n", 'a');
	printf("[%-10.10c]\n", 'a');
	printf("[%+10.10c]\n", 'a');
	printf("[% 10.10c]\n", 'a');
	printf("[%#0-+ 10.10c]\n", 'a');
	printf("\n");

	return (0);
}
