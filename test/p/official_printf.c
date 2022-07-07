#include "test_p.h"

void	official_printf(void *point)
{
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#p]     = [%#p]", point));
	printf(" => [%d]\n", printf("[%%0p]     = [%0p]", point));
	printf(" => [%d]\n", printf("[%%-p]     = [%-p]", point));
	printf(" => [%d]\n", printf("[%%+p]     = [%+p]", point));
	printf(" => [%d]\n", printf("[%% p]     = [% p]", point));
	printf(" => [%d]\n", printf("[%%#0-+ p] = [%#0-+ p]", point));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*p]", 0, point));
	printf(" => [%d]\n", printf("[%0*p]", 0, point));
	printf(" => [%d]\n", printf("[%-*p]", 0, point));
	printf(" => [%d]\n", printf("[%+*p]", 0, point));
	printf(" => [%d]\n", printf("[% *p]", 0, point));
	printf(" => [%d]\n", printf("[%#0-+ *p]", 0, point));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5p]", point));
	printf(" => [%d]\n", printf("[%05p]", point));
	printf(" => [%d]\n", printf("[%-5p]", point));
	printf(" => [%d]\n", printf("[%+5p]", point));
	printf(" => [%d]\n", printf("[% 5p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 5p]", point));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10p]", point));
	printf(" => [%d]\n", printf("[%010p]", point));
	printf(" => [%d]\n", printf("[%-10p]", point));
	printf(" => [%d]\n", printf("[%+10p]", point));
	printf(" => [%d]\n", printf("[% 10p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 10p]", point));
	printf("\n");

	printf("\n----- check flags, width 15 ------\n");
	printf(" => [%d]\n", printf("[%#15p]", point));
	printf(" => [%d]\n", printf("[%015p]", point));
	printf(" => [%d]\n", printf("[%-15p]", point));
	printf(" => [%d]\n", printf("[%+15p]", point));
	printf(" => [%d]\n", printf("[% 15p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 15p]", point));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.p]", point));
	printf(" => [%d]\n", printf("[%0.p]", point));
	printf(" => [%d]\n", printf("[%-.p]", point));
	printf(" => [%d]\n", printf("[%+.p]", point));
	printf(" => [%d]\n", printf("[% .p]", point));
	printf(" => [%d]\n", printf("[%#0-+ .p]", point));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0p]", point));
	printf(" => [%d]\n", printf("[%0.0p]", point));
	printf(" => [%d]\n", printf("[%-.0p]", point));
	printf(" => [%d]\n", printf("[%+.0p]", point));
	printf(" => [%d]\n", printf("[% .0p]", point));
	printf(" => [%d]\n", printf("[%#0-+ .0p]", point));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5p]", point));
	printf(" => [%d]\n", printf("[%0.5p]", point));
	printf(" => [%d]\n", printf("[%-.5p]", point));
	printf(" => [%d]\n", printf("[%+.5p]", point));
	printf(" => [%d]\n", printf("[% .5p]", point));
	printf(" => [%d]\n", printf("[%#0-+ .5p]", point));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10p]", point));
	printf(" => [%d]\n", printf("[%0.10p]", point));
	printf(" => [%d]\n", printf("[%-.10p]", point));
	printf(" => [%d]\n", printf("[%+.10p]", point));
	printf(" => [%d]\n", printf("[% .10p]", point));
	printf(" => [%d]\n", printf("[%#0-+ .10p]", point));
	printf("\n");

	printf("\n----- check flags, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#.15p]", point));
	printf(" => [%d]\n", printf("[%0.15p]", point));
	printf(" => [%d]\n", printf("[%-.15p]", point));
	printf(" => [%d]\n", printf("[%+.15p]", point));
	printf(" => [%d]\n", printf("[% .15p]", point));
	printf(" => [%d]\n", printf("[%#0-+ .15p]", point));
	printf("\n");

	printf("\n----- check flags, width 15, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#15.0p]", point));
	printf(" => [%d]\n", printf("[%015.0p]", point));
	printf(" => [%d]\n", printf("[%-15.0p]", point));
	printf(" => [%d]\n", printf("[%+15.0p]", point));
	printf(" => [%d]\n", printf("[% 15.0p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 15.0p]", point));
	printf("\n");

	printf("\n----- check flags, width 15, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#15.5p]", point));
	printf(" => [%d]\n", printf("[%015.5p]", point));
	printf(" => [%d]\n", printf("[%-15.5p]", point));
	printf(" => [%d]\n", printf("[%+15.5p]", point));
	printf(" => [%d]\n", printf("[% 15.5p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 15.5p]", point));
	printf("\n");

	printf("\n----- check flags, width 15, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#15.10p]", point));
	printf(" => [%d]\n", printf("[%015.10p]", point));
	printf(" => [%d]\n", printf("[%-15.10p]", point));
	printf(" => [%d]\n", printf("[%+15.10p]", point));
	printf(" => [%d]\n", printf("[% 15.10p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 15.10p]", point));
	printf("\n");

	printf("\n----- check flags, width 0, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#0.15p]", point));
	printf(" => [%d]\n", printf("[%00.15p]", point));
	printf(" => [%d]\n", printf("[%-0.15p]", point));
	printf(" => [%d]\n", printf("[%+0.15p]", point));
	printf(" => [%d]\n", printf("[% 0.15p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 0.15p]", point));
	printf("\n");

	printf("\n----- check flags, width 5, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#5.15p]", point));
	printf(" => [%d]\n", printf("[%05.15p]", point));
	printf(" => [%d]\n", printf("[%-5.15p]", point));
	printf(" => [%d]\n", printf("[%+5.15p]", point));
	printf(" => [%d]\n", printf("[% 5.15p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 5.15p]", point));
	printf("\n");

	printf("\n----- check flags, width 10, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#10.15p]", point));
	printf(" => [%d]\n", printf("[%010.15p]", point));
	printf(" => [%d]\n", printf("[%-10.15p]", point));
	printf(" => [%d]\n", printf("[%+10.15p]", point));
	printf(" => [%d]\n", printf("[% 10.15p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 10.15p]", point));
	printf("\n");

	printf("\n----- check flags, width 15, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#15.15p]", point));
	printf(" => [%d]\n", printf("[%015.15p]", point));
	printf(" => [%d]\n", printf("[%-15.15p]", point));
	printf(" => [%d]\n", printf("[%+15.15p]", point));
	printf(" => [%d]\n", printf("[% 15.15p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 15.15p]", point));
	printf("\n");

	printf("\n----- check flags, width 20, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#20.15p]", point));
	printf(" => [%d]\n", printf("[%020.15p]", point));
	printf(" => [%d]\n", printf("[%-20.15p]", point));
	printf(" => [%d]\n", printf("[%+20.15p]", point));
	printf(" => [%d]\n", printf("[% 20.15p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 20.15p]", point));
	printf("\n");

	printf("\n----- check flags, width 15, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#15.20p]", point));
	printf(" => [%d]\n", printf("[%015.20p]", point));
	printf(" => [%d]\n", printf("[%-15.20p]", point));
	printf(" => [%d]\n", printf("[%+15.20p]", point));
	printf(" => [%d]\n", printf("[% 15.20p]", point));
	printf(" => [%d]\n", printf("[%#0-+ 15.20p]", point));
	printf("\n");

	printf("\n----- Number is 0 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#p]     = [%#p]", NULL));
	printf(" => [%d]\n", printf("[%%0p]     = [%0p]", NULL));
	printf(" => [%d]\n", printf("[%%-p]     = [%-p]", NULL));
	printf(" => [%d]\n", printf("[%%+p]     = [%+p]", NULL));
	printf(" => [%d]\n", printf("[%% p]     = [% p]", NULL));
	printf(" => [%d]\n", printf("[%%#0-+ p] = [%#0-+ p]", NULL));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*p]", 0, NULL));
	printf(" => [%d]\n", printf("[%0*p]", 0, NULL));
	printf(" => [%d]\n", printf("[%-*p]", 0, NULL));
	printf(" => [%d]\n", printf("[%+*p]", 0, NULL));
	printf(" => [%d]\n", printf("[% *p]", 0, NULL));
	printf(" => [%d]\n", printf("[%#0-+ *p]", 0, NULL));
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf(" => [%d]\n", printf("[%#1p]", NULL));
	printf(" => [%d]\n", printf("[%01p]", NULL));
	printf(" => [%d]\n", printf("[%-1p]", NULL));
	printf(" => [%d]\n", printf("[%+1p]", NULL));
	printf(" => [%d]\n", printf("[% 1p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 1p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10p]", NULL));
	printf(" => [%d]\n", printf("[%010p]", NULL));
	printf(" => [%d]\n", printf("[%-10p]", NULL));
	printf(" => [%d]\n", printf("[%+10p]", NULL));
	printf(" => [%d]\n", printf("[% 10p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 10p]", NULL));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.p]", NULL));
	printf(" => [%d]\n", printf("[%0.p]", NULL));
	printf(" => [%d]\n", printf("[%-.p]", NULL));
	printf(" => [%d]\n", printf("[%+.p]", NULL));
	printf(" => [%d]\n", printf("[% .p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ .p]", NULL));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0p]", NULL));
	printf(" => [%d]\n", printf("[%0.0p]", NULL));
	printf(" => [%d]\n", printf("[%-.0p]", NULL));
	printf(" => [%d]\n", printf("[%+.0p]", NULL));
	printf(" => [%d]\n", printf("[% .0p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ .0p]", NULL));
	printf("\n");

	printf("\n----- check flags, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#.1p]", NULL));
	printf(" => [%d]\n", printf("[%0.1p]", NULL));
	printf(" => [%d]\n", printf("[%-.1p]", NULL));
	printf(" => [%d]\n", printf("[%+.1p]", NULL));
	printf(" => [%d]\n", printf("[% .1p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ .1p]", NULL));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10p]", NULL));
	printf(" => [%d]\n", printf("[%0.10p]", NULL));
	printf(" => [%d]\n", printf("[%-.10p]", NULL));
	printf(" => [%d]\n", printf("[%+.10p]", NULL));
	printf(" => [%d]\n", printf("[% .10p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ .10p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.0p]", NULL));
	printf(" => [%d]\n", printf("[%010.0p]", NULL));
	printf(" => [%d]\n", printf("[%-10.0p]", NULL));
	printf(" => [%d]\n", printf("[%+10.0p]", NULL));
	printf(" => [%d]\n", printf("[% 10.0p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 10.0p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 10, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#10.1p]", NULL));
	printf(" => [%d]\n", printf("[%010.1p]", NULL));
	printf(" => [%d]\n", printf("[%-10.1p]", NULL));
	printf(" => [%d]\n", printf("[%+10.1p]", NULL));
	printf(" => [%d]\n", printf("[% 10.1p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 10.1p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#0.10p]", NULL));
	printf(" => [%d]\n", printf("[%00.10p]", NULL));
	printf(" => [%d]\n", printf("[%-0.10p]", NULL));
	printf(" => [%d]\n", printf("[%+0.10p]", NULL));
	printf(" => [%d]\n", printf("[% 0.10p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 0.10p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 1, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#1.10p]", NULL));
	printf(" => [%d]\n", printf("[%01.10p]", NULL));
	printf(" => [%d]\n", printf("[%-1.10p]", NULL));
	printf(" => [%d]\n", printf("[%+1.10p]", NULL));
	printf(" => [%d]\n", printf("[% 1.10p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 1.10p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10p]", NULL));
	printf(" => [%d]\n", printf("[%010.10p]", NULL));
	printf(" => [%d]\n", printf("[%-10.10p]", NULL));
	printf(" => [%d]\n", printf("[%+10.10p]", NULL));
	printf(" => [%d]\n", printf("[% 10.10p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 10.10p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10p]", NULL));
	printf(" => [%d]\n", printf("[%020.10p]", NULL));
	printf(" => [%d]\n", printf("[%-20.10p]", NULL));
	printf(" => [%d]\n", printf("[%+20.10p]", NULL));
	printf(" => [%d]\n", printf("[% 20.10p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 20.10p]", NULL));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20p]", NULL));
	printf(" => [%d]\n", printf("[%010.20p]", NULL));
	printf(" => [%d]\n", printf("[%-10.20p]", NULL));
	printf(" => [%d]\n", printf("[%+10.20p]", NULL));
	printf(" => [%d]\n", printf("[% 10.20p]", NULL));
	printf(" => [%d]\n", printf("[%#0-+ 10.20p]", NULL));
	printf("\n");

	/*
	printf("\n----- Number is -1 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#p]     = [%#p]", -1));
	printf(" => [%d]\n", printf("[%%0p]     = [%0p]", -1));
	printf(" => [%d]\n", printf("[%%-p]     = [%-p]", -1));
	printf(" => [%d]\n", printf("[%%+p]     = [%+p]", -1));
	printf(" => [%d]\n", printf("[%% p]     = [% p]", -1));
	printf(" => [%d]\n", printf("[%%#0-+ p] = [%#0-+ p]", -1));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*p]", 0, -1));
	printf(" => [%d]\n", printf("[%0*p]", 0, -1));
	printf(" => [%d]\n", printf("[%-*p]", 0, -1));
	printf(" => [%d]\n", printf("[%+*p]", 0, -1));
	printf(" => [%d]\n", printf("[% *p]", 0, -1));
	printf(" => [%d]\n", printf("[%#0-+ *p]", 0, -1));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5p]", -1));
	printf(" => [%d]\n", printf("[%05p]", -1));
	printf(" => [%d]\n", printf("[%-5p]", -1));
	printf(" => [%d]\n", printf("[%+5p]", -1));
	printf(" => [%d]\n", printf("[% 5p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 5p]", -1));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10p]", -1));
	printf(" => [%d]\n", printf("[%010p]", -1));
	printf(" => [%d]\n", printf("[%-10p]", -1));
	printf(" => [%d]\n", printf("[%+10p]", -1));
	printf(" => [%d]\n", printf("[% 10p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 10p]", -1));
	printf("\n");

	printf("\n----- check flags, width 15 ------\n");
	printf(" => [%d]\n", printf("[%#15p]", -1));
	printf(" => [%d]\n", printf("[%015p]", -1));
	printf(" => [%d]\n", printf("[%-15p]", -1));
	printf(" => [%d]\n", printf("[%+15p]", -1));
	printf(" => [%d]\n", printf("[% 15p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15p]", -1));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.p]", -1));
	printf(" => [%d]\n", printf("[%0.p]", -1));
	printf(" => [%d]\n", printf("[%-.p]", -1));
	printf(" => [%d]\n", printf("[%+.p]", -1));
	printf(" => [%d]\n", printf("[% .p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .p]", -1));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0p]", -1));
	printf(" => [%d]\n", printf("[%0.0p]", -1));
	printf(" => [%d]\n", printf("[%-.0p]", -1));
	printf(" => [%d]\n", printf("[%+.0p]", -1));
	printf(" => [%d]\n", printf("[% .0p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .0p]", -1));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5p]", -1));
	printf(" => [%d]\n", printf("[%0.5p]", -1));
	printf(" => [%d]\n", printf("[%-.5p]", -1));
	printf(" => [%d]\n", printf("[%+.5p]", -1));
	printf(" => [%d]\n", printf("[% .5p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .5p]", -1));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10p]", -1));
	printf(" => [%d]\n", printf("[%0.10p]", -1));
	printf(" => [%d]\n", printf("[%-.10p]", -1));
	printf(" => [%d]\n", printf("[%+.10p]", -1));
	printf(" => [%d]\n", printf("[% .10p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .10p]", -1));
	printf("\n");

	printf("\n----- check flags, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#.15p]", -1));
	printf(" => [%d]\n", printf("[%0.15p]", -1));
	printf(" => [%d]\n", printf("[%-.15p]", -1));
	printf(" => [%d]\n", printf("[%+.15p]", -1));
	printf(" => [%d]\n", printf("[% .15p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .15p]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#15.0p]", -1));
	printf(" => [%d]\n", printf("[%015.0p]", -1));
	printf(" => [%d]\n", printf("[%-15.0p]", -1));
	printf(" => [%d]\n", printf("[%+15.0p]", -1));
	printf(" => [%d]\n", printf("[% 15.0p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.0p]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#15.5p]", -1));
	printf(" => [%d]\n", printf("[%015.5p]", -1));
	printf(" => [%d]\n", printf("[%-15.5p]", -1));
	printf(" => [%d]\n", printf("[%+15.5p]", -1));
	printf(" => [%d]\n", printf("[% 15.5p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.5p]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#15.10p]", -1));
	printf(" => [%d]\n", printf("[%015.10p]", -1));
	printf(" => [%d]\n", printf("[%-15.10p]", -1));
	printf(" => [%d]\n", printf("[%+15.10p]", -1));
	printf(" => [%d]\n", printf("[% 15.10p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.10p]", -1));
	printf("\n");

	printf("\n----- check flags, width 0, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#0.15p]", -1));
	printf(" => [%d]\n", printf("[%00.15p]", -1));
	printf(" => [%d]\n", printf("[%-0.15p]", -1));
	printf(" => [%d]\n", printf("[%+0.15p]", -1));
	printf(" => [%d]\n", printf("[% 0.15p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 0.15p]", -1));
	printf("\n");

	printf("\n----- check flags, width 5, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#5.15p]", -1));
	printf(" => [%d]\n", printf("[%05.15p]", -1));
	printf(" => [%d]\n", printf("[%-5.15p]", -1));
	printf(" => [%d]\n", printf("[%+5.15p]", -1));
	printf(" => [%d]\n", printf("[% 5.15p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 5.15p]", -1));
	printf("\n");

	printf("\n----- check flags, width 10, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#10.15p]", -1));
	printf(" => [%d]\n", printf("[%010.15p]", -1));
	printf(" => [%d]\n", printf("[%-10.15p]", -1));
	printf(" => [%d]\n", printf("[%+10.15p]", -1));
	printf(" => [%d]\n", printf("[% 10.15p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 10.15p]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#15.15p]", -1));
	printf(" => [%d]\n", printf("[%015.15p]", -1));
	printf(" => [%d]\n", printf("[%-15.15p]", -1));
	printf(" => [%d]\n", printf("[%+15.15p]", -1));
	printf(" => [%d]\n", printf("[% 15.15p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.15p]", -1));
	printf("\n");

	printf("\n----- check flags, width 20, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#20.15p]", -1));
	printf(" => [%d]\n", printf("[%020.15p]", -1));
	printf(" => [%d]\n", printf("[%-20.15p]", -1));
	printf(" => [%d]\n", printf("[%+20.15p]", -1));
	printf(" => [%d]\n", printf("[% 20.15p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 20.15p]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#15.20p]", -1));
	printf(" => [%d]\n", printf("[%015.20p]", -1));
	printf(" => [%d]\n", printf("[%-15.20p]", -1));
	printf(" => [%d]\n", printf("[%+15.20p]", -1));
	printf(" => [%d]\n", printf("[% 15.20p]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.20p]", -1));
	printf("\n");
	*/

	fflush(stdout);
	return ;
}
