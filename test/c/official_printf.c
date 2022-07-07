#include "test_c.h"

void	official_printf(void)
{
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#c]     = [%#c]", 'a'));
	printf(" => [%d]\n", printf("[%%0c]     = [%0c]", 'a'));
	printf(" => [%d]\n", printf("[%%-c]     = [%-c]", 'a'));
	printf(" => [%d]\n", printf("[%%+c]     = [%+c]", 'a'));
	printf(" => [%d]\n", printf("[%% c]     = [% c]", 'a'));
	printf(" => [%d]\n", printf("[%%#0-+ c] = [%#0-+ c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%0*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%-*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%+*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[% *c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%#0-+ *c]", 0, 'a'));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5c]", 'a'));
	printf(" => [%d]\n", printf("[%05c]", 'a'));
	printf(" => [%d]\n", printf("[%-5c]", 'a'));
	printf(" => [%d]\n", printf("[%+5c]", 'a'));
	printf(" => [%d]\n", printf("[% 5c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 5c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 6 ------\n");
	printf(" => [%d]\n", printf("[%#6c]", 'a'));
	printf(" => [%d]\n", printf("[%06c]", 'a'));
	printf(" => [%d]\n", printf("[%-6c]", 'a'));
	printf(" => [%d]\n", printf("[%+6c]", 'a'));
	printf(" => [%d]\n", printf("[% 6c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 6c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10c]", 'a'));
	printf(" => [%d]\n", printf("[%010c]", 'a'));
	printf(" => [%d]\n", printf("[%-10c]", 'a'));
	printf(" => [%d]\n", printf("[%+10c]", 'a'));
	printf(" => [%d]\n", printf("[% 10c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 10c]", 'a'));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.c]", 'a'));
	printf(" => [%d]\n", printf("[%0.c]", 'a'));
	printf(" => [%d]\n", printf("[%-.c]", 'a'));
	printf(" => [%d]\n", printf("[%+.c]", 'a'));
	printf(" => [%d]\n", printf("[% .c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ .c]", 'a'));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%0.*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%-.*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%+.*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[% .*c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%#0-+ .*c]", 0, 'a'));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5c]", 'a'));
	printf(" => [%d]\n", printf("[%0.5c]", 'a'));
	printf(" => [%d]\n", printf("[%-.5c]", 'a'));
	printf(" => [%d]\n", printf("[%+.5c]", 'a'));
	printf(" => [%d]\n", printf("[% .5c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ .5c]", 'a'));
	printf("\n");

	printf("\n----- check flags, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#.6c]", 'a'));
	printf(" => [%d]\n", printf("[%0.6c]", 'a'));
	printf(" => [%d]\n", printf("[%-.6c]", 'a'));
	printf(" => [%d]\n", printf("[%+.6c]", 'a'));
	printf(" => [%d]\n", printf("[% .6c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ .6c]", 'a'));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10c]", 'a'));
	printf(" => [%d]\n", printf("[%0.10c]", 'a'));
	printf(" => [%d]\n", printf("[%-.10c]", 'a'));
	printf(" => [%d]\n", printf("[%+.10c]", 'a'));
	printf(" => [%d]\n", printf("[% .10c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ .10c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 0, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#*.c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%0*.c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%-*.c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%+*.c]", 0, 'a'));
	printf(" => [%d]\n", printf("[% *.c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%#0-+ *.c]", 0, 'a'));
	printf("\n");

	printf("\n----- check flags, width 6, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#6.6c]", 'a'));
	printf(" => [%d]\n", printf("[%06.6c]", 'a'));
	printf(" => [%d]\n", printf("[%-6.6c]", 'a'));
	printf(" => [%d]\n", printf("[%+6.6c]", 'a'));
	printf(" => [%d]\n", printf("[% 6.6c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 6.6c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.c]", 'a'));
	printf(" => [%d]\n", printf("[%010.c]", 'a'));
	printf(" => [%d]\n", printf("[%-10.c]", 'a'));
	printf(" => [%d]\n", printf("[%+10.c]", 'a'));
	printf(" => [%d]\n", printf("[% 10.c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 10.c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 10, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#10.5c]", 'a'));
	printf(" => [%d]\n", printf("[%010.5c]", 'a'));
	printf(" => [%d]\n", printf("[%-10.5c]", 'a'));
	printf(" => [%d]\n", printf("[%+10.5c]", 'a'));
	printf(" => [%d]\n", printf("[% 10.5c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 10.5c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 10, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#10.6c]", 'a'));
	printf(" => [%d]\n", printf("[%010.6c]", 'a'));
	printf(" => [%d]\n", printf("[%-10.6c]", 'a'));
	printf(" => [%d]\n", printf("[%+10.6c]", 'a'));
	printf(" => [%d]\n", printf("[% 10.6c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 10.6c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10c]", 'a'));
	printf(" => [%d]\n", printf("[%010.10c]", 'a'));
	printf(" => [%d]\n", printf("[%-10.10c]", 'a'));
	printf(" => [%d]\n", printf("[%+10.10c]", 'a'));
	printf(" => [%d]\n", printf("[% 10.10c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 10.10c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#*.10c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%0*.10c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%-*.10c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%+*.10c]", 0, 'a'));
	printf(" => [%d]\n", printf("[% *.10c]", 0, 'a'));
	printf(" => [%d]\n", printf("[%#0-+ *.10c]", 0, 'a'));
	printf("\n");

	printf("\n----- check flags, width 5, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#5.10c]", 'a'));
	printf(" => [%d]\n", printf("[%05.10c]", 'a'));
	printf(" => [%d]\n", printf("[%-5.10c]", 'a'));
	printf(" => [%d]\n", printf("[%+5.10c]", 'a'));
	printf(" => [%d]\n", printf("[% 5.10c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 5.10c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 6, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#6.10c]", 'a'));
	printf(" => [%d]\n", printf("[%06.10c]", 'a'));
	printf(" => [%d]\n", printf("[%-6.10c]", 'a'));
	printf(" => [%d]\n", printf("[%+6.10c]", 'a'));
	printf(" => [%d]\n", printf("[% 6.10c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 6.10c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10c]", 'a'));
	printf(" => [%d]\n", printf("[%010.10c]", 'a'));
	printf(" => [%d]\n", printf("[%-10.10c]", 'a'));
	printf(" => [%d]\n", printf("[%+10.10c]", 'a'));
	printf(" => [%d]\n", printf("[% 10.10c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 10.10c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20c]", 'a'));
	printf(" => [%d]\n", printf("[%010.20c]", 'a'));
	printf(" => [%d]\n", printf("[%-10.20c]", 'a'));
	printf(" => [%d]\n", printf("[%+10.20c]", 'a'));
	printf(" => [%d]\n", printf("[% 10.20c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 10.20c]", 'a'));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10c]", 'a'));
	printf(" => [%d]\n", printf("[%020.10c]", 'a'));
	printf(" => [%d]\n", printf("[%-20.10c]", 'a'));
	printf(" => [%d]\n", printf("[%+20.10c]", 'a'));
	printf(" => [%d]\n", printf("[% 20.10c]", 'a'));
	printf(" => [%d]\n", printf("[%#0-+ 20.10c]", 'a'));
	printf("\n");

	printf("\n----- String is 0 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#c]     = [%#c]", 0));
	printf(" => [%d]\n", printf("[%%0c]     = [%0c]", 0));
	printf(" => [%d]\n", printf("[%%-c]     = [%-c]", 0));
	printf(" => [%d]\n", printf("[%%+c]     = [%+c]", 0));
	printf(" => [%d]\n", printf("[%% c]     = [% c]", 0));
	printf(" => [%d]\n", printf("[%%#0-+ c] = [%#0-+ c]", 0));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*c]", 0, 0));
	printf(" => [%d]\n", printf("[%0*c]", 0, 0));
	printf(" => [%d]\n", printf("[%-*c]", 0, 0));
	printf(" => [%d]\n", printf("[%+*c]", 0, 0));
	printf(" => [%d]\n", printf("[% *c]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ *c]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5c]", 0));
	printf(" => [%d]\n", printf("[%05c]", 0));
	printf(" => [%d]\n", printf("[%-5c]", 0));
	printf(" => [%d]\n", printf("[%+5c]", 0));
	printf(" => [%d]\n", printf("[% 5c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 5c]", 0));
	printf("\n");

	printf("\n----- check flags, width 6 ------\n");
	printf(" => [%d]\n", printf("[%#6c]", 0));
	printf(" => [%d]\n", printf("[%06c]", 0));
	printf(" => [%d]\n", printf("[%-6c]", 0));
	printf(" => [%d]\n", printf("[%+6c]", 0));
	printf(" => [%d]\n", printf("[% 6c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 6c]", 0));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10c]", 0));
	printf(" => [%d]\n", printf("[%010c]", 0));
	printf(" => [%d]\n", printf("[%-10c]", 0));
	printf(" => [%d]\n", printf("[%+10c]", 0));
	printf(" => [%d]\n", printf("[% 10c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10c]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.c]", 0));
	printf(" => [%d]\n", printf("[%0.c]", 0));
	printf(" => [%d]\n", printf("[%-.c]", 0));
	printf(" => [%d]\n", printf("[%+.c]", 0));
	printf(" => [%d]\n", printf("[% .c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .c]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.*c]", 0, 0));
	printf(" => [%d]\n", printf("[%0.*c]", 0, 0));
	printf(" => [%d]\n", printf("[%-.*c]", 0, 0));
	printf(" => [%d]\n", printf("[%+.*c]", 0, 0));
	printf(" => [%d]\n", printf("[% .*c]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ .*c]", 0, 0));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5c]", 0));
	printf(" => [%d]\n", printf("[%0.5c]", 0));
	printf(" => [%d]\n", printf("[%-.5c]", 0));
	printf(" => [%d]\n", printf("[%+.5c]", 0));
	printf(" => [%d]\n", printf("[% .5c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .5c]", 0));
	printf("\n");

	printf("\n----- check flags, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#.6c]", 0));
	printf(" => [%d]\n", printf("[%0.6c]", 0));
	printf(" => [%d]\n", printf("[%-.6c]", 0));
	printf(" => [%d]\n", printf("[%+.6c]", 0));
	printf(" => [%d]\n", printf("[% .6c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .6c]", 0));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10c]", 0));
	printf(" => [%d]\n", printf("[%0.10c]", 0));
	printf(" => [%d]\n", printf("[%-.10c]", 0));
	printf(" => [%d]\n", printf("[%+.10c]", 0));
	printf(" => [%d]\n", printf("[% .10c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .10c]", 0));
	printf("\n");

	printf("\n----- check flags, width 0, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#*.c]", 0, 0));
	printf(" => [%d]\n", printf("[%0*.c]", 0, 0));
	printf(" => [%d]\n", printf("[%-*.c]", 0, 0));
	printf(" => [%d]\n", printf("[%+*.c]", 0, 0));
	printf(" => [%d]\n", printf("[% *.c]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ *.c]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 6, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#6.6c]", 0));
	printf(" => [%d]\n", printf("[%06.6c]", 0));
	printf(" => [%d]\n", printf("[%-6.6c]", 0));
	printf(" => [%d]\n", printf("[%+6.6c]", 0));
	printf(" => [%d]\n", printf("[% 6.6c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 6.6c]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.c]", 0));
	printf(" => [%d]\n", printf("[%010.c]", 0));
	printf(" => [%d]\n", printf("[%-10.c]", 0));
	printf(" => [%d]\n", printf("[%+10.c]", 0));
	printf(" => [%d]\n", printf("[% 10.c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.c]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#10.5c]", 0));
	printf(" => [%d]\n", printf("[%010.5c]", 0));
	printf(" => [%d]\n", printf("[%-10.5c]", 0));
	printf(" => [%d]\n", printf("[%+10.5c]", 0));
	printf(" => [%d]\n", printf("[% 10.5c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.5c]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 6 ------\n");
	printf(" => [%d]\n", printf("[%#10.6c]", 0));
	printf(" => [%d]\n", printf("[%010.6c]", 0));
	printf(" => [%d]\n", printf("[%-10.6c]", 0));
	printf(" => [%d]\n", printf("[%+10.6c]", 0));
	printf(" => [%d]\n", printf("[% 10.6c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.6c]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10c]", 0));
	printf(" => [%d]\n", printf("[%010.10c]", 0));
	printf(" => [%d]\n", printf("[%-10.10c]", 0));
	printf(" => [%d]\n", printf("[%+10.10c]", 0));
	printf(" => [%d]\n", printf("[% 10.10c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.10c]", 0));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#*.10c]", 0, 0));
	printf(" => [%d]\n", printf("[%0*.10c]", 0, 0));
	printf(" => [%d]\n", printf("[%-*.10c]", 0, 0));
	printf(" => [%d]\n", printf("[%+*.10c]", 0, 0));
	printf(" => [%d]\n", printf("[% *.10c]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ *.10c]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 5, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#5.10c]", 0));
	printf(" => [%d]\n", printf("[%05.10c]", 0));
	printf(" => [%d]\n", printf("[%-5.10c]", 0));
	printf(" => [%d]\n", printf("[%+5.10c]", 0));
	printf(" => [%d]\n", printf("[% 5.10c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 5.10c]", 0));
	printf("\n");

	printf("\n----- check flags, width 6, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#6.10c]", 0));
	printf(" => [%d]\n", printf("[%06.10c]", 0));
	printf(" => [%d]\n", printf("[%-6.10c]", 0));
	printf(" => [%d]\n", printf("[%+6.10c]", 0));
	printf(" => [%d]\n", printf("[% 6.10c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 6.10c]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10c]", 0));
	printf(" => [%d]\n", printf("[%010.10c]", 0));
	printf(" => [%d]\n", printf("[%-10.10c]", 0));
	printf(" => [%d]\n", printf("[%+10.10c]", 0));
	printf(" => [%d]\n", printf("[% 10.10c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.10c]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20c]", 0));
	printf(" => [%d]\n", printf("[%010.20c]", 0));
	printf(" => [%d]\n", printf("[%-10.20c]", 0));
	printf(" => [%d]\n", printf("[%+10.20c]", 0));
	printf(" => [%d]\n", printf("[% 10.20c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.20c]", 0));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10c]", 0));
	printf(" => [%d]\n", printf("[%020.10c]", 0));
	printf(" => [%d]\n", printf("[%-20.10c]", 0));
	printf(" => [%d]\n", printf("[%+20.10c]", 0));
	printf(" => [%d]\n", printf("[% 20.10c]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 20.10c]", 0));
	printf("\n");

	fflush(stdout);
	return ;
}
