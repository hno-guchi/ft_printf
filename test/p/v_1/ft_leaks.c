#include "ft_printf.h"
#include "test_p.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	ft_printf("\n---------- (%%10p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10p] |", NULL));
	ft_printf("\n---------- (%%010p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%010p] |", NULL));
	ft_printf("\n---------- (%%.0p); p = NULL ----------\n");
 	ft_printf("=> [%d]\n", ft_printf("[%.0p] |", NULL));
	ft_printf("\n---------- (%%1.0p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%1.0p] |", NULL));
	ft_printf("\n---------- (%%2.0p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%2.0p] |", NULL));
	ft_printf("\n---------- (%%3.0p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%3.0p] |", NULL));
	ft_printf("\n---------- (%%4.0p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%4.0p] |", NULL));
	ft_printf("\n---------- (%%10.0p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10.0p] |", NULL));
	ft_printf("\n---------- (%%.1p); p = NULL ----------\n");
 	ft_printf("=> [%d]\n", ft_printf("[%.1p] |", NULL));
	ft_printf("\n---------- (%%1.1p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%1.1p] |", NULL));
	ft_printf("\n---------- (%%2.1p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%2.1p] |", NULL));
	ft_printf("\n---------- (%%3.1p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%3.1p] |", NULL));
	ft_printf("\n---------- (%%4.1p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%4.1p] |", NULL));
	ft_printf("\n---------- (%%10.1p); p = NULL ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10.1p] |", NULL));

	char	*point_var;
	ft_printf("\n---------- (%%10p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10p] |", point_var));
	ft_printf("\n---------- (%%010p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%010p] |", point_var));
	ft_printf("\n---------- (%%.0p); p = point_var ----------\n");
 	ft_printf("=> [%d]\n", ft_printf("[%.0p] |", point_var));
	ft_printf("\n---------- (%%1.0p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%1.0p] |", point_var));
	ft_printf("\n---------- (%%2.0p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%2.0p] |", point_var));
	ft_printf("\n---------- (%%3.0p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%3.0p] |", point_var));
	ft_printf("\n---------- (%%4.0p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%4.0p] |", point_var));
	ft_printf("\n---------- (%%10.0p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10.0p] |", point_var));
	ft_printf("\n---------- (%%.1p); p = point_var ----------\n");
 	ft_printf("=> [%d]\n", ft_printf("[%.1p] |", point_var));
	ft_printf("\n---------- (%%1.1p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%1.1p] |", point_var));
	ft_printf("\n---------- (%%2.1p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%2.1p] |", point_var));
	ft_printf("\n---------- (%%3.1p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%3.1p] |", point_var));
	ft_printf("\n---------- (%%4.1p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%4.1p] |", point_var));
	ft_printf("\n---------- (%%10.1p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10.1p] |", point_var));
	ft_printf("\n---------- (%%.3p); p = point_var ----------\n");
 	ft_printf("=> [%d]\n", ft_printf("[%.3p] |", point_var));
	ft_printf("\n---------- (%%1.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%1.3p] |", point_var));
	ft_printf("\n---------- (%%2.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%2.3p] |", point_var));
	ft_printf("\n---------- (%%3.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%3.3p] |", point_var));
	ft_printf("\n---------- (%%4.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%4.3p] |", point_var));
	ft_printf("\n---------- (%%10.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10.3p] |", point_var));
	ft_printf("\n---------- (%%.3p); p = point_var ----------\n");
 	ft_printf("=> [%d]\n", ft_printf("[%.3p] |", point_var));
	ft_printf("\n---------- (%%1.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%1.3p] |", point_var));
	ft_printf("\n---------- (%%2.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%2.3p] |", point_var));
	ft_printf("\n---------- (%%3.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%3.3p] |", point_var));
	ft_printf("\n---------- (%%4.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%4.3p] |", point_var));
	ft_printf("\n---------- (%%10.3p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10.3p] |", point_var));
	ft_printf("\n---------- (%%.20p); p = point_var ----------\n");
 	ft_printf("=> [%d]\n", ft_printf("[%.20p] |", point_var));
	ft_printf("\n---------- (%%1.20p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%1.20p] |", point_var));
	ft_printf("\n---------- (%%2.20p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%2.20p] |", point_var));
	ft_printf("\n---------- (%%3.20p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%3.20p] |", point_var));
	ft_printf("\n---------- (%%4.20p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%4.20p] |", point_var));
	ft_printf("\n---------- (%%10.20p); p = point_var ----------\n");
	ft_printf("=> [%d]\n", ft_printf("[%10.20p] |", point_var));

	ft_printf("=> [%d]\n", ft_printf("[%10.20p] |", point));

	ft_printf("\n----- check flags ------\n");
	ft_printf("[%%#p]     = [%#p]\n", point);
	ft_printf("[%%0p]     = [%0p]\n", point);
	ft_printf("[%%-p]     = [%-p]\n", point);
	ft_printf("[%%+p]     = [%+p]\n", point);
	ft_printf("[%% p]     = [% p]\n", point);
	ft_printf("[%%#0-+ p] = [%#0-+ p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf("[%#*p]\n", 0, point);
	ft_printf("[%0*p]\n", 0, point);
	ft_printf("[%-*p]\n", 0, point);
	ft_printf("[%+*p]\n", 0, point);
	ft_printf("[% *p]\n", 0, point);
	ft_printf("[%#0-+ *p]\n", 0, point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf("[%#1p]\n", point);
	ft_printf("[%01p]\n", point);
	ft_printf("[%-1p]\n", point);
	ft_printf("[%+1p]\n", point);
	ft_printf("[% 1p]\n", point);
	ft_printf("[%#0-+ 1p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 11 ------\n");
	ft_printf("[%#11p]\n", point);
	ft_printf("[%011p]\n", point);
	ft_printf("[%-11p]\n", point);
	ft_printf("[%+11p]\n", point);
	ft_printf("[% 11p]\n", point);
	ft_printf("[%#0-+ 11p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 12 ------\n");
	ft_printf("[%#12p]\n", point);
	ft_printf("[%012p]\n", point);
	ft_printf("[%-12p]\n", point);
	ft_printf("[%+12p]\n", point);
	ft_printf("[% 12p]\n", point);
	ft_printf("[%#0-+ 12p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf("[%#.0p]\n", point);
	ft_printf("[%0.0p]\n", point);
	ft_printf("[%-.0p]\n", point);
	ft_printf("[%+.0p]\n", point);
	ft_printf("[% .0p]\n", point);
	ft_printf("[%#0-+ .0p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 8 ------\n");
	ft_printf("[%#.8p]\n", point);
	ft_printf("[%0.8p]\n", point);
	ft_printf("[%-.8p]\n", point);
	ft_printf("[%+.8p]\n", point);
	ft_printf("[% .8p]\n", point);
	ft_printf("[%#0-+ .8p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 9 ------\n");
	ft_printf("[%#.9p]\n", point);
	ft_printf("[%0.9p]\n", point);
	ft_printf("[%-.9p]\n", point);
	ft_printf("[%+.9p]\n", point);
	ft_printf("[% .9p]\n", point);
	ft_printf("[%#0-+ .9p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf("[%#.10p]\n", point);
	ft_printf("[%0.10p]\n", point);
	ft_printf("[%-.10p]\n", point);
	ft_printf("[%+.10p]\n", point);
	ft_printf("[% .10p]\n", point);
	ft_printf("[%#0-+ .10p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 12, precision 0 ------\n");
	ft_printf("[%#12.0p]\n", point);
	ft_printf("[%012.0p]\n", point);
	ft_printf("[%-12.0p]\n", point);
	ft_printf("[%+12.0p]\n", point);
	ft_printf("[% 12.0p]\n", point);
	ft_printf("[%#0-+ 12.0p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 12, precision 8 ------\n");
	ft_printf("[%#12.8p]\n", point);
	ft_printf("[%012.8p]\n", point);
	ft_printf("[%-12.8p]\n", point);
	ft_printf("[%+12.8p]\n", point);
	ft_printf("[% 12.8p]\n", point);
	ft_printf("[%#0-+ 12.8p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 12, precision 9 ------\n");
	ft_printf("[%#12.9p]\n", point);
	ft_printf("[%012.9p]\n", point);
	ft_printf("[%-12.9p]\n", point);
	ft_printf("[%+12.9p]\n", point);
	ft_printf("[% 12.9p]\n", point);
	ft_printf("[%#0-+ 12.9p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 12, precision 10 ------\n");
	ft_printf("[%#12.10p]\n", point);
	ft_printf("[%012.10p]\n", point);
	ft_printf("[%-12.10p]\n", point);
	ft_printf("[%+12.10p]\n", point);
	ft_printf("[% 12.10p]\n", point);
	ft_printf("[%#0-+ 12.10p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf("[%#0.10p]\n", point);
	ft_printf("[%00.10p]\n", point);
	ft_printf("[%-0.10p]\n", point);
	ft_printf("[%+0.10p]\n", point);
	ft_printf("[% 0.10p]\n", point);
	ft_printf("[%#0-+ 0.10p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf("[%#10.10p]\n", point);
	ft_printf("[%010.10p]\n", point);
	ft_printf("[%-10.10p]\n", point);
	ft_printf("[%+10.10p]\n", point);
	ft_printf("[% 10.10p]\n", point);
	ft_printf("[%#0-+ 10.10p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 10 ------\n");
	ft_printf("[%#15.10p]\n", point);
	ft_printf("[%015.10p]\n", point);
	ft_printf("[%-15.10p]\n", point);
	ft_printf("[%+15.10p]\n", point);
	ft_printf("[% 15.10p]\n", point);
	ft_printf("[%#0-+ 15.10p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf("[%#20.10p]\n", point);
	ft_printf("[%020.10p]\n", point);
	ft_printf("[%-20.10p]\n", point);
	ft_printf("[%+20.10p]\n", point);
	ft_printf("[% 20.10p]\n", point);
	ft_printf("[%#0-+ 20.10p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 15, precision 20 ------\n");
	ft_printf("[%#15.20p]\n", point);
	ft_printf("[%015.20p]\n", point);
	ft_printf("[%-15.20p]\n", point);
	ft_printf("[%+15.20p]\n", point);
	ft_printf("[% 15.20p]\n", point);
	ft_printf("[%#0-+ 15.20p]\n", point);
	ft_printf("\n");

	ft_printf("\n----- Number is 0 ------\n");
	ft_printf("\n----- check flags ------\n");
	ft_printf("[%%#p]     = [%#p]\n", 0);
	ft_printf("[%%0p]     = [%0p]\n", 0);
	ft_printf("[%%-p]     = [%-p]\n", 0);
	ft_printf("[%%+p]     = [%+p]\n", 0);
	ft_printf("[%% p]     = [% p]\n", 0);
	ft_printf("[%%#0-+ p] = [%#0-+ p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width * = 0 ------\n");
	ft_printf("[%#*p]\n", 0, 0);
	ft_printf("[%0*p]\n", 0, 0);
	ft_printf("[%-*p]\n", 0, 0);
	ft_printf("[%+*p]\n", 0, 0);
	ft_printf("[% *p]\n", 0, 0);
	ft_printf("[%#0-+ *p]\n", 0, 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1 ------\n");
	ft_printf("[%#1p]\n", 0);
	ft_printf("[%01p]\n", 0);
	ft_printf("[%-1p]\n", 0);
	ft_printf("[%+1p]\n", 0);
	ft_printf("[% 1p]\n", 0);
	ft_printf("[%#0-+ 1p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10 ------\n");
	ft_printf("[%#10p]\n", 0);
	ft_printf("[%010p]\n", 0);
	ft_printf("[%-10p]\n", 0);
	ft_printf("[%+10p]\n", 0);
	ft_printf("[% 10p]\n", 0);
	ft_printf("[%#0-+ 10p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 0 ------\n");
	ft_printf("[%#.0p]\n", 0);
	ft_printf("[%0.0p]\n", 0);
	ft_printf("[%-.0p]\n", 0);
	ft_printf("[%+.0p]\n", 0);
	ft_printf("[% .0p]\n", 0);
	ft_printf("[%#0-+ .0p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 1 ------\n");
	ft_printf("[%#.1p]\n", 0);
	ft_printf("[%0.1p]\n", 0);
	ft_printf("[%-.1p]\n", 0);
	ft_printf("[%+.1p]\n", 0);
	ft_printf("[% .1p]\n", 0);
	ft_printf("[%#0-+ .1p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, precision 10 ------\n");
	ft_printf("[%#.10p]\n", 0);
	ft_printf("[%0.10p]\n", 0);
	ft_printf("[%-.10p]\n", 0);
	ft_printf("[%+.10p]\n", 0);
	ft_printf("[% .10p]\n", 0);
	ft_printf("[%#0-+ .10p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 10 ------\n");
	ft_printf("[%#10.10p]\n", 0);
	ft_printf("[%010.10p]\n", 0);
	ft_printf("[%-10.10p]\n", 0);
	ft_printf("[%+10.10p]\n", 0);
	ft_printf("[% 10.10p]\n", 0);
	ft_printf("[%#0-+ 10.10p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 0 ------\n");
	ft_printf("[%#10.0p]\n", 0);
	ft_printf("[%010.0p]\n", 0);
	ft_printf("[%-10.0p]\n", 0);
	ft_printf("[%+10.0p]\n", 0);
	ft_printf("[% 10.0p]\n", 0);
	ft_printf("[%#0-+ 10.0p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 1 ------\n");
	ft_printf("[%#10.1p]\n", 0);
	ft_printf("[%010.1p]\n", 0);
	ft_printf("[%-10.1p]\n", 0);
	ft_printf("[%+10.1p]\n", 0);
	ft_printf("[% 10.1p]\n", 0);
	ft_printf("[%#0-+ 10.1p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 0, precision 10 ------\n");
	ft_printf("[%#0.10p]\n", 0);
	ft_printf("[%00.10p]\n", 0);
	ft_printf("[%-0.10p]\n", 0);
	ft_printf("[%+0.10p]\n", 0);
	ft_printf("[% 0.10p]\n", 0);
	ft_printf("[%#0-+ 0.10p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 1, precision 10 ------\n");
	ft_printf("[%#1.10p]\n", 0);
	ft_printf("[%01.10p]\n", 0);
	ft_printf("[%-1.10p]\n", 0);
	ft_printf("[%+1.10p]\n", 0);
	ft_printf("[% 1.10p]\n", 0);
	ft_printf("[%#0-+ 1.10p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 20, precision 10 ------\n");
	ft_printf("[%#20.10p]\n", 0);
	ft_printf("[%020.10p]\n", 0);
	ft_printf("[%-20.10p]\n", 0);
	ft_printf("[%+20.10p]\n", 0);
	ft_printf("[% 20.10p]\n", 0);
	ft_printf("[%#0-+ 20.10p]\n", 0);
	ft_printf("\n");

	ft_printf("\n----- check flags, width 10, precision 20 ------\n");
	ft_printf("[%#10.20p]\n", 0);
	ft_printf("[%010.20p]\n", 0);
	ft_printf("[%-10.20p]\n", 0);
	ft_printf("[%+10.20p]\n", 0);
	ft_printf("[% 10.20p]\n", 0);
	ft_printf("[%#0-+ 10.20p]\n", 0);
	ft_printf("\n");

	fflush(stdout);
	system("leaks -q a.out");
	return (0);
}
