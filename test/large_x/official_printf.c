#include "test_large_x.h"

void	official_printf(void *point)
{
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#X]     = [%#X]", 4294967295));
	printf(" => [%d]\n", printf("[%%0X]     = [%0X]", 4294967295));
	printf(" => [%d]\n", printf("[%%-X]     = [%-X]", 4294967295));
	printf(" => [%d]\n", printf("[%%+X]     = [%+X]", 4294967295));
	printf(" => [%d]\n", printf("[%% X]     = [% X]", 4294967295));
	printf(" => [%d]\n", printf("[%%#0-+ X] = [%#0-+ X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*X]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%0*X]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%-*X]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%+*X]", 0, 4294967295));
	printf(" => [%d]\n", printf("[% *X]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ *X]", 0, 4294967295));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5X]", 4294967295));
	printf(" => [%d]\n", printf("[%05X]", 4294967295));
	printf(" => [%d]\n", printf("[%-5X]", 4294967295));
	printf(" => [%d]\n", printf("[%+5X]", 4294967295));
	printf(" => [%d]\n", printf("[% 5X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 5X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10X]", 4294967295));
	printf(" => [%d]\n", printf("[%010X]", 4294967295));
	printf(" => [%d]\n", printf("[%-10X]", 4294967295));
	printf(" => [%d]\n", printf("[%+10X]", 4294967295));
	printf(" => [%d]\n", printf("[% 10X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 10X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15 ------\n");
	printf(" => [%d]\n", printf("[%#15X]", 4294967295));
	printf(" => [%d]\n", printf("[%015X]", 4294967295));
	printf(" => [%d]\n", printf("[%-15X]", 4294967295));
	printf(" => [%d]\n", printf("[%+15X]", 4294967295));
	printf(" => [%d]\n", printf("[% 15X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.X]", 4294967295));
	printf(" => [%d]\n", printf("[%0.X]", 4294967295));
	printf(" => [%d]\n", printf("[%-.X]", 4294967295));
	printf(" => [%d]\n", printf("[%+.X]", 4294967295));
	printf(" => [%d]\n", printf("[% .X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0X]", 4294967295));
	printf(" => [%d]\n", printf("[%0.0X]", 4294967295));
	printf(" => [%d]\n", printf("[%-.0X]", 4294967295));
	printf(" => [%d]\n", printf("[%+.0X]", 4294967295));
	printf(" => [%d]\n", printf("[% .0X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .0X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5X]", 4294967295));
	printf(" => [%d]\n", printf("[%0.5X]", 4294967295));
	printf(" => [%d]\n", printf("[%-.5X]", 4294967295));
	printf(" => [%d]\n", printf("[%+.5X]", 4294967295));
	printf(" => [%d]\n", printf("[% .5X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .5X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10X]", 4294967295));
	printf(" => [%d]\n", printf("[%0.10X]", 4294967295));
	printf(" => [%d]\n", printf("[%-.10X]", 4294967295));
	printf(" => [%d]\n", printf("[%+.10X]", 4294967295));
	printf(" => [%d]\n", printf("[% .10X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .10X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%0.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%-.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%+.15X]", 4294967295));
	printf(" => [%d]\n", printf("[% .15X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .15X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#15.0X]", 4294967295));
	printf(" => [%d]\n", printf("[%015.0X]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.0X]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.0X]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.0X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.0X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#15.5X]", 4294967295));
	printf(" => [%d]\n", printf("[%015.5X]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.5X]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.5X]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.5X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.5X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#15.10X]", 4294967295));
	printf(" => [%d]\n", printf("[%015.10X]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.10X]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.10X]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.10X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.10X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 0, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#0.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%00.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%-0.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%+0.15X]", 4294967295));
	printf(" => [%d]\n", printf("[% 0.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 0.15X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 5, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#5.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%05.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%-5.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%+5.15X]", 4294967295));
	printf(" => [%d]\n", printf("[% 5.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 5.15X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 10, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#10.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%010.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%-10.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%+10.15X]", 4294967295));
	printf(" => [%d]\n", printf("[% 10.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 10.15X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#15.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%015.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.15X]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.15X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 20, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#20.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%020.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%-20.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%+20.15X]", 4294967295));
	printf(" => [%d]\n", printf("[% 20.15X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 20.15X]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#15.20X]", 4294967295));
	printf(" => [%d]\n", printf("[%015.20X]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.20X]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.20X]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.20X]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.20X]", 4294967295));
	printf("\n");

	printf("\n----- Number is 0 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#X]     = [%#X]", 0));
	printf(" => [%d]\n", printf("[%%0X]     = [%0X]", 0));
	printf(" => [%d]\n", printf("[%%-X]     = [%-X]", 0));
	printf(" => [%d]\n", printf("[%%+X]     = [%+X]", 0));
	printf(" => [%d]\n", printf("[%% X]     = [% X]", 0));
	printf(" => [%d]\n", printf("[%%#0-+ X] = [%#0-+ X]", 0));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*X]", 0, 0));
	printf(" => [%d]\n", printf("[%0*X]", 0, 0));
	printf(" => [%d]\n", printf("[%-*X]", 0, 0));
	printf(" => [%d]\n", printf("[%+*X]", 0, 0));
	printf(" => [%d]\n", printf("[% *X]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ *X]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf(" => [%d]\n", printf("[%#1X]", 0));
	printf(" => [%d]\n", printf("[%01X]", 0));
	printf(" => [%d]\n", printf("[%-1X]", 0));
	printf(" => [%d]\n", printf("[%+1X]", 0));
	printf(" => [%d]\n", printf("[% 1X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 1X]", 0));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10X]", 0));
	printf(" => [%d]\n", printf("[%010X]", 0));
	printf(" => [%d]\n", printf("[%-10X]", 0));
	printf(" => [%d]\n", printf("[%+10X]", 0));
	printf(" => [%d]\n", printf("[% 10X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10X]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.X]", 0));
	printf(" => [%d]\n", printf("[%0.X]", 0));
	printf(" => [%d]\n", printf("[%-.X]", 0));
	printf(" => [%d]\n", printf("[%+.X]", 0));
	printf(" => [%d]\n", printf("[% .X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .X]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0X]", 0));
	printf(" => [%d]\n", printf("[%0.0X]", 0));
	printf(" => [%d]\n", printf("[%-.0X]", 0));
	printf(" => [%d]\n", printf("[%+.0X]", 0));
	printf(" => [%d]\n", printf("[% .0X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .0X]", 0));
	printf("\n");

	printf("\n----- check flags, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#.1X]", 0));
	printf(" => [%d]\n", printf("[%0.1X]", 0));
	printf(" => [%d]\n", printf("[%-.1X]", 0));
	printf(" => [%d]\n", printf("[%+.1X]", 0));
	printf(" => [%d]\n", printf("[% .1X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .1X]", 0));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10X]", 0));
	printf(" => [%d]\n", printf("[%0.10X]", 0));
	printf(" => [%d]\n", printf("[%-.10X]", 0));
	printf(" => [%d]\n", printf("[%+.10X]", 0));
	printf(" => [%d]\n", printf("[% .10X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .10X]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.0X]", 0));
	printf(" => [%d]\n", printf("[%010.0X]", 0));
	printf(" => [%d]\n", printf("[%-10.0X]", 0));
	printf(" => [%d]\n", printf("[%+10.0X]", 0));
	printf(" => [%d]\n", printf("[% 10.0X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.0X]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#10.1X]", 0));
	printf(" => [%d]\n", printf("[%010.1X]", 0));
	printf(" => [%d]\n", printf("[%-10.1X]", 0));
	printf(" => [%d]\n", printf("[%+10.1X]", 0));
	printf(" => [%d]\n", printf("[% 10.1X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.1X]", 0));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#0.10X]", 0));
	printf(" => [%d]\n", printf("[%00.10X]", 0));
	printf(" => [%d]\n", printf("[%-0.10X]", 0));
	printf(" => [%d]\n", printf("[%+0.10X]", 0));
	printf(" => [%d]\n", printf("[% 0.10X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 0.10X]", 0));
	printf("\n");

	printf("\n----- check flags, width 1, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#1.10X]", 0));
	printf(" => [%d]\n", printf("[%01.10X]", 0));
	printf(" => [%d]\n", printf("[%-1.10X]", 0));
	printf(" => [%d]\n", printf("[%+1.10X]", 0));
	printf(" => [%d]\n", printf("[% 1.10X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 1.10X]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10X]", 0));
	printf(" => [%d]\n", printf("[%010.10X]", 0));
	printf(" => [%d]\n", printf("[%-10.10X]", 0));
	printf(" => [%d]\n", printf("[%+10.10X]", 0));
	printf(" => [%d]\n", printf("[% 10.10X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.10X]", 0));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10X]", 0));
	printf(" => [%d]\n", printf("[%020.10X]", 0));
	printf(" => [%d]\n", printf("[%-20.10X]", 0));
	printf(" => [%d]\n", printf("[%+20.10X]", 0));
	printf(" => [%d]\n", printf("[% 20.10X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 20.10X]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20X]", 0));
	printf(" => [%d]\n", printf("[%010.20X]", 0));
	printf(" => [%d]\n", printf("[%-10.20X]", 0));
	printf(" => [%d]\n", printf("[%+10.20X]", 0));
	printf(" => [%d]\n", printf("[% 10.20X]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.20X]", 0));
	printf("\n");

	printf("\n----- Number is -1 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#X]     = [%#X]", -1));
	printf(" => [%d]\n", printf("[%%0X]     = [%0X]", -1));
	printf(" => [%d]\n", printf("[%%-X]     = [%-X]", -1));
	printf(" => [%d]\n", printf("[%%+X]     = [%+X]", -1));
	printf(" => [%d]\n", printf("[%% X]     = [% X]", -1));
	printf(" => [%d]\n", printf("[%%#0-+ X] = [%#0-+ X]", -1));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*X]", 0, -1));
	printf(" => [%d]\n", printf("[%0*X]", 0, -1));
	printf(" => [%d]\n", printf("[%-*X]", 0, -1));
	printf(" => [%d]\n", printf("[%+*X]", 0, -1));
	printf(" => [%d]\n", printf("[% *X]", 0, -1));
	printf(" => [%d]\n", printf("[%#0-+ *X]", 0, -1));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5X]", -1));
	printf(" => [%d]\n", printf("[%05X]", -1));
	printf(" => [%d]\n", printf("[%-5X]", -1));
	printf(" => [%d]\n", printf("[%+5X]", -1));
	printf(" => [%d]\n", printf("[% 5X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 5X]", -1));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10X]", -1));
	printf(" => [%d]\n", printf("[%010X]", -1));
	printf(" => [%d]\n", printf("[%-10X]", -1));
	printf(" => [%d]\n", printf("[%+10X]", -1));
	printf(" => [%d]\n", printf("[% 10X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 10X]", -1));
	printf("\n");

	printf("\n----- check flags, width 15 ------\n");
	printf(" => [%d]\n", printf("[%#15X]", -1));
	printf(" => [%d]\n", printf("[%015X]", -1));
	printf(" => [%d]\n", printf("[%-15X]", -1));
	printf(" => [%d]\n", printf("[%+15X]", -1));
	printf(" => [%d]\n", printf("[% 15X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15X]", -1));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.X]", -1));
	printf(" => [%d]\n", printf("[%0.X]", -1));
	printf(" => [%d]\n", printf("[%-.X]", -1));
	printf(" => [%d]\n", printf("[%+.X]", -1));
	printf(" => [%d]\n", printf("[% .X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .X]", -1));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0X]", -1));
	printf(" => [%d]\n", printf("[%0.0X]", -1));
	printf(" => [%d]\n", printf("[%-.0X]", -1));
	printf(" => [%d]\n", printf("[%+.0X]", -1));
	printf(" => [%d]\n", printf("[% .0X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .0X]", -1));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5X]", -1));
	printf(" => [%d]\n", printf("[%0.5X]", -1));
	printf(" => [%d]\n", printf("[%-.5X]", -1));
	printf(" => [%d]\n", printf("[%+.5X]", -1));
	printf(" => [%d]\n", printf("[% .5X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .5X]", -1));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10X]", -1));
	printf(" => [%d]\n", printf("[%0.10X]", -1));
	printf(" => [%d]\n", printf("[%-.10X]", -1));
	printf(" => [%d]\n", printf("[%+.10X]", -1));
	printf(" => [%d]\n", printf("[% .10X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .10X]", -1));
	printf("\n");

	printf("\n----- check flags, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#.15X]", -1));
	printf(" => [%d]\n", printf("[%0.15X]", -1));
	printf(" => [%d]\n", printf("[%-.15X]", -1));
	printf(" => [%d]\n", printf("[%+.15X]", -1));
	printf(" => [%d]\n", printf("[% .15X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .15X]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#15.0X]", -1));
	printf(" => [%d]\n", printf("[%015.0X]", -1));
	printf(" => [%d]\n", printf("[%-15.0X]", -1));
	printf(" => [%d]\n", printf("[%+15.0X]", -1));
	printf(" => [%d]\n", printf("[% 15.0X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.0X]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#15.5X]", -1));
	printf(" => [%d]\n", printf("[%015.5X]", -1));
	printf(" => [%d]\n", printf("[%-15.5X]", -1));
	printf(" => [%d]\n", printf("[%+15.5X]", -1));
	printf(" => [%d]\n", printf("[% 15.5X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.5X]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#15.10X]", -1));
	printf(" => [%d]\n", printf("[%015.10X]", -1));
	printf(" => [%d]\n", printf("[%-15.10X]", -1));
	printf(" => [%d]\n", printf("[%+15.10X]", -1));
	printf(" => [%d]\n", printf("[% 15.10X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.10X]", -1));
	printf("\n");

	printf("\n----- check flags, width 0, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#0.15X]", -1));
	printf(" => [%d]\n", printf("[%00.15X]", -1));
	printf(" => [%d]\n", printf("[%-0.15X]", -1));
	printf(" => [%d]\n", printf("[%+0.15X]", -1));
	printf(" => [%d]\n", printf("[% 0.15X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 0.15X]", -1));
	printf("\n");

	printf("\n----- check flags, width 5, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#5.15X]", -1));
	printf(" => [%d]\n", printf("[%05.15X]", -1));
	printf(" => [%d]\n", printf("[%-5.15X]", -1));
	printf(" => [%d]\n", printf("[%+5.15X]", -1));
	printf(" => [%d]\n", printf("[% 5.15X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 5.15X]", -1));
	printf("\n");

	printf("\n----- check flags, width 10, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#10.15X]", -1));
	printf(" => [%d]\n", printf("[%010.15X]", -1));
	printf(" => [%d]\n", printf("[%-10.15X]", -1));
	printf(" => [%d]\n", printf("[%+10.15X]", -1));
	printf(" => [%d]\n", printf("[% 10.15X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 10.15X]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#15.15X]", -1));
	printf(" => [%d]\n", printf("[%015.15X]", -1));
	printf(" => [%d]\n", printf("[%-15.15X]", -1));
	printf(" => [%d]\n", printf("[%+15.15X]", -1));
	printf(" => [%d]\n", printf("[% 15.15X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.15X]", -1));
	printf("\n");

	printf("\n----- check flags, width 20, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#20.15X]", -1));
	printf(" => [%d]\n", printf("[%020.15X]", -1));
	printf(" => [%d]\n", printf("[%-20.15X]", -1));
	printf(" => [%d]\n", printf("[%+20.15X]", -1));
	printf(" => [%d]\n", printf("[% 20.15X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 20.15X]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#15.20X]", -1));
	printf(" => [%d]\n", printf("[%015.20X]", -1));
	printf(" => [%d]\n", printf("[%-15.20X]", -1));
	printf(" => [%d]\n", printf("[%+15.20X]", -1));
	printf(" => [%d]\n", printf("[% 15.20X]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.20X]", -1));
	printf("\n");

	fflush(stdout);
	return ;
}
