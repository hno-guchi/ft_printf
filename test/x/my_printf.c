#include "test_x.h"

void	my_printf(void *point)
{
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#x]     = [%#x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%0x]     = [%0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%-x]     = [%-x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%+x]     = [%+x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%% x]     = [% x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ x] = [%#0-+ x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*x]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0*x]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-*x]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+*x]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% *x]", 0, 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *x]", 0, 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%05x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%010x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%0.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% .15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .15x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.0x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.0x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.5x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.5x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.10x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.10x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%00.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-0.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+0.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 0.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.15x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%05.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-5.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+5.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 5.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.15x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%010.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-10.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+10.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 10.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.15x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.15x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%020.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-20.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+20.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 20.15x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.15x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.20x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%015.20x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%-15.20x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%+15.20x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[% 15.20x]", 4294967295));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.20x]", 4294967295));
	ft_printf("\n");

	ft_printf("\n----- Number is 0 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#x]     = [%#x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%0x]     = [%0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%-x]     = [%-x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%+x]     = [%+x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%% x]     = [% x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ x] = [%#0-+ x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*x]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%0*x]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%-*x]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%+*x]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[% *x]", 0, 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *x]", 0, 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%01x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .1x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%0.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% .10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.0x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.0x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 1 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.1x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.1x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%00.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-0.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+0.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 0.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.10x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#1.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%01.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-1.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+1.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 1.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 1.10x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.10x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%020.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-20.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+20.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 20.10x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.10x]", 0));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.20x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%010.20x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%-10.20x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%+10.20x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[% 10.20x]", 0));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.20x]", 0));
	ft_printf("\n");

	ft_printf("\n----- Number is -1 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%%#x]     = [%#x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%0x]     = [%0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%-x]     = [%-x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%+x]     = [%+x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%% x]     = [% x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%%#0-+ x] = [%#0-+ x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#*x]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%0*x]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%-*x]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%+*x]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[% *x]", 0, -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ *x]", 0, -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%05x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%010x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .0x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .5x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .10x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%0.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% .15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ .15x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 0 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.0x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.0x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 5 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.5x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.5x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 10 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.10x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.10x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#0.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%00.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-0.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+0.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 0.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 0.15x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 5, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#5.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%05.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-5.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+5.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 5.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 5.15x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#10.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%010.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-10.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+10.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 10.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 10.15x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.15x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 15 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#20.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%020.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-20.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+20.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 20.15x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 20.15x]", -1));
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 20 ------\n");
	ft_printf(" => [%d]\n", ft_printf("[%#15.20x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%015.20x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%-15.20x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%+15.20x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[% 15.20x]", -1));
	ft_printf(" => [%d]\n", ft_printf("[%#0-+ 15.20x]", -1));
	ft_printf("\n");

	fflush(stdout);
	return ;
}
