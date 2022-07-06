#include "test_c.h"

void	my_printf(void *point)
{
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#c]     = [%#c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%%0c]     = [%0c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%%-c]     = [%-c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%%+c]     = [%+c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%% c]     = [% c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ c] = [%#0-+ c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% *c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *c]", 0, 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%05c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%06c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%010c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% .c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0.*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-.*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+.*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% .*c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .*c]", 0, 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% .5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% .6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .6c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% .10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0*.c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-*.c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+*.c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% *.c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.c]", 0, 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%06.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-6.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+6.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 6.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.6c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%010.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-10.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+10.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 10.c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%010.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-10.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+10.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 10.5c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.5c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%010.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-10.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+10.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 10.6c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.6c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%010.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.10c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%0*.10c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-*.10c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+*.10c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% *.10c]", 0, 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.10c]", 0, 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%05.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-5.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+5.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 5.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.10c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%06.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-6.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+6.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 6.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.10c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%010.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%010.20c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%020.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10c]", 'a'));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10c]", 'a'));
	ft_printf("\n");

	ft_printf("\n----- String is 0 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#c]     = [%#c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%0c]     = [%0c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%-c]     = [%-c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%+c]     = [%+c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%% c]     = [% c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ c] = [%#0-+ c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% *c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *c]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%05c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%06c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% .*c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .*c]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .6c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0*.c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-*.c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+*.c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% *.c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.c]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%06.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-6.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+6.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 6.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.6c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.5c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.5c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.6c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.6c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.10c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0*.10c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-*.10c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+*.10c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% *.10c]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.10c]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%05.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-5.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+5.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 5.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.10c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%06.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-6.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+6.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 6.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.10c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.20c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20c]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%020.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10c]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10c]", 0));
	ft_printf("\n");

	fflush(stdout);
	return ;
}
