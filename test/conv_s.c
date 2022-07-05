#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
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

	printf("\n----- check flags ------\n");
	printf("[%%#s]     = [%#s]\n", "string");
	printf("[%%0s]     = [%0s]\n", "string");
	printf("[%%-s]     = [%-s]\n", "string");
	printf("[%%+s]     = [%+s]\n", "string");
	printf("[%% s]     = [% s]\n", "string");
	printf("[%%#0-+ s] = [%#0-+ s]\n", "string");
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf("[%#*s]\n", 0, "string");
	printf("[%0*s]\n", 0, "string");
	printf("[%-*s]\n", 0, "string");
	printf("[%+*s]\n", 0, "string");
	printf("[% *s]\n", 0, "string");
	printf("[%#0-+ *s]\n", 0, "string");
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf("[%#1s]\n", "string");
	printf("[%01s]\n", "string");
	printf("[%-1s]\n", "string");
	printf("[%+1s]\n", "string");
	printf("[% 1s]\n", "string");
	printf("[%#0-+ 1s]\n", "string");
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf("[%#10s]\n", "string");
	printf("[%010s]\n", "string");
	printf("[%-10s]\n", "string");
	printf("[%+10s]\n", "string");
	printf("[% 10s]\n", "string");
	printf("[%#0-+ 10s]\n", "string");
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf("[%#.0s]\n", "string");
	printf("[%0.0s]\n", "string");
	printf("[%-.0s]\n", "string");
	printf("[%+.0s]\n", "string");
	printf("[% .0s]\n", "string");
	printf("[%#0-+ .0s]\n", "string");
	printf("\n");

	printf("\n----- check flags, precision 4 ------\n");
	printf("[%#.4s]\n", "string");
	printf("[%0.4s]\n", "string");
	printf("[%-.4s]\n", "string");
	printf("[%+.4s]\n", "string");
	printf("[% .4s]\n", "string");
	printf("[%#0-+ .4s]\n", "string");
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf("[%#.10s]\n", "string");
	printf("[%0.10s]\n", "string");
	printf("[%-.10s]\n", "string");
	printf("[%+.10s]\n", "string");
	printf("[% .10s]\n", "string");
	printf("[%#0-+ .10s]\n", "string");
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf("[%#10.10s]\n", "string");
	printf("[%010.10s]\n", "string");
	printf("[%-10.10s]\n", "string");
	printf("[%+10.10s]\n", "string");
	printf("[% 10.10s]\n", "string");
	printf("[%#0-+ 10.10s]\n", "string");
	printf("\n");

	printf("\n----- check flags, width 10, precision 4 ------\n");
	printf("[%#10.4s]\n", "string");
	printf("[%010.4s]\n", "string");
	printf("[%-10.4s]\n", "string");
	printf("[%+10.4s]\n", "string");
	printf("[% 10.4s]\n", "string");
	printf("[%#0-+ 10.4s]\n", "string");
	printf("\n");

	printf("\n----- check flags, width 4, precision 10 ------\n");
	printf("[%#4.10s]\n", "string");
	printf("[%04.10s]\n", "string");
	printf("[%-4.10s]\n", "string");
	printf("[%+4.10s]\n", "string");
	printf("[% 4.10s]\n", "string");
	printf("[%#0-+ 4.10s]\n", "string");
	printf("\n");

	printf("\n----- String is NULL ------\n");
	printf("\n----- check flags ------\n");
	printf("[%%#s]     = [%#s]\n", NULL);
	printf("[%%0s]     = [%0s]\n", NULL);
	printf("[%%-s]     = [%-s]\n", NULL);
	printf("[%%+s]     = [%+s]\n", NULL);
	printf("[%% s]     = [% s]\n", NULL);
	printf("[%%#0-+ s] = [%#0-+ s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, width * = 0 ------\n");
	printf("[%#*s]\n", 0, NULL);
	printf("[%0*s]\n", 0, NULL);
	printf("[%-*s]\n", 0, NULL);
	printf("[%+*s]\n", 0, NULL);
	printf("[% *s]\n", 0, NULL);
	printf("[%#0-+ *s]\n", 0, NULL);
	printf("\n");

	printf("\n----- check flags, width 1 ------\n");
	printf("[%#1s]\n", NULL);
	printf("[%01s]\n", NULL);
	printf("[%-1s]\n", NULL);
	printf("[%+1s]\n", NULL);
	printf("[% 1s]\n", NULL);
	printf("[%#0-+ 1s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, width 10 ------\n");
	printf("[%#10s]\n", NULL);
	printf("[%010s]\n", NULL);
	printf("[%-10s]\n", NULL);
	printf("[%+10s]\n", NULL);
	printf("[% 10s]\n", NULL);
	printf("[%#0-+ 10s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, precision 0 ------\n");
	printf("[%#.0s]\n", NULL);
	printf("[%0.0s]\n", NULL);
	printf("[%-.0s]\n", NULL);
	printf("[%+.0s]\n", NULL);
	printf("[% .0s]\n", NULL);
	printf("[%#0-+ .0s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, precision 4 ------\n");
	printf("[%#.4s]\n", NULL);
	printf("[%0.4s]\n", NULL);
	printf("[%-.4s]\n", NULL);
	printf("[%+.4s]\n", NULL);
	printf("[% .4s]\n", NULL);
	printf("[%#0-+ .4s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, precision 10 ------\n");
	printf("[%#.10s]\n", NULL);
	printf("[%0.10s]\n", NULL);
	printf("[%-.10s]\n", NULL);
	printf("[%+.10s]\n", NULL);
	printf("[% .10s]\n", NULL);
	printf("[%#0-+ .10s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, width 10, precision 10 ------\n");
	printf("[%#10.10s]\n", NULL);
	printf("[%010.10s]\n", NULL);
	printf("[%-10.10s]\n", NULL);
	printf("[%+10.10s]\n", NULL);
	printf("[% 10.10s]\n", NULL);
	printf("[%#0-+ 10.10s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, width 10, precision 4 ------\n");
	printf("[%#10.4s]\n", NULL);
	printf("[%010.4s]\n", NULL);
	printf("[%-10.4s]\n", NULL);
	printf("[%+10.4s]\n", NULL);
	printf("[% 10.4s]\n", NULL);
	printf("[%#0-+ 10.4s]\n", NULL);
	printf("\n");

	printf("\n----- check flags, width 4, precision 10 ------\n");
	printf("[%#4.10s]\n", NULL);
	printf("[%04.10s]\n", NULL);
	printf("[%-4.10s]\n", NULL);
	printf("[%+4.10s]\n", NULL);
	printf("[% 4.10s]\n", NULL);
	printf("[%#0-+ 4.10s]\n", NULL);
	printf("\n");

	system("leaks -q a.out");
	return (0);
}
