NAME = libftprintf.a

SRCS = ft_printf.c \
	ftp_print_count.c \
	ftp_puts_cnt.c ftp_puts_not_conversion_count.c \
	ftp_prs_fmt_count.c ftp_is_flags_count.c ftp_prs_wth_count.c ftp_prs_prec_count.c \
	ftp_cmd_puts.c \
	ftp_conv_c.c ftp_conv_percent.c ftp_conv_s.c ftp_conv_p.c \
	ftp_conv_d_i.c ftp_conv_u.c ftp_conv_x.c \
	ftp_check_len_count.c ftp_adjustment_info_bit_flag.c \
	ftp_puts_c_s.c ftp_puts_d_i.c \
	ftp_put_flags_plus_space.c ftp_puts_character.c \
	ftp_atoi_count.c ftp_itoa_count.c ftp_ull_itoa_base.c \
	ftp_str_tolower.c ftp_free_null.c
	# ftp_strndup.c ftp_strnjoin.c ftp_puts_conv_only.c ftp_puts_has_width_only.c

# BONUS_SRCS = bonus.c
OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))
# BONUS_OBJS = $(addprefix bonus/, $(BONUS_SRCS:%.c=%.o))

LIBFT_DIR = libft
LIBFT_NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./includes

# ifdef WITH_BONUS
# 	OBJS += $(BONUS_OBJS)
# endif

.c.o:
		$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
		make -C $(LIBFT_DIR)
		cp $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
		ar rcs $@ $^

all:	$(NAME)

bonus: all
#	make WITH_BONUS=1

clean:
		$(RM) $(OBJS) # $(BONUS_OBJS)
		make clean -C $(LIBFT_DIR)
fclean:	clean
		$(RM) $(NAME)
		make fclean -C $(LIBFT_DIR)
re:	fclean all

.PHONY: bonus all clean fclean re
