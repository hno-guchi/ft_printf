NAME = libftprintf.a

SRCS = ft_printf.c \
	ftp_scanning_count.c \
	ftp_chk_has.c ftp_puts_not_conversion_count.c \
	ftp_prs_fmt_count.c ftp_is_flags_count.c ftp_prs_wth_count.c ftp_prs_prec_count.c \
	ftp_slt_conv.c \
	ftp_conv_c.c ftp_conv_percent.c ftp_conv_s.c ftp_conv_p.c \
	ftp_conv_d_i.c ftp_conv_u.c ftp_conv_x.c \
	ftp_check_len_cnt.c \
	ftp_puts_c_s.c ftp_puts_d_i.c ftp_puts_p.c ftp_puts_u.c\
	ftp_put_flags_plus_space.c ftp_puts_character.c \
	ftp_atoi_count.c ftp_itoa_count.c ftp_ull_itoa_base.c \
	ftp_str_tolower.c ftp_free_null.c
	# ftp_strndup.c ftp_strnjoin.c ftp_puts_conv_only.c ftp_puts_has_width_only.c

OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))

LIBFT_DIR = libft
LIBFT_NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./includes

.c.o:
		$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
		make -C $(LIBFT_DIR)
		cp $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
		ar rcs $@ $^

all:	$(NAME)

bonus: all

clean:
		$(RM) $(OBJS)
		make clean -C $(LIBFT_DIR)
fclean:
		$(RM) $(OBJS)
		$(RM) $(NAME)
		make fclean -C $(LIBFT_DIR)
re:	fclean all

.PHONY: bonus all clean fclean re
