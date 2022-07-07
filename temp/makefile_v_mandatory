NAME = libftprintf.a

SRCS = ft_printf.c \
	ftp_outputstr_count.c ftp_check_convs.c \
	ftp_conv_c.c ftp_conv_s.c ftp_conv_p.c ftp_conv_d_i.c ftp_conv_u.c ftp_conv_x.c \
	ftp_strndup.c ftp_strnjoin.c \
	ftp_itoa_count.c ftp_ull_itoa_base.c \
	ftp_str_tolower.c ftp_free_null.c

OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))

LIBFT_DIR = libft
LIBFT_NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./includes

.c.o:
		$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
		@make -C $(LIBFT_DIR)
		@cp $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
		@ar rcs $@ $^

all:	$(NAME)

clean:
		@$(RM) $(OBJS)
		@make clean -C $(LIBFT_DIR)
fclean:	clean
		@$(RM) $(NAME)
		@make fclean -C $(LIBFT_DIR)
re:	fclean all

.PHONY: all clean fclean re
