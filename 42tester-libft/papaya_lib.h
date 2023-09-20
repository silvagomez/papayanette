#ifndef PAPAYA_LIB_H
# define PAPATA_LIB_H

# include <stdio.h>
# include <assert.h>
# include <ctype.h>
# include <string.h>

// lib of the 42 student
# include "libft.h"

# define RED		"\033[91m"
# define GREEN		"\033[92m"
# define YELLOW		"\033[93m"
# define BLUE		"\033[94m"
# define MAGENTA	"\033[95m"
# define RESET		"\033[0m"


void	test_ft_isalpha();
void	test_ft_isdigit();
void	test_ft_isalnum();
void	test_ft_isascii();
void	test_ft_isprint();
void	test_ft_strlen();
void	test_ft_memset();
void	test_ft_bzero();
void	test_ft_memcpy();
void	test_ft_memmove();
void	test_ft_strlcpy();
void	test_ft_strlcat();
void	test_ft_toupper();
void	test_ft_tolower();
void	test_ft_strchr();
void	test_ft_strrchr();
void	test_ft_strncmp();
void	test_ft_memchr();
void	test_ft_memcmp();
void	test_ft_strnstr();
void	test_ft_atoi();
void	test_ft_calloc();
void	test_ft_strdup();
void	test_ft_substr();
void	test_ft_strjoin();
void	test_ft_strtrim();
void	test_ft_split();
void	test_ft_itoa();
void	test_ft_strmapi();
void	test_ft_striteri();
void	test_ft_put_fd();

#endif
