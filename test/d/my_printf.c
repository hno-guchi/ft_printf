#include "test_d.h"

void	my_printf(void)
{
	ft_printf("\n----- Number is 12345 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#d]     = [%#d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%%0d]     = [%0d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%%-d]     = [%-d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%%+d]     = [%+d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%% d]     = [% d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ d] = [%#0-+ d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%0*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[% *d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *d]", 0, 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%01d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%05d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%010d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% .d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[% .*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .*d]", 0, 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% .1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .1d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% .5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% .10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10d]", 12345));
	ft_printf("\n");


	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.*d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.*d]", 0, 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.1d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.1d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.5d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.5d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.10d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%0*.10d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-*.10d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+*.10d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[% *.10d]", 0, 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.10d]", 0, 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%01.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-1.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+1.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 1.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1.10d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%05.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-5.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+5.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 5.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.10d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%020.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.20d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20d]", 12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20d]", 12345));
	ft_printf("\n");

	ft_printf("\n----- Number is 0 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#d]     = [%#d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%0d]     = [%0d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%-d]     = [%-d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%+d]     = [%+d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%% d]     = [% d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ d] = [%#0-+ d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% *d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *d]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%01d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%05d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% .*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .*d]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .1d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10d]", 0));
	ft_printf("\n");


	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.*d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.*d]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.1d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.1d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.5d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.5d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.10d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0*.10d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-*.10d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+*.10d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% *.10d]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.10d]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%01.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-1.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+1.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 1.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1.10d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%05.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-5.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+5.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 5.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.10d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%020.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10d]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.20d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20d]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20d]", 0));
	ft_printf("\n");

	ft_printf("\n----- Number is -12345 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#d]     = [%#d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%%0d]     = [%0d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%%-d]     = [%-d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%%+d]     = [%+d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%% d]     = [% d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ d] = [%#0-+ d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[% *d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *d]\n", 0, -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%01d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%05d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%06d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 7 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%07d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 7d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% .d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[% .*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .*d]\n", 0, -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% .1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .1d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% .5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% .6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .6d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 7 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% .7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .7d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% .10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10d]", -12345));
	ft_printf("\n");


	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.*d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.*d]\n", 0, -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.1d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.1d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.5d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.5d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.6d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.6d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 7 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.7d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.7d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.10d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%0*.10d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-*.10d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+*.10d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[% *.10d]\n", 0, -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.10d]\n", 0, -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%01.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-1.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+1.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 1.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1.10d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%05.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-5.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+5.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 5.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.10d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%06.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-6.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+6.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 6.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.10d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 7, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#7.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%07.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-7.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+7.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 7.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 7.10d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%020.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10d]", -12345));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%010.20d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20d]", -12345));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20d]", -12345));
	ft_printf("\n");

	fflush(stdout);
	return ;
}
