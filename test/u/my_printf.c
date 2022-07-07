#include "test_u.h"

void	my_printf(void)
{
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#u]     = [%#u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%0u]     = [%0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%-u]     = [%-u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%+u]     = [%+u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%% u]     = [% u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ u] = [%#0-+ u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*u]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0*u]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-*u]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+*u]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% *u]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *u]", 0, 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%05u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%010u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .15u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.0u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.0u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.5u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.5u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.10u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.10u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%00.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-0.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+0.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 0.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.15u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%05.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-5.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+5.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 5.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.15u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%010.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-10.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+10.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 10.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.15u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.15u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%020.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-20.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+20.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 20.15u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.15u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.20u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.20u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.20u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.20u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.20u]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.20u]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- Number is 0 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#u]     = [%#u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%0u]     = [%0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%-u]     = [%-u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%+u]     = [%+u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%% u]     = [% u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ u] = [%#0-+ u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*u]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0*u]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-*u]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+*u]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% *u]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *u]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%01u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .1u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.0u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.0u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.1u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.1u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%00.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-0.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+0.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 0.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.10u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%01.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-1.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+1.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 1.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1.10u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%020.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10u]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.20u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20u]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20u]", 0));
	ft_printf("\n");

	ft_printf("\n----- Number is -1 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#u]     = [%#u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%0u]     = [%0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%-u]     = [%-u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%+u]     = [%+u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%% u]     = [% u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ u] = [%#0-+ u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*u]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%0*u]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%-*u]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%+*u]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[% *u]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *u]", 0, -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%05u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%010u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .15u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.0u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.0u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.5u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.5u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.10u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.10u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%00.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-0.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+0.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 0.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.15u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%05.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-5.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+5.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 5.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.15u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%010.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-10.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+10.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 10.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.15u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.15u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%020.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-20.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+20.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 20.15u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.15u]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.20u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.20u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.20u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.20u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.20u]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.20u]", -1));
	ft_printf("\n");

	fflush(stdout);
	return ;
}
