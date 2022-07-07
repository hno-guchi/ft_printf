# CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I../includes

c_leaks: fclean
	gcc $(INCLUDE) ./c/main.c ./c/official_printf.c ./c/my_printf.c -L../ -lftprintf
	./a.out my leaks > my.txt
	./a.out official leaks > official.txt
	diff my.txt official.txt

c_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./c/main.c ./c/official_printf.c ./c/my_printf.c -L../ -lftprintf
	./a.out my > my.txt
	./a.out official > official.txt
	diff my.txt official.txt

s_leaks: fclean
	gcc $(INCLUDE) ./s/main.c ./s/official_printf.c ./s/my_printf.c -L../ -lftprintf
	./a.out my leaks > my.txt
	./a.out official leaks > official.txt
	diff my.txt official.txt

s_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./s/main.c ./s/official_printf.c ./s/my_printf.c -L../ -lftprintf
	./a.out my > my.txt
	./a.out official > official.txt
	diff my.txt official.txt

d_leaks: fclean
	gcc $(INCLUDE) ./d/main.c ./d/official_printf.c ./d/my_printf.c -L../ -lftprintf
	./a.out my leaks > my.txt
	./a.out official leaks > official.txt
	diff my.txt official.txt

d_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./d/main.c ./d/official_printf.c ./d/my_printf.c -L../ -lftprintf
	./a.out my > my.txt
	./a.out official > official.txt
	diff my.txt official.txt

u_leaks: fclean
	gcc $(INCLUDE) ./u/main.c ./u/official_printf.c ./u/my_printf.c -L../ -lftprintf
	./a.out my leaks > my.txt
	./a.out official leaks > official.txt
	diff my.txt official.txt

u_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./u/main.c ./u/official_printf.c ./u/my_printf.c -L../ -lftprintf
	./a.out my > my.txt
	./a.out official > official.txt
	diff my.txt official.txt

p_leaks: fclean
	gcc $(INCLUDE) ./p/main.c ./p/official_printf.c ./p/my_printf.c -L../ -lftprintf
	./a.out my leaks > my.txt
	./a.out official leaks > official.txt
	diff my.txt official.txt

p_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./p/main.c ./p/official_printf.c ./p/my_printf.c -L../ -lftprintf
	./a.out my > my.txt
	./a.out official > official.txt
	diff my.txt official.txt

x_leaks: fclean
	gcc $(INCLUDE) ./x/main.c ./x/official_printf.c ./x/my_printf.c -L../ -lftprintf
	./a.out my leaks > my.txt
	./a.out official leaks > official.txt
	diff my.txt official.txt

x_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./x/main.c ./x/official_printf.c ./x/my_printf.c -L../ -lftprintf
	./a.out my > my.txt
	./a.out official > official.txt
	diff my.txt official.txt

X_leaks: fclean
	gcc $(INCLUDE) ./large_x/main.c ./large_x/official_printf.c ./large_x/my_printf.c -L../ -lftprintf
	./a.out my leaks > my.txt
	./a.out official leaks > official.txt
	diff my.txt official.txt

X_fsanitize: fclean
	gcc -g -fsanitize=address $(INCLUDE) ./large_x/main.c ./large_x/official_printf.c ./large_x/my_printf.c -L../ -lftprintf
	./a.out my > my.txt
	./a.out official > official.txt
	diff my.txt official.txt

vdiff: my.txt official.txt
	vimdiff $^

clean:
	$(RM) my.txt official.txt
fclean: clean
	$(RM) -r a.out a.out.dSYM
.PHONY: c_leaks c_fsanitize s_leaks s_fsanitize d_leaks d_fsanitize u_leaks u_fsanitize p_leaks p_fsanitize x_leaks x_fsanitize X_leaks X_fsanitize vdiff clean fclean
