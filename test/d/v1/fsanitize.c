#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	printf("\n[01]------- (%%d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%d] |", 2147));
	printf("\n[02]------- (%%10d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%10d] |", 2147));
	printf("\n[03]------- (%%010d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%010d] |", 2147));
	printf("\n[04]------- (%%.d); d = 0 ----------\n");
	printf("=> [%d]\n", printf("[%.d] |", 0));
	printf("\n[05]------- (%%.0d); d = 0 ----------\n");
	printf("=> [%d]\n", printf("[%.0d] |", 0));
	printf("\n[06]------- (%%.d); d = 1 ----------\n");
	printf("=> [%d]\n", printf("[%.d] |", 1));
	printf("\n[07]------- (%%.0d); d = 1 ----------\n");
	printf("=> [%d]\n", printf("[%.0d] |", 1));
	printf("\n[08]------- (%%.0d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%.0d] |", 2147));
	printf("\n[09]------- (%%1.0d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%1.0d] |", 2147));
	printf("\n[10]------- (%%2.0d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%2.0d] |", 2147));
	printf("\n[11]------- (%%3.0d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%3.0d] |", 2147));
	printf("\n[12]------- (%%4.0d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%4.0d] |", 2147));
	printf("\n[13]------- (%%10.0d); d = 2147 ----------\n");
	printf("=> [%d]\n", printf("[%10.0d] |", 2147));
	
	printf("\n----- check flags ------\n");
	printf("[%%#d]     = [%#d]\n", 12345);
	printf("[%%0d]     = [%0d]\n", 12345);
	printf("[%%-d]     = [%-d]\n", 12345);
	printf("[%%+d]     = [%+d]\n", 12345);
	printf("[%% d]     = [% d]\n", 12345);
	printf("[%%#0-+ d] = [%#0-+ d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf("[%#*d]\n", 0, 12345);
	printf("[%0*d]\n", 0, 12345);
	printf("[%-*d]\n", 0, 12345);
	printf("[%+*d]\n", 0, 12345);
	printf("[% *d]\n", 0, 12345);
	printf("[%#0-+ *d]\n", 0, 12345);
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf("[%#1d]\n", 12345);
	printf("[%01d]\n", 12345);
	printf("[%-1d]\n", 12345);
	printf("[%+1d]\n", 12345);
	printf("[% 1d]\n", 12345);
	printf("[%#0-+ 1d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 5 ------\n");
	printf("[%#5d]\n", 12345);
	printf("[%05d]\n", 12345);
	printf("[%-5d]\n", 12345);
	printf("[%+5d]\n", 12345);
	printf("[% 5d]\n", 12345);
	printf("[%#0-+ 5d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf("[%#10d]\n", 12345);
	printf("[%010d]\n", 12345);
	printf("[%-10d]\n", 12345);
	printf("[%+10d]\n", 12345);
	printf("[% 10d]\n", 12345);
	printf("[%#0-+ 10d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf("[%#.0d]\n", 12345);
	printf("[%0.0d]\n", 12345);
	printf("[%-.0d]\n", 12345);
	printf("[%+.0d]\n", 12345);
	printf("[% .0d]\n", 12345);
	printf("[%#0-+ .0d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, precision 4 ------\n");
	printf("[%#.4d]\n", 12345);
	printf("[%0.4d]\n", 12345);
	printf("[%-.4d]\n", 12345);
	printf("[%+.4d]\n", 12345);
	printf("[% .4d]\n", 12345);
	printf("[%#0-+ .4d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf("[%#.5d]\n", 12345);
	printf("[%0.5d]\n", 12345);
	printf("[%-.5d]\n", 12345);
	printf("[%+.5d]\n", 12345);
	printf("[% .5d]\n", 12345);
	printf("[%#0-+ .5d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf("[%#.10d]\n", 12345);
	printf("[%0.10d]\n", 12345);
	printf("[%-.10d]\n", 12345);
	printf("[%+.10d]\n", 12345);
	printf("[% .10d]\n", 12345);
	printf("[%#0-+ .10d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf("[%#10.10d]\n", 12345);
	printf("[%010.10d]\n", 12345);
	printf("[%-10.10d]\n", 12345);
	printf("[%+10.10d]\n", 12345);
	printf("[% 10.10d]\n", 12345);
	printf("[%#0-+ 10.10d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf("[%#10.0d]\n", 12345);
	printf("[%010.0d]\n", 12345);
	printf("[%-10.0d]\n", 12345);
	printf("[%+10.0d]\n", 12345);
	printf("[% 10.0d]\n", 12345);
	printf("[%#0-+ 10.0d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 4 ------\n");
	printf("[%#10.4d]\n", 12345);
	printf("[%010.4d]\n", 12345);
	printf("[%-10.4d]\n", 12345);
	printf("[%+10.4d]\n", 12345);
	printf("[% 10.4d]\n", 12345);
	printf("[%#0-+ 10.4d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 5 ------\n");
	printf("[%#10.5d]\n", 12345);
	printf("[%010.5d]\n", 12345);
	printf("[%-10.5d]\n", 12345);
	printf("[%+10.5d]\n", 12345);
	printf("[% 10.5d]\n", 12345);
	printf("[%#0-+ 10.5d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf("[%#0.10d]\n", 12345);
	printf("[%00.10d]\n", 12345);
	printf("[%-0.10d]\n", 12345);
	printf("[%+0.10d]\n", 12345);
	printf("[% 0.10d]\n", 12345);
	printf("[%#0-+ 0.10d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 4, precision 10 ------\n");
	printf("[%#4.10d]\n", 12345);
	printf("[%04.10d]\n", 12345);
	printf("[%-4.10d]\n", 12345);
	printf("[%+4.10d]\n", 12345);
	printf("[% 4.10d]\n", 12345);
	printf("[%#0-+ 4.10d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 5, precision 10 ------\n");
	printf("[%#5.10d]\n", 12345);
	printf("[%05.10d]\n", 12345);
	printf("[%-5.10d]\n", 12345);
	printf("[%+5.10d]\n", 12345);
	printf("[% 5.10d]\n", 12345);
	printf("[%#0-+ 5.10d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf("[%#20.10d]\n", 12345);
	printf("[%020.10d]\n", 12345);
	printf("[%-20.10d]\n", 12345);
	printf("[%+20.10d]\n", 12345);
	printf("[% 20.10d]\n", 12345);
	printf("[%#0-+ 20.10d]\n", 12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf("[%#10.20d]\n", 12345);
	printf("[%010.20d]\n", 12345);
	printf("[%-10.20d]\n", 12345);
	printf("[%+10.20d]\n", 12345);
	printf("[% 10.20d]\n", 12345);
	printf("[%#0-+ 10.20d]\n", 12345);
	printf("\n");

	printf("\n----- Number is 0 ------\n");
	printf("\n----- check flags ------\n");
	printf("[%%#d]     = [%#d]\n", 0);
	printf("[%%0d]     = [%0d]\n", 0);
	printf("[%%-d]     = [%-d]\n", 0);
	printf("[%%+d]     = [%+d]\n", 0);
	printf("[%% d]     = [% d]\n", 0);
	printf("[%%#0-+ d] = [%#0-+ d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf("[%#*d]\n", 0, 0);
	printf("[%0*d]\n", 0, 0);
	printf("[%-*d]\n", 0, 0);
	printf("[%+*d]\n", 0, 0);
	printf("[% *d]\n", 0, 0);
	printf("[%#0-+ *d]\n", 0, 0);
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf("[%#1d]\n", 0);
	printf("[%01d]\n", 0);
	printf("[%-1d]\n", 0);
	printf("[%+1d]\n", 0);
	printf("[% 1d]\n", 0);
	printf("[%#0-+ 1d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf("[%#10d]\n", 0);
	printf("[%010d]\n", 0);
	printf("[%-10d]\n", 0);
	printf("[%+10d]\n", 0);
	printf("[% 10d]\n", 0);
	printf("[%#0-+ 10d]\n", 0);
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf("[%#.0d]\n", 0);
	printf("[%0.0d]\n", 0);
	printf("[%-.0d]\n", 0);
	printf("[%+.0d]\n", 0);
	printf("[% .0d]\n", 0);
	printf("[%#0-+ .0d]\n", 0);
	printf("\n");

	printf("\n----- check flags, precision 4 ------\n");
	printf("[%#.4d]\n", 0);
	printf("[%0.4d]\n", 0);
	printf("[%-.4d]\n", 0);
	printf("[%+.4d]\n", 0);
	printf("[% .4d]\n", 0);
	printf("[%#0-+ .4d]\n", 0);
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf("[%#.10d]\n", 0);
	printf("[%0.10d]\n", 0);
	printf("[%-.10d]\n", 0);
	printf("[%+.10d]\n", 0);
	printf("[% .10d]\n", 0);
	printf("[%#0-+ .10d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf("[%#10.10d]\n", 0);
	printf("[%010.10d]\n", 0);
	printf("[%-10.10d]\n", 0);
	printf("[%+10.10d]\n", 0);
	printf("[% 10.10d]\n", 0);
	printf("[%#0-+ 10.10d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 10, precision 0 ------\n");
	printf("[%#10.0d]\n", 0);
	printf("[%010.0d]\n", 0);
	printf("[%-10.0d]\n", 0);
	printf("[%+10.0d]\n", 0);
	printf("[% 10.0d]\n", 0);
	printf("[%#0-+ 10.0d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 10, precision 1 ------\n");
	printf("[%#10.1d]\n", 0);
	printf("[%010.1d]\n", 0);
	printf("[%-10.1d]\n", 0);
	printf("[%+10.1d]\n", 0);
	printf("[% 10.1d]\n", 0);
	printf("[%#0-+ 10.1d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 0, precision 10 ------\n");
	printf("[%#0.10d]\n", 0);
	printf("[%00.10d]\n", 0);
	printf("[%-0.10d]\n", 0);
	printf("[%+0.10d]\n", 0);
	printf("[% 0.10d]\n", 0);
	printf("[%#0-+ 0.10d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 1, precision 10 ------\n");
	printf("[%#1.10d]\n", 0);
	printf("[%01.10d]\n", 0);
	printf("[%-1.10d]\n", 0);
	printf("[%+1.10d]\n", 0);
	printf("[% 1.10d]\n", 0);
	printf("[%#0-+ 1.10d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf("[%#20.10d]\n", 0);
	printf("[%020.10d]\n", 0);
	printf("[%-20.10d]\n", 0);
	printf("[%+20.10d]\n", 0);
	printf("[% 20.10d]\n", 0);
	printf("[%#0-+ 20.10d]\n", 0);
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf("[%#10.20d]\n", 0);
	printf("[%010.20d]\n", 0);
	printf("[%-10.20d]\n", 0);
	printf("[%+10.20d]\n", 0);
	printf("[% 10.20d]\n", 0);
	printf("[%#0-+ 10.20d]\n", 0);
	printf("\n");

	printf("\n----- Number is -12345 ------\n");
	printf("\n----- check flags ------\n");
	printf("[%%#d]     = [%#d]\n", -12345);
	printf("[%%0d]     = [%0d]\n", -12345);
	printf("[%%-d]     = [%-d]\n", -12345);
	printf("[%%+d]     = [%+d]\n", -12345);
	printf("[%% d]     = [% d]\n", -12345);
	printf("[%%#0-+ d] = [%#0-+ d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf("[%#*d]\n", 0, -12345);
	printf("[%0*d]\n", 0, -12345);
	printf("[%-*d]\n", 0, -12345);
	printf("[%+*d]\n", 0, -12345);
	printf("[% *d]\n", 0, -12345);
	printf("[%#0-+ *d]\n", 0, -12345);
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf("[%#1d]\n", -12345);
	printf("[%01d]\n", -12345);
	printf("[%-1d]\n", -12345);
	printf("[%+1d]\n", -12345);
	printf("[% 1d]\n", -12345);
	printf("[%#0-+ 1d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 6 ------\n");
	printf("[%#6d]\n", -12345);
	printf("[%06d]\n", -12345);
	printf("[%-6d]\n", -12345);
	printf("[%+6d]\n", -12345);
	printf("[% 6d]\n", -12345);
	printf("[%#0-+ 6d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf("[%#10d]\n", -12345);
	printf("[%010d]\n", -12345);
	printf("[%-10d]\n", -12345);
	printf("[%+10d]\n", -12345);
	printf("[% 10d]\n", -12345);
	printf("[%#0-+ 10d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf("[%#.0d]\n", -12345);
	printf("[%0.0d]\n", -12345);
	printf("[%-.0d]\n", -12345);
	printf("[%+.0d]\n", -12345);
	printf("[% .0d]\n", -12345);
	printf("[%#0-+ .0d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, precision 4 ------\n");
	printf("[%#.4d]\n", -12345);
	printf("[%0.4d]\n", -12345);
	printf("[%-.4d]\n", -12345);
	printf("[%+.4d]\n", -12345);
	printf("[% .4d]\n", -12345);
	printf("[%#0-+ .4d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, precision 5 ------\n");
	printf("[%#.5d]\n", -12345);
	printf("[%0.5d]\n", -12345);
	printf("[%-.5d]\n", -12345);
	printf("[%+.5d]\n", -12345);
	printf("[% .5d]\n", -12345);
	printf("[%#0-+ .5d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, precision 6 ------\n");
	printf("[%#.6d]\n", -12345);
	printf("[%0.6d]\n", -12345);
	printf("[%-.6d]\n", -12345);
	printf("[%+.6d]\n", -12345);
	printf("[% .6d]\n", -12345);
	printf("[%#0-+ .6d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf("[%#.10d]\n", -12345);
	printf("[%0.10d]\n", -12345);
	printf("[%-.10d]\n", -12345);
	printf("[%+.10d]\n", -12345);
	printf("[% .10d]\n", -12345);
	printf("[%#0-+ .10d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf("[%#10.10d]\n", -12345);
	printf("[%010.10d]\n", -12345);
	printf("[%-10.10d]\n", -12345);
	printf("[%+10.10d]\n", -12345);
	printf("[% 10.10d]\n", -12345);
	printf("[%#0-+ 10.10d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 4 ------\n");
	printf("[%#10.4d]\n", -12345);
	printf("[%010.4d]\n", -12345);
	printf("[%-10.4d]\n", -12345);
	printf("[%+10.4d]\n", -12345);
	printf("[% 10.4d]\n", -12345);
	printf("[%#0-+ 10.4d]\n", -12345);
	printf("\n");
	
	printf("\n----- check flags, width 10, precision 5 ------\n");
	printf("[%#10.5d]\n", -12345);
	printf("[%010.5d]\n", -12345);
	printf("[%-10.5d]\n", -12345);
	printf("[%+10.5d]\n", -12345);
	printf("[% 10.5d]\n", -12345);
	printf("[%#0-+ 10.5d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 6 ------\n");
	printf("[%#10.6d]\n", -12345);
	printf("[%010.6d]\n", -12345);
	printf("[%-10.6d]\n", -12345);
	printf("[%+10.6d]\n", -12345);
	printf("[% 10.6d]\n", -12345);
	printf("[%#0-+ 10.6d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 4, precision 10 ------\n");
	printf("[%#4.10d]\n", -12345);
	printf("[%04.10d]\n", -12345);
	printf("[%-4.10d]\n", -12345);
	printf("[%+4.10d]\n", -12345);
	printf("[% 4.10d]\n", -12345);
	printf("[%#0-+ 4.10d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 5, precision 10 ------\n");
	printf("[%#5.10d]\n", -12345);
	printf("[%05.10d]\n", -12345);
	printf("[%-5.10d]\n", -12345);
	printf("[%+5.10d]\n", -12345);
	printf("[% 5.10d]\n", -12345);
	printf("[%#0-+ 5.10d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 6, precision 10 ------\n");
	printf("[%#6.10d]\n", -12345);
	printf("[%06.10d]\n", -12345);
	printf("[%-6.10d]\n", -12345);
	printf("[%+6.10d]\n", -12345);
	printf("[% 6.10d]\n", -12345);
	printf("[%#0-+ 6.10d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 20, precision 10 ------\n");
	printf("[%#20.10d]\n", -12345);
	printf("[%020.10d]\n", -12345);
	printf("[%-20.10d]\n", -12345);
	printf("[%+20.10d]\n", -12345);
	printf("[% 20.10d]\n", -12345);
	printf("[%#0-+ 20.10d]\n", -12345);
	printf("\n");

	printf("\n----- check flags, width 10, precision 20 ------\n");
	printf("[%#10.20d]\n", -12345);
	printf("[%010.20d]\n", -12345);
	printf("[%-10.20d]\n", -12345);
	printf("[%+10.20d]\n", -12345);
	printf("[% 10.20d]\n", -12345);
	printf("[%#0-+ 10.20d]\n", -12345);
	printf("\n");

	return (0);
}
