#include "test_x.h"

void	official_printf(void *point)
{
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#x]     = [%#x]", 4294967295));
	printf(" => [%d]\n", printf("[%%0x]     = [%0x]", 4294967295));
	printf(" => [%d]\n", printf("[%%-x]     = [%-x]", 4294967295));
	printf(" => [%d]\n", printf("[%%+x]     = [%+x]", 4294967295));
	printf(" => [%d]\n", printf("[%% x]     = [% x]", 4294967295));
	printf(" => [%d]\n", printf("[%%#0-+ x] = [%#0-+ x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*x]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%0*x]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%-*x]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%+*x]", 0, 4294967295));
	printf(" => [%d]\n", printf("[% *x]", 0, 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ *x]", 0, 4294967295));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5x]", 4294967295));
	printf(" => [%d]\n", printf("[%05x]", 4294967295));
	printf(" => [%d]\n", printf("[%-5x]", 4294967295));
	printf(" => [%d]\n", printf("[%+5x]", 4294967295));
	printf(" => [%d]\n", printf("[% 5x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 5x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10x]", 4294967295));
	printf(" => [%d]\n", printf("[%010x]", 4294967295));
	printf(" => [%d]\n", printf("[%-10x]", 4294967295));
	printf(" => [%d]\n", printf("[%+10x]", 4294967295));
	printf(" => [%d]\n", printf("[% 10x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 10x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15 ------\n");
	printf(" => [%d]\n", printf("[%#15x]", 4294967295));
	printf(" => [%d]\n", printf("[%015x]", 4294967295));
	printf(" => [%d]\n", printf("[%-15x]", 4294967295));
	printf(" => [%d]\n", printf("[%+15x]", 4294967295));
	printf(" => [%d]\n", printf("[% 15x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.x]", 4294967295));
	printf(" => [%d]\n", printf("[%0.x]", 4294967295));
	printf(" => [%d]\n", printf("[%-.x]", 4294967295));
	printf(" => [%d]\n", printf("[%+.x]", 4294967295));
	printf(" => [%d]\n", printf("[% .x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0x]", 4294967295));
	printf(" => [%d]\n", printf("[%0.0x]", 4294967295));
	printf(" => [%d]\n", printf("[%-.0x]", 4294967295));
	printf(" => [%d]\n", printf("[%+.0x]", 4294967295));
	printf(" => [%d]\n", printf("[% .0x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .0x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5x]", 4294967295));
	printf(" => [%d]\n", printf("[%0.5x]", 4294967295));
	printf(" => [%d]\n", printf("[%-.5x]", 4294967295));
	printf(" => [%d]\n", printf("[%+.5x]", 4294967295));
	printf(" => [%d]\n", printf("[% .5x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .5x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10x]", 4294967295));
	printf(" => [%d]\n", printf("[%0.10x]", 4294967295));
	printf(" => [%d]\n", printf("[%-.10x]", 4294967295));
	printf(" => [%d]\n", printf("[%+.10x]", 4294967295));
	printf(" => [%d]\n", printf("[% .10x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .10x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%0.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%-.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%+.15x]", 4294967295));
	printf(" => [%d]\n", printf("[% .15x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ .15x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#15.0x]", 4294967295));
	printf(" => [%d]\n", printf("[%015.0x]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.0x]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.0x]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.0x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.0x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#15.5x]", 4294967295));
	printf(" => [%d]\n", printf("[%015.5x]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.5x]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.5x]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.5x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.5x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#15.10x]", 4294967295));
	printf(" => [%d]\n", printf("[%015.10x]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.10x]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.10x]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.10x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.10x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 0, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#0.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%00.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%-0.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%+0.15x]", 4294967295));
	printf(" => [%d]\n", printf("[% 0.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 0.15x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 5, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#5.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%05.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%-5.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%+5.15x]", 4294967295));
	printf(" => [%d]\n", printf("[% 5.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 5.15x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 10, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#10.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%010.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%-10.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%+10.15x]", 4294967295));
	printf(" => [%d]\n", printf("[% 10.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 10.15x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#15.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%015.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.15x]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.15x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 20, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#20.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%020.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%-20.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%+20.15x]", 4294967295));
	printf(" => [%d]\n", printf("[% 20.15x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 20.15x]", 4294967295));
	printf("\n");

	printf("\n----- check flags, width 15, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#15.20x]", 4294967295));
	printf(" => [%d]\n", printf("[%015.20x]", 4294967295));
	printf(" => [%d]\n", printf("[%-15.20x]", 4294967295));
	printf(" => [%d]\n", printf("[%+15.20x]", 4294967295));
	printf(" => [%d]\n", printf("[% 15.20x]", 4294967295));
	printf(" => [%d]\n", printf("[%#0-+ 15.20x]", 4294967295));
	printf("\n");

	printf("\n----- Number is 0 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#x]     = [%#x]", 0));
	printf(" => [%d]\n", printf("[%%0x]     = [%0x]", 0));
	printf(" => [%d]\n", printf("[%%-x]     = [%-x]", 0));
	printf(" => [%d]\n", printf("[%%+x]     = [%+x]", 0));
	printf(" => [%d]\n", printf("[%% x]     = [% x]", 0));
	printf(" => [%d]\n", printf("[%%#0-+ x] = [%#0-+ x]", 0));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*x]", 0, 0));
	printf(" => [%d]\n", printf("[%0*x]", 0, 0));
	printf(" => [%d]\n", printf("[%-*x]", 0, 0));
	printf(" => [%d]\n", printf("[%+*x]", 0, 0));
	printf(" => [%d]\n", printf("[% *x]", 0, 0));
	printf(" => [%d]\n", printf("[%#0-+ *x]", 0, 0));
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf(" => [%d]\n", printf("[%#1x]", 0));
	printf(" => [%d]\n", printf("[%01x]", 0));
	printf(" => [%d]\n", printf("[%-1x]", 0));
	printf(" => [%d]\n", printf("[%+1x]", 0));
	printf(" => [%d]\n", printf("[% 1x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 1x]", 0));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10x]", 0));
	printf(" => [%d]\n", printf("[%010x]", 0));
	printf(" => [%d]\n", printf("[%-10x]", 0));
	printf(" => [%d]\n", printf("[%+10x]", 0));
	printf(" => [%d]\n", printf("[% 10x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10x]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.x]", 0));
	printf(" => [%d]\n", printf("[%0.x]", 0));
	printf(" => [%d]\n", printf("[%-.x]", 0));
	printf(" => [%d]\n", printf("[%+.x]", 0));
	printf(" => [%d]\n", printf("[% .x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .x]", 0));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0x]", 0));
	printf(" => [%d]\n", printf("[%0.0x]", 0));
	printf(" => [%d]\n", printf("[%-.0x]", 0));
	printf(" => [%d]\n", printf("[%+.0x]", 0));
	printf(" => [%d]\n", printf("[% .0x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .0x]", 0));
	printf("\n");

	printf("\n----- check flags, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#.1x]", 0));
	printf(" => [%d]\n", printf("[%0.1x]", 0));
	printf(" => [%d]\n", printf("[%-.1x]", 0));
	printf(" => [%d]\n", printf("[%+.1x]", 0));
	printf(" => [%d]\n", printf("[% .1x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .1x]", 0));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10x]", 0));
	printf(" => [%d]\n", printf("[%0.10x]", 0));
	printf(" => [%d]\n", printf("[%-.10x]", 0));
	printf(" => [%d]\n", printf("[%+.10x]", 0));
	printf(" => [%d]\n", printf("[% .10x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ .10x]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#10.0x]", 0));
	printf(" => [%d]\n", printf("[%010.0x]", 0));
	printf(" => [%d]\n", printf("[%-10.0x]", 0));
	printf(" => [%d]\n", printf("[%+10.0x]", 0));
	printf(" => [%d]\n", printf("[% 10.0x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.0x]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 1 ------\n");
	printf(" => [%d]\n", printf("[%#10.1x]", 0));
	printf(" => [%d]\n", printf("[%010.1x]", 0));
	printf(" => [%d]\n", printf("[%-10.1x]", 0));
	printf(" => [%d]\n", printf("[%+10.1x]", 0));
	printf(" => [%d]\n", printf("[% 10.1x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.1x]", 0));
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#0.10x]", 0));
	printf(" => [%d]\n", printf("[%00.10x]", 0));
	printf(" => [%d]\n", printf("[%-0.10x]", 0));
	printf(" => [%d]\n", printf("[%+0.10x]", 0));
	printf(" => [%d]\n", printf("[% 0.10x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 0.10x]", 0));
	printf("\n");

	printf("\n----- check flags, width 1, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#1.10x]", 0));
	printf(" => [%d]\n", printf("[%01.10x]", 0));
	printf(" => [%d]\n", printf("[%-1.10x]", 0));
	printf(" => [%d]\n", printf("[%+1.10x]", 0));
	printf(" => [%d]\n", printf("[% 1.10x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 1.10x]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#10.10x]", 0));
	printf(" => [%d]\n", printf("[%010.10x]", 0));
	printf(" => [%d]\n", printf("[%-10.10x]", 0));
	printf(" => [%d]\n", printf("[%+10.10x]", 0));
	printf(" => [%d]\n", printf("[% 10.10x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.10x]", 0));
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#20.10x]", 0));
	printf(" => [%d]\n", printf("[%020.10x]", 0));
	printf(" => [%d]\n", printf("[%-20.10x]", 0));
	printf(" => [%d]\n", printf("[%+20.10x]", 0));
	printf(" => [%d]\n", printf("[% 20.10x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 20.10x]", 0));
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#10.20x]", 0));
	printf(" => [%d]\n", printf("[%010.20x]", 0));
	printf(" => [%d]\n", printf("[%-10.20x]", 0));
	printf(" => [%d]\n", printf("[%+10.20x]", 0));
	printf(" => [%d]\n", printf("[% 10.20x]", 0));
	printf(" => [%d]\n", printf("[%#0-+ 10.20x]", 0));
	printf("\n");

	printf("\n----- Number is -1 ------\n");
	printf("\n----- check flags ------\n");
	printf(" => [%d]\n", printf("[%%#x]     = [%#x]", -1));
	printf(" => [%d]\n", printf("[%%0x]     = [%0x]", -1));
	printf(" => [%d]\n", printf("[%%-x]     = [%-x]", -1));
	printf(" => [%d]\n", printf("[%%+x]     = [%+x]", -1));
	printf(" => [%d]\n", printf("[%% x]     = [% x]", -1));
	printf(" => [%d]\n", printf("[%%#0-+ x] = [%#0-+ x]", -1));
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf(" => [%d]\n", printf("[%#*x]", 0, -1));
	printf(" => [%d]\n", printf("[%0*x]", 0, -1));
	printf(" => [%d]\n", printf("[%-*x]", 0, -1));
	printf(" => [%d]\n", printf("[%+*x]", 0, -1));
	printf(" => [%d]\n", printf("[% *x]", 0, -1));
	printf(" => [%d]\n", printf("[%#0-+ *x]", 0, -1));
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf(" => [%d]\n", printf("[%#5x]", -1));
	printf(" => [%d]\n", printf("[%05x]", -1));
	printf(" => [%d]\n", printf("[%-5x]", -1));
	printf(" => [%d]\n", printf("[%+5x]", -1));
	printf(" => [%d]\n", printf("[% 5x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 5x]", -1));
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf(" => [%d]\n", printf("[%#10x]", -1));
	printf(" => [%d]\n", printf("[%010x]", -1));
	printf(" => [%d]\n", printf("[%-10x]", -1));
	printf(" => [%d]\n", printf("[%+10x]", -1));
	printf(" => [%d]\n", printf("[% 10x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 10x]", -1));
	printf("\n");

	printf("\n----- check flags, width 15 ------\n");
	printf(" => [%d]\n", printf("[%#15x]", -1));
	printf(" => [%d]\n", printf("[%015x]", -1));
	printf(" => [%d]\n", printf("[%-15x]", -1));
	printf(" => [%d]\n", printf("[%+15x]", -1));
	printf(" => [%d]\n", printf("[% 15x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15x]", -1));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.x]", -1));
	printf(" => [%d]\n", printf("[%0.x]", -1));
	printf(" => [%d]\n", printf("[%-.x]", -1));
	printf(" => [%d]\n", printf("[%+.x]", -1));
	printf(" => [%d]\n", printf("[% .x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .x]", -1));
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#.0x]", -1));
	printf(" => [%d]\n", printf("[%0.0x]", -1));
	printf(" => [%d]\n", printf("[%-.0x]", -1));
	printf(" => [%d]\n", printf("[%+.0x]", -1));
	printf(" => [%d]\n", printf("[% .0x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .0x]", -1));
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#.5x]", -1));
	printf(" => [%d]\n", printf("[%0.5x]", -1));
	printf(" => [%d]\n", printf("[%-.5x]", -1));
	printf(" => [%d]\n", printf("[%+.5x]", -1));
	printf(" => [%d]\n", printf("[% .5x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .5x]", -1));
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#.10x]", -1));
	printf(" => [%d]\n", printf("[%0.10x]", -1));
	printf(" => [%d]\n", printf("[%-.10x]", -1));
	printf(" => [%d]\n", printf("[%+.10x]", -1));
	printf(" => [%d]\n", printf("[% .10x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .10x]", -1));
	printf("\n");

	printf("\n----- check flags, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#.15x]", -1));
	printf(" => [%d]\n", printf("[%0.15x]", -1));
	printf(" => [%d]\n", printf("[%-.15x]", -1));
	printf(" => [%d]\n", printf("[%+.15x]", -1));
	printf(" => [%d]\n", printf("[% .15x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ .15x]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 0 ------\n");
	printf(" => [%d]\n", printf("[%#15.0x]", -1));
	printf(" => [%d]\n", printf("[%015.0x]", -1));
	printf(" => [%d]\n", printf("[%-15.0x]", -1));
	printf(" => [%d]\n", printf("[%+15.0x]", -1));
	printf(" => [%d]\n", printf("[% 15.0x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.0x]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 5 ------\n");
	printf(" => [%d]\n", printf("[%#15.5x]", -1));
	printf(" => [%d]\n", printf("[%015.5x]", -1));
	printf(" => [%d]\n", printf("[%-15.5x]", -1));
	printf(" => [%d]\n", printf("[%+15.5x]", -1));
	printf(" => [%d]\n", printf("[% 15.5x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.5x]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 10 ------\n");
	printf(" => [%d]\n", printf("[%#15.10x]", -1));
	printf(" => [%d]\n", printf("[%015.10x]", -1));
	printf(" => [%d]\n", printf("[%-15.10x]", -1));
	printf(" => [%d]\n", printf("[%+15.10x]", -1));
	printf(" => [%d]\n", printf("[% 15.10x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.10x]", -1));
	printf("\n");

	printf("\n----- check flags, width 0, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#0.15x]", -1));
	printf(" => [%d]\n", printf("[%00.15x]", -1));
	printf(" => [%d]\n", printf("[%-0.15x]", -1));
	printf(" => [%d]\n", printf("[%+0.15x]", -1));
	printf(" => [%d]\n", printf("[% 0.15x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 0.15x]", -1));
	printf("\n");

	printf("\n----- check flags, width 5, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#5.15x]", -1));
	printf(" => [%d]\n", printf("[%05.15x]", -1));
	printf(" => [%d]\n", printf("[%-5.15x]", -1));
	printf(" => [%d]\n", printf("[%+5.15x]", -1));
	printf(" => [%d]\n", printf("[% 5.15x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 5.15x]", -1));
	printf("\n");

	printf("\n----- check flags, width 10, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#10.15x]", -1));
	printf(" => [%d]\n", printf("[%010.15x]", -1));
	printf(" => [%d]\n", printf("[%-10.15x]", -1));
	printf(" => [%d]\n", printf("[%+10.15x]", -1));
	printf(" => [%d]\n", printf("[% 10.15x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 10.15x]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#15.15x]", -1));
	printf(" => [%d]\n", printf("[%015.15x]", -1));
	printf(" => [%d]\n", printf("[%-15.15x]", -1));
	printf(" => [%d]\n", printf("[%+15.15x]", -1));
	printf(" => [%d]\n", printf("[% 15.15x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.15x]", -1));
	printf("\n");

	printf("\n----- check flags, width 20, precision 15 ------\n");
	printf(" => [%d]\n", printf("[%#20.15x]", -1));
	printf(" => [%d]\n", printf("[%020.15x]", -1));
	printf(" => [%d]\n", printf("[%-20.15x]", -1));
	printf(" => [%d]\n", printf("[%+20.15x]", -1));
	printf(" => [%d]\n", printf("[% 20.15x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 20.15x]", -1));
	printf("\n");

	printf("\n----- check flags, width 15, precision 20 ------\n");
	printf(" => [%d]\n", printf("[%#15.20x]", -1));
	printf(" => [%d]\n", printf("[%015.20x]", -1));
	printf(" => [%d]\n", printf("[%-15.20x]", -1));
	printf(" => [%d]\n", printf("[%+15.20x]", -1));
	printf(" => [%d]\n", printf("[% 15.20x]", -1));
	printf(" => [%d]\n", printf("[%#0-+ 15.20x]", -1));
	printf("\n");

	fflush(stdout);
	return ;
}
