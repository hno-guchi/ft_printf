# CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I../includes

d_leaks: fclean
	gcc $(INCLUDE) ./d/ft_leaks.c -L../ -lftprintf
	./a.out > ftp.txt
	gcc ./d/leaks.c
	./a.out > p.txt
	diff ftp.txt p.txt

d_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./d/ft_fsanitize.c -L../ -lftprintf
	./a.out > ftp.txt
	gcc -g -fsanitize=address ./d/fsanitize.c
	./a.out > p.txt
	diff ftp.txt p.txt

p_leaks: fclean
	gcc $(INCLUDE) ./p/ft_leaks.c -L../ -lftprintf
	./a.out > ftp.txt
	gcc ./p/leaks.c
	./a.out > p.txt
	diff ftp.txt p.txt

p_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./p/ft_fsanitize.c -L../ -lftprintf
	./a.out > ftp.txt
	gcc -g -fsanitize=address ./p/fsanitize.c
	./a.out > p.txt
	diff ftp.txt p.txt

vdiff: ftp.txt p.txt
	vimdiff $^

clean:
	$(RM) ftp.txt p.txt
fclean: clean
	$(RM) a.out
.PHONY: d vdiff clean fclean
