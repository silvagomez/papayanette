# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 10:20:21 by dsilva-g          #+#    #+#              #
#    Updated: 2023/06/06 10:55:05 by dsilva-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
GREEN = \033[92m
BLUE = \033[94m
MAGENTA = \033[95m
WHITE = \033[37m

NAME = get_next_line.a

AR = ar
ARFLAGS = crs

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES = get_next_line.h

INCLUDE_BONUS = get_next_line_bonus.h

SRCS = \
	   get_next_line.c \
	   get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

SRC_BONUS = \
			get_next_line_bonus.c \
			get_next_line_utils_bonus.c

OBJS_BONUS = $(SRC_BONUS:.c=.o)

%.o: %.c $(INCLUDE_BONUS) 
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(BLUE)"
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(MAGENTA)Files and $(NAME)$(GREEN) compiled!$(WHITE)"

all: $(NAME)

bonus: $(OBJS_BONUS)
	@echo "$(BLUE)"
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)
	@echo "$(MAGENTA)Files and $(NAME)$(GREEN) compiled!$(WHITE)"

clean:
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)
	@echo "$(MAGENTA)Removing files... $(GREEN)done!$(WHITE)"

fclean: clean
	$(RM) $(RMFLAG) $(NAME)
	@echo "$(MAGENTA)Removing $(NAME) $(GREEN)done!$(WHITE)"

re: fclean all

run: all 
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) $(NAME) main.c && ./a.out

buf1: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) -D BUFFER_SIZE=1 $(NAME) main.c && ./a.out


buf6: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) -D BUFFER_SIZE=6 $(NAME) main.c && ./a.out


buf42: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) -D BUFFER_SIZE=42 $(NAME) main.c && ./a.out

buf2k: all
	@echo "$(GREEN)Starting...!$(WHITE)"
	$(CC) $(CFLAGS) -D BUFFER_SIZE=2048 $(NAME) main.c && ./a.out


.PHONY: all clean fclean re run
