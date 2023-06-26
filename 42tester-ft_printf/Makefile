# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 10:20:21 by dsilva-g          #+#    #+#              #
#    Updated: 2023/06/26 12:16:58 by dsilva-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
GREEN = \033[92m
BLUE = \033[94m
MAGENTA = \033[95m
WHITE = \033[97m

NAME = libftprintf.a

AR = ar
ARFLAGS = crs

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES = ft_printf.h

SRCS = 	\
		ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_nbr.c \
		ft_print_ptr.c \
		ft_print_unbr.c \
		ft_print_hex.c


OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@echo "$(BLUE)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(MAGENTA)Files and $(NAME)$(GREEN) compiled!$(WHITE)"

all: $(NAME)

%.o: %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)
	@echo "$(MAGENTA)Removing files... $(GREEN)done!$(WHITE)"

fclean: clean
	@$(RM) $(RMFLAG) $(NAME)
	@echo "$(MAGENTA)Removing $(NAME) $(GREEN)done!$(WHITE)"

re: fclean all

run: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "all"

test_c: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "1"

test_s: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "2"

test_d: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "3"

test_i: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "4"

test_p: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "5"

test_u: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "6"

test_x: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "7"

test_X: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out "8"

test_per: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	gcc $(FLAGS) $(NAME) main.c && ./a.out "9"

test_crazy: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	gcc $(NAME) crazy.c && ./a.out "10"

.PHONY: all clean fclean re \
	run test_c test_s test_d test_i test_p test_u test_x test_X test_per
