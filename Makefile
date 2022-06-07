NAME = libftprintf.a

SRCS = ft_printf.c ft_strlen_s.c
BONUS_SRCS = bonus.c
OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))
BONUS_OBJS = $(addprefix bonus/, $(BONUS_SRCS:%.c=%.o))

LIBFT_DIR = libft
LIBFT_NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./includes

ifdef WITH_BONUS
	OBJS += $(BONUS_OBJS)
endif

.c.o:
		$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
		@make -C $(LIBFT_DIR)
		@cp $(LIBFT_DIR)/$(LIBFT_NAME) ./
		@mv $(LIBFT_NAME) $(NAME)
		@ar rcs $@ $^

all:	$(NAME)

bonus:
	make WITH_BONUS=1

clean:
		@$(RM) $(OBJS) $(BONUS_OBJS)
		@make clean -C $(LIBFT_DIR)
fclean:	clean
		@$(RM) $(NAME)
		@make fclean -C $(LIBFT_DIR)
re:	fclean all

.PHONY: bonus all clean fclean re
