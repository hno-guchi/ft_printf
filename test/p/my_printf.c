#include "test_p.h"

void	my_printf(void *point)
{
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#p]     = [%#p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%%0p]     = [%0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%%-p]     = [%-p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%%+p]     = [%+p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%% p]     = [% p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ p] = [%#0-+ p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*p]", 0, point));
	ft_printf(" => [%d]\n", ft_printf("[%0*p]", 0, point));
	ft_printf(" => [%d]\n", ft_printf("[%-*p]", 0, point));
	ft_printf(" => [%d]\n", ft_printf("[%+*p]", 0, point));
	ft_printf(" => [%d]\n", ft_printf("[% *p]", 0, point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *p]", 0, point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%05p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%010p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%015p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%0.p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-.p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+.p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% .p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%0.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% .0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%0.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% .5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%0.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% .10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%0.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% .15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .15p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%015.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-15.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+15.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 15.0p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.0p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%015.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-15.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+15.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 15.5p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.5p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%015.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-15.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+15.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 15.10p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.10p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%00.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-0.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+0.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 0.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.15p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%05.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-5.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+5.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 5.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.15p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%010.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-10.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+10.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 10.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.15p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%015.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-15.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+15.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 15.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.15p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%020.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-20.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+20.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 20.15p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.15p]", point));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.20p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%015.20p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%-15.20p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%+15.20p]", point));
	ft_printf(" => [%d]\n", ft_printf("[% 15.20p]", point));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.20p]", point));
	ft_printf("\n");

	ft_printf("\n----- Number is 0 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#p]     = [%#p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%0p]     = [%0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%-p]     = [%-p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%+p]     = [%+p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%% p]     = [% p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ p] = [%#0-+ p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*p]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0*p]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-*p]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+*p]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[% *p]", 0, NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *p]", 0, NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%01p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .1p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%0.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% .10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.0p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.0p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.1p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.1p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%00.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-0.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+0.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 0.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.10p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%01.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-1.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+1.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 1.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1.10p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%020.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10p]", NULL));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%010.20p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20p]", NULL));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20p]", NULL));
	ft_printf("\n");

	/*
	ft_printf("\n----- Number is -1 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#p]     = [%#p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%0p]     = [%0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%-p]     = [%-p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%+p]     = [%+p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%% p]     = [% p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ p] = [%#0-+ p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*p]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%0*p]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%-*p]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%+*p]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[% *p]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *p]", 0, -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%05p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%010p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .15p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.0p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.0p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.5p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.5p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.10p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.10p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%00.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-0.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+0.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 0.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.15p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%05.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-5.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+5.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 5.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.15p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%010.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-10.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+10.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 10.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.15p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.15p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%020.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-20.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+20.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 20.15p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.15p]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.20p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.20p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.20p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.20p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.20p]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.20p]", -1));
	ft_printf("\n");
	*/

	fflush(stdout);
	return ;
}
