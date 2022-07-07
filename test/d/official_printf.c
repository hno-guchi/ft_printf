#include "test_d.h"

void	official_printf(void)
{
	printf("\n----- Number is 12345 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#d]     = [%#d]", 12345));
	printf(" => [%d]\n", printf("[%%0d]     = [%0d]", 12345));
	printf(" => [%d]\n", printf("[%%-d]     = [%-d]", 12345));
	printf(" => [%d]\n", printf("[%%+d]     = [%+d]", 12345));
	printf(" => [%d]\n", printf("[%% d]     = [% d]", 12345));
	printf(" => [%d]\n", printf("[%%#0-+ d] = [%#0-+ d]", 12345));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%0*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%-*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%+*d]", 0, 12345));
	printf(" => [%d]\n", printf("[% *d]", 0, 12345));
	printf(" => [%d]\n", printf("[%#0-+ *d]", 0, 12345));
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf(" => [%d]\n", printf("[%#1d]", 12345));
	printf(" => [%d]\n", printf("[%01d]", 12345));
	printf(" => [%d]\n", printf("[%-1d]", 12345));
	printf(" => [%d]\n", printf("[%+1d]", 12345));
	printf(" => [%d]\n", printf("[% 1d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 1d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5d]", 12345));
	printf(" => [%d]\n", printf("[%05d]", 12345));
	printf(" => [%d]\n", printf("[%-5d]", 12345));
	printf(" => [%d]\n", printf("[%+5d]", 12345));
	printf(" => [%d]\n", printf("[% 5d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 5d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10d]", 12345));
	printf(" => [%d]\n", printf("[%010d]", 12345));
	printf(" => [%d]\n", printf("[%-10d]", 12345));
	printf(" => [%d]\n", printf("[%+10d]", 12345));
	printf(" => [%d]\n", printf("[% 10d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 10d]", 12345));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.d]", 12345));
	printf(" => [%d]\n", printf("[%0.d]", 12345));
	printf(" => [%d]\n", printf("[%-.d]", 12345));
	printf(" => [%d]\n", printf("[%+.d]", 12345));
	printf(" => [%d]\n", printf("[% .d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ .0d]", 12345));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%0.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%-.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%+.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[% .*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%#0-+ .*d]", 0, 12345));
	printf("\n");

	printf("\n----- check flags, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#.1d]", 12345));
	printf(" => [%d]\n", printf("[%0.1d]", 12345));
	printf(" => [%d]\n", printf("[%-.1d]", 12345));
	printf(" => [%d]\n", printf("[%+.1d]", 12345));
	printf(" => [%d]\n", printf("[% .1d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ .1d]", 12345));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5d]", 12345));
	printf(" => [%d]\n", printf("[%0.5d]", 12345));
	printf(" => [%d]\n", printf("[%-.5d]", 12345));
	printf(" => [%d]\n", printf("[%+.5d]", 12345));
	printf(" => [%d]\n", printf("[% .5d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ .5d]", 12345));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10d]", 12345));
	printf(" => [%d]\n", printf("[%0.10d]", 12345));
	printf(" => [%d]\n", printf("[%-.10d]", 12345));
	printf(" => [%d]\n", printf("[%+.10d]", 12345));
	printf(" => [%d]\n", printf("[% .10d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ .10d]", 12345));
	printf("\n");


	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.d]", 12345));
	printf(" => [%d]\n", printf("[%010.d]", 12345));
	printf(" => [%d]\n", printf("[%-10.d]", 12345));
	printf(" => [%d]\n", printf("[%+10.d]", 12345));
	printf(" => [%d]\n", printf("[% 10.d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%010.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%-10.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%+10.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[% 10.*d]", 0, 12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.*d]", 0, 12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#10.1d]", 12345));
	printf(" => [%d]\n", printf("[%010.1d]", 12345));
	printf(" => [%d]\n", printf("[%-10.1d]", 12345));
	printf(" => [%d]\n", printf("[%+10.1d]", 12345));
	printf(" => [%d]\n", printf("[% 10.1d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.1d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#10.5d]", 12345));
	printf(" => [%d]\n", printf("[%010.5d]", 12345));
	printf(" => [%d]\n", printf("[%-10.5d]", 12345));
	printf(" => [%d]\n", printf("[%+10.5d]", 12345));
	printf(" => [%d]\n", printf("[% 10.5d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.5d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#*.10d]", 0, 12345));
	printf(" => [%d]\n", printf("[%0*.10d]", 0, 12345));
	printf(" => [%d]\n", printf("[%-*.10d]", 0, 12345));
	printf(" => [%d]\n", printf("[%+*.10d]", 0, 12345));
	printf(" => [%d]\n", printf("[% *.10d]", 0, 12345));
	printf(" => [%d]\n", printf("[%#0-+ *.10d]", 0, 12345));
	printf("\n");

	printf("\n----- check flags, width 1, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#1.10d]", 12345));
	printf(" => [%d]\n", printf("[%01.10d]", 12345));
	printf(" => [%d]\n", printf("[%-1.10d]", 12345));
	printf(" => [%d]\n", printf("[%+1.10d]", 12345));
	printf(" => [%d]\n", printf("[% 1.10d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 1.10d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 5, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#5.10d]", 12345));
	printf(" => [%d]\n", printf("[%05.10d]", 12345));
	printf(" => [%d]\n", printf("[%-5.10d]", 12345));
	printf(" => [%d]\n", printf("[%+5.10d]", 12345));
	printf(" => [%d]\n", printf("[% 5.10d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 5.10d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10d]", 12345));
	printf(" => [%d]\n", printf("[%010.10d]", 12345));
	printf(" => [%d]\n", printf("[%-10.10d]", 12345));
	printf(" => [%d]\n", printf("[%+10.10d]", 12345));
	printf(" => [%d]\n", printf("[% 10.10d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.10d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10d]", 12345));
	printf(" => [%d]\n", printf("[%020.10d]", 12345));
	printf(" => [%d]\n", printf("[%-20.10d]", 12345));
	printf(" => [%d]\n", printf("[%+20.10d]", 12345));
	printf(" => [%d]\n", printf("[% 20.10d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 20.10d]", 12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20d]", 12345));
	printf(" => [%d]\n", printf("[%010.20d]", 12345));
	printf(" => [%d]\n", printf("[%-10.20d]", 12345));
	printf(" => [%d]\n", printf("[%+10.20d]", 12345));
	printf(" => [%d]\n", printf("[% 10.20d]", 12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.20d]", 12345));
	printf("\n");

	printf("\n----- Number is 0 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#d]     = [%#d]", 0));
	printf(" => [%d]\n", printf("[%%0d]     = [%0d]", 0));
	printf(" => [%d]\n", printf("[%%-d]     = [%-d]", 0));
	printf(" => [%d]\n", printf("[%%+d]     = [%+d]", 0));
	printf(" => [%d]\n", printf("[%% d]     = [% d]", 0));
	printf(" => [%d]\n", printf("[%%#0-+ d] = [%#0-+ d]", 0));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*d]", 0, 0));
	printf(" => [%d]\n", printf("[%0*d]", 0, 0));
	printf(" => [%d]\n", printf("[%-*d]", 0, 0));
	printf(" => [%d]\n", printf("[%+*d]", 0, 0));
	printf(" => [%d]\n", printf("[% *d]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ *d]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf(" => [%d]\n", printf("[%#1d]", 0));
	printf(" => [%d]\n", printf("[%01d]", 0));
	printf(" => [%d]\n", printf("[%-1d]", 0));
	printf(" => [%d]\n", printf("[%+1d]", 0));
	printf(" => [%d]\n", printf("[% 1d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 1d]", 0));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5d]", 0));
	printf(" => [%d]\n", printf("[%05d]", 0));
	printf(" => [%d]\n", printf("[%-5d]", 0));
	printf(" => [%d]\n", printf("[%+5d]", 0));
	printf(" => [%d]\n", printf("[% 5d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 5d]", 0));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10d]", 0));
	printf(" => [%d]\n", printf("[%010d]", 0));
	printf(" => [%d]\n", printf("[%-10d]", 0));
	printf(" => [%d]\n", printf("[%+10d]", 0));
	printf(" => [%d]\n", printf("[% 10d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10d]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.d]", 0));
	printf(" => [%d]\n", printf("[%0.d]", 0));
	printf(" => [%d]\n", printf("[%-.d]", 0));
	printf(" => [%d]\n", printf("[%+.d]", 0));
	printf(" => [%d]\n", printf("[% .d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .0d]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.*d]", 0, 0));
	printf(" => [%d]\n", printf("[%0.*d]", 0, 0));
	printf(" => [%d]\n", printf("[%-.*d]", 0, 0));
	printf(" => [%d]\n", printf("[%+.*d]", 0, 0));
	printf(" => [%d]\n", printf("[% .*d]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ .*d]", 0, 0));
	printf("\n");

	printf("\n----- check flags, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#.1d]", 0));
	printf(" => [%d]\n", printf("[%0.1d]", 0));
	printf(" => [%d]\n", printf("[%-.1d]", 0));
	printf(" => [%d]\n", printf("[%+.1d]", 0));
	printf(" => [%d]\n", printf("[% .1d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .1d]", 0));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5d]", 0));
	printf(" => [%d]\n", printf("[%0.5d]", 0));
	printf(" => [%d]\n", printf("[%-.5d]", 0));
	printf(" => [%d]\n", printf("[%+.5d]", 0));
	printf(" => [%d]\n", printf("[% .5d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .5d]", 0));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10d]", 0));
	printf(" => [%d]\n", printf("[%0.10d]", 0));
	printf(" => [%d]\n", printf("[%-.10d]", 0));
	printf(" => [%d]\n", printf("[%+.10d]", 0));
	printf(" => [%d]\n", printf("[% .10d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .10d]", 0));
	printf("\n");


	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.d]", 0));
	printf(" => [%d]\n", printf("[%010.d]", 0));
	printf(" => [%d]\n", printf("[%-10.d]", 0));
	printf(" => [%d]\n", printf("[%+10.d]", 0));
	printf(" => [%d]\n", printf("[% 10.d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.d]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.*d]", 0, 0));
	printf(" => [%d]\n", printf("[%010.*d]", 0, 0));
	printf(" => [%d]\n", printf("[%-10.*d]", 0, 0));
	printf(" => [%d]\n", printf("[%+10.*d]", 0, 0));
	printf(" => [%d]\n", printf("[% 10.*d]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.*d]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#10.1d]", 0));
	printf(" => [%d]\n", printf("[%010.1d]", 0));
	printf(" => [%d]\n", printf("[%-10.1d]", 0));
	printf(" => [%d]\n", printf("[%+10.1d]", 0));
	printf(" => [%d]\n", printf("[% 10.1d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.1d]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#10.5d]", 0));
	printf(" => [%d]\n", printf("[%010.5d]", 0));
	printf(" => [%d]\n", printf("[%-10.5d]", 0));
	printf(" => [%d]\n", printf("[%+10.5d]", 0));
	printf(" => [%d]\n", printf("[% 10.5d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.5d]", 0));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#*.10d]", 0, 0));
	printf(" => [%d]\n", printf("[%0*.10d]", 0, 0));
	printf(" => [%d]\n", printf("[%-*.10d]", 0, 0));
	printf(" => [%d]\n", printf("[%+*.10d]", 0, 0));
	printf(" => [%d]\n", printf("[% *.10d]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ *.10d]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 1, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#1.10d]", 0));
	printf(" => [%d]\n", printf("[%01.10d]", 0));
	printf(" => [%d]\n", printf("[%-1.10d]", 0));
	printf(" => [%d]\n", printf("[%+1.10d]", 0));
	printf(" => [%d]\n", printf("[% 1.10d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 1.10d]", 0));
	printf("\n");

	printf("\n----- check flags, width 5, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#5.10d]", 0));
	printf(" => [%d]\n", printf("[%05.10d]", 0));
	printf(" => [%d]\n", printf("[%-5.10d]", 0));
	printf(" => [%d]\n", printf("[%+5.10d]", 0));
	printf(" => [%d]\n", printf("[% 5.10d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 5.10d]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10d]", 0));
	printf(" => [%d]\n", printf("[%010.10d]", 0));
	printf(" => [%d]\n", printf("[%-10.10d]", 0));
	printf(" => [%d]\n", printf("[%+10.10d]", 0));
	printf(" => [%d]\n", printf("[% 10.10d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.10d]", 0));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10d]", 0));
	printf(" => [%d]\n", printf("[%020.10d]", 0));
	printf(" => [%d]\n", printf("[%-20.10d]", 0));
	printf(" => [%d]\n", printf("[%+20.10d]", 0));
	printf(" => [%d]\n", printf("[% 20.10d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 20.10d]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20d]", 0));
	printf(" => [%d]\n", printf("[%010.20d]", 0));
	printf(" => [%d]\n", printf("[%-10.20d]", 0));
	printf(" => [%d]\n", printf("[%+10.20d]", 0));
	printf(" => [%d]\n", printf("[% 10.20d]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.20d]", 0));
	printf("\n");

	printf("\n----- Number is -12345 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#d]     = [%#d]", -12345));
	printf(" => [%d]\n", printf("[%%0d]     = [%0d]", -12345));
	printf(" => [%d]\n", printf("[%%-d]     = [%-d]", -12345));
	printf(" => [%d]\n", printf("[%%+d]     = [%+d]", -12345));
	printf(" => [%d]\n", printf("[%% d]     = [% d]", -12345));
	printf(" => [%d]\n", printf("[%%#0-+ d] = [%#0-+ d]", -12345));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%0*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%-*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%+*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[% *d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%#0-+ *d]\n", 0, -12345));
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf(" => [%d]\n", printf("[%#1d]", -12345));
	printf(" => [%d]\n", printf("[%01d]", -12345));
	printf(" => [%d]\n", printf("[%-1d]", -12345));
	printf(" => [%d]\n", printf("[%+1d]", -12345));
	printf(" => [%d]\n", printf("[% 1d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 1d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5d]", -12345));
	printf(" => [%d]\n", printf("[%05d]", -12345));
	printf(" => [%d]\n", printf("[%-5d]", -12345));
	printf(" => [%d]\n", printf("[%+5d]", -12345));
	printf(" => [%d]\n", printf("[% 5d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 5d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 6 ------\n");
	printf(" => [%d]\n", printf("[%#6d]", -12345));
	printf(" => [%d]\n", printf("[%06d]", -12345));
	printf(" => [%d]\n", printf("[%-6d]", -12345));
	printf(" => [%d]\n", printf("[%+6d]", -12345));
	printf(" => [%d]\n", printf("[% 6d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 6d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 7 ------\n");
	printf(" => [%d]\n", printf("[%#7d]", -12345));
	printf(" => [%d]\n", printf("[%07d]", -12345));
	printf(" => [%d]\n", printf("[%-7d]", -12345));
	printf(" => [%d]\n", printf("[%+7d]", -12345));
	printf(" => [%d]\n", printf("[% 7d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 7d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10d]", -12345));
	printf(" => [%d]\n", printf("[%010d]", -12345));
	printf(" => [%d]\n", printf("[%-10d]", -12345));
	printf(" => [%d]\n", printf("[%+10d]", -12345));
	printf(" => [%d]\n", printf("[% 10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10d]", -12345));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.d]", -12345));
	printf(" => [%d]\n", printf("[%0.d]", -12345));
	printf(" => [%d]\n", printf("[%-.d]", -12345));
	printf(" => [%d]\n", printf("[%+.d]", -12345));
	printf(" => [%d]\n", printf("[% .d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ .0d]", -12345));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%0.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%-.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%+.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[% .*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%#0-+ .*d]\n", 0, -12345));
	printf("\n");

	printf("\n----- check flags, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#.1d]", -12345));
	printf(" => [%d]\n", printf("[%0.1d]", -12345));
	printf(" => [%d]\n", printf("[%-.1d]", -12345));
	printf(" => [%d]\n", printf("[%+.1d]", -12345));
	printf(" => [%d]\n", printf("[% .1d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ .1d]", -12345));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5d]", -12345));
	printf(" => [%d]\n", printf("[%0.5d]", -12345));
	printf(" => [%d]\n", printf("[%-.5d]", -12345));
	printf(" => [%d]\n", printf("[%+.5d]", -12345));
	printf(" => [%d]\n", printf("[% .5d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ .5d]", -12345));
	printf("\n");

	printf("\n----- check flags, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#.6d]", -12345));
	printf(" => [%d]\n", printf("[%0.6d]", -12345));
	printf(" => [%d]\n", printf("[%-.6d]", -12345));
	printf(" => [%d]\n", printf("[%+.6d]", -12345));
	printf(" => [%d]\n", printf("[% .6d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ .6d]", -12345));
	printf("\n");

	printf("\n----- check flags, precision 7 ------\n");
	printf(" => [%d]\n", printf("[%#.7d]", -12345));
	printf(" => [%d]\n", printf("[%0.7d]", -12345));
	printf(" => [%d]\n", printf("[%-.7d]", -12345));
	printf(" => [%d]\n", printf("[%+.7d]", -12345));
	printf(" => [%d]\n", printf("[% .7d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ .7d]", -12345));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10d]", -12345));
	printf(" => [%d]\n", printf("[%0.10d]", -12345));
	printf(" => [%d]\n", printf("[%-.10d]", -12345));
	printf(" => [%d]\n", printf("[%+.10d]", -12345));
	printf(" => [%d]\n", printf("[% .10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ .10d]", -12345));
	printf("\n");


	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.d]", -12345));
	printf(" => [%d]\n", printf("[%010.d]", -12345));
	printf(" => [%d]\n", printf("[%-10.d]", -12345));
	printf(" => [%d]\n", printf("[%+10.d]", -12345));
	printf(" => [%d]\n", printf("[% 10.d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%010.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%-10.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%+10.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[% 10.*d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.*d]\n", 0, -12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#10.1d]", -12345));
	printf(" => [%d]\n", printf("[%010.1d]", -12345));
	printf(" => [%d]\n", printf("[%-10.1d]", -12345));
	printf(" => [%d]\n", printf("[%+10.1d]", -12345));
	printf(" => [%d]\n", printf("[% 10.1d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.1d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#10.5d]", -12345));
	printf(" => [%d]\n", printf("[%010.5d]", -12345));
	printf(" => [%d]\n", printf("[%-10.5d]", -12345));
	printf(" => [%d]\n", printf("[%+10.5d]", -12345));
	printf(" => [%d]\n", printf("[% 10.5d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.5d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#10.6d]", -12345));
	printf(" => [%d]\n", printf("[%010.6d]", -12345));
	printf(" => [%d]\n", printf("[%-10.6d]", -12345));
	printf(" => [%d]\n", printf("[%+10.6d]", -12345));
	printf(" => [%d]\n", printf("[% 10.6d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.6d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 7 ------\n");
	printf(" => [%d]\n", printf("[%#10.7d]", -12345));
	printf(" => [%d]\n", printf("[%010.7d]", -12345));
	printf(" => [%d]\n", printf("[%-10.7d]", -12345));
	printf(" => [%d]\n", printf("[%+10.7d]", -12345));
	printf(" => [%d]\n", printf("[% 10.7d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.7d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#*.10d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%0*.10d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%-*.10d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%+*.10d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[% *.10d]\n", 0, -12345));
	printf(" => [%d]\n", printf("[%#0-+ *.10d]\n", 0, -12345));
	printf("\n");

	printf("\n----- check flags, width 1, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#1.10d]", -12345));
	printf(" => [%d]\n", printf("[%01.10d]", -12345));
	printf(" => [%d]\n", printf("[%-1.10d]", -12345));
	printf(" => [%d]\n", printf("[%+1.10d]", -12345));
	printf(" => [%d]\n", printf("[% 1.10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 1.10d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 5, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#5.10d]", -12345));
	printf(" => [%d]\n", printf("[%05.10d]", -12345));
	printf(" => [%d]\n", printf("[%-5.10d]", -12345));
	printf(" => [%d]\n", printf("[%+5.10d]", -12345));
	printf(" => [%d]\n", printf("[% 5.10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 5.10d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 6, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#6.10d]", -12345));
	printf(" => [%d]\n", printf("[%06.10d]", -12345));
	printf(" => [%d]\n", printf("[%-6.10d]", -12345));
	printf(" => [%d]\n", printf("[%+6.10d]", -12345));
	printf(" => [%d]\n", printf("[% 6.10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 6.10d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 7, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#7.10d]", -12345));
	printf(" => [%d]\n", printf("[%07.10d]", -12345));
	printf(" => [%d]\n", printf("[%-7.10d]", -12345));
	printf(" => [%d]\n", printf("[%+7.10d]", -12345));
	printf(" => [%d]\n", printf("[% 7.10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 7.10d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10d]", -12345));
	printf(" => [%d]\n", printf("[%010.10d]", -12345));
	printf(" => [%d]\n", printf("[%-10.10d]", -12345));
	printf(" => [%d]\n", printf("[%+10.10d]", -12345));
	printf(" => [%d]\n", printf("[% 10.10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.10d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10d]", -12345));
	printf(" => [%d]\n", printf("[%020.10d]", -12345));
	printf(" => [%d]\n", printf("[%-20.10d]", -12345));
	printf(" => [%d]\n", printf("[%+20.10d]", -12345));
	printf(" => [%d]\n", printf("[% 20.10d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 20.10d]", -12345));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20d]", -12345));
	printf(" => [%d]\n", printf("[%010.20d]", -12345));
	printf(" => [%d]\n", printf("[%-10.20d]", -12345));
	printf(" => [%d]\n", printf("[%+10.20d]", -12345));
	printf(" => [%d]\n", printf("[% 10.20d]", -12345));
	printf(" => [%d]\n", printf("[%#0-+ 10.20d]", -12345));
	printf("\n");

	fflush(stdout);
	return ;
}
