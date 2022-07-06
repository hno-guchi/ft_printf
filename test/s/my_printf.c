#include "test_s.h"

void	my_printf(void *point)
{
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#s]     = [%#s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%%0s]     = [%0s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%%-s]     = [%-s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%%+s]     = [%+s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%% s]     = [% s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ s] = [%#0-+ s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[% *s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *s]", 0, "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%05s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%06s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%010s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% .s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0.*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-.*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+.*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[% .*s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .*s]", 0, "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% .5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% .6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .6s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% .10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0*.s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-*.s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+*.s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[% *.s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.s]", 0, "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%06.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-6.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+6.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 6.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.6s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%010.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-10.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+10.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 10.s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%010.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-10.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+10.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 10.5s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.5s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%010.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-10.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+10.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 10.6s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.6s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%010.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.10s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%0*.10s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-*.10s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+*.10s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[% *.10s]", 0, "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.10s]", 0, "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%05.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-5.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+5.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 5.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.10s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%06.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-6.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+6.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 6.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.10s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%010.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%010.20s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%020.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10s]", "string"));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10s]", "string"));
	ft_printf("\n");

	ft_printf("\n----- String is NULL ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#s]     = [%#s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%0s]     = [%0s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%-s]     = [%-s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%+s]     = [%+s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%% s]     = [% s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ s] = [%#0-+ s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[% *s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *s]", 0, NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%05s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%06s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .*s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .*s]", 0, NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .6s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0*.s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-*.s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+*.s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[% *.s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.s]", 0, NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%06.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-6.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+6.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 6.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.6s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.5s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.5s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 6 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.6s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.6s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*.10s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0*.10s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-*.10s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+*.10s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[% *.10s]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *.10s]", 0, NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%05.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-5.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+5.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 5.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.10s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 6, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#6.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%06.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-6.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+6.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 6.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 6.10s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.20s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20s]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%020.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10s]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10s]", NULL));
	ft_printf("\n");

	fflush(stdout);
	return ;
}
/*
printf("----- Precision case -----------\n");
	printf("\n[01]------- (%%.s); s = NULL ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.s] |", NULL));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.s] |", NULL));

	printf("\n[02]------- (%%.0s); s = NULL ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.0s] |", NULL));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.0s] |", NULL));

	printf("\n[03]------- (%%.5s); s = NULL ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.5s] |", NULL));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.5s] |", NULL));

	printf("\n[04]------- (%%.6s); s = NULL ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.6s] |", NULL));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.6s] |", NULL));
	
	printf("\n[05]------- (%%.7s); s = NULL ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.7s] |", NULL));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.7s] |", NULL));

	printf("\n[06]------- (%%.s); s = \"1\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.s] |", "1"));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.s] |", "1"));

	printf("\n[07]------- (%%.0s); s = \"1\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.0s] |", "1"));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.0s] |", "1"));

	printf("\n[08]------- (%%.1s); s = \"1\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.1s] |", "1"));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.1s] |", "1"));

	printf("\n[09]------- (%%.2s); s = \"1\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.2s] |", "1"));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.2s] |", "1"));

	printf("\n[10]------- (%%.s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%.s] |", "1234"));

	printf("\n[11]------- (%%.0s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.0s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%.0s] |", "1234"));

	printf("\n[12]------- (%%.3s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.3s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%.3s] |", "1234"));

	printf("\n[13]------- (%%.4s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.4s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%.4s] |", "1234"));

	printf("\n[14]------- (%%.5s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.5s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%.5s] |", "1234"));

	printf("\n[06]------- (%%10s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%10s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%10s] |", "1234"));

	printf("\n[07]------- (%%010s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%010s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%010s] |", "1234"));


	printf("\n[08]------- (%%.0s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%.0s] |", "1234"));
 	printf("=> [%d]\n", ft_printf("ft_printf(); [%.0s] |", "1234"));

	printf("\n[09]------- (%%1.0s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%1.0s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%1.0s] |", "1234"));
	
	printf("\n[10]------- (%%2.0s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%2.0s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%2.0s] |", "1234"));
	
	printf("\n[11]------- (%%3.0s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%3.0s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%3.0s] |", "1234"));

	printf("\n[12]------- (%%4.0s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%4.0s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%4.0s] |", "1234"));

	printf("\n[13]------- (%%10.0s); s = \"1234\" ----------\n");
	printf("=> [%d]\n", printf("   printf(); [%10.0s] |", "1234"));
	printf("=> [%d]\n", ft_printf("ft_printf(); [%10.0s] |", "1234"));
*/
