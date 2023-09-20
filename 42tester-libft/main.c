/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:38 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/09/20 22:15:29 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "papaya_lib"

void	papaya(void)
{
	printf(BLUE"/------------------------------------------------------------------------------\\\n"RESET);
	printf(BLUE"|                                                                              "BLUE"|\n"RESET);
	printf(BLUE"| "RED"** ******      ****** **  ** ******      ****** **  ***      ***   ****** ** "BLUE"|\n"RESET);
	printf(BLUE"| "RED"***********  ***********  ***********  ***********   ***    ***  *********** "BLUE"|\n"RESET);
	printf(BLUE"| "RED"***     ***  ***     ***  ***     ***  ***     ***    ***  ***   ***     *** "BLUE"|\n"RESET);
	printf(BLUE"| "RED2"***     ***  ***     ***  ***     ***  ***     ***     ******    ***     *** "BLUE"|\n"RESET);
	printf(BLUE"| "RED2"***********  ***********  ***********  ***********      ****     *********** "BLUE"|\n"RESET);
	printf(BLUE"| "RED2"*********      ****** **  *********      ****** **      ***        ****** ** "BLUE"|\n"RESET);
	printf(BLUE"| "RED2"***                       ***                          ***                   "BLUE"|\n"RESET);
	printf(BLUE"| "RED2"***                       ***                         ***    "RED"By: "YELLOW"@silvagomez "BLUE"|\n"RESET);
	printf(BLUE"|                                                                              "BLUE"|\n"RESET);
	printf(BLUE"|            "RESET"Welcome to "YELLOW"papayanette 0.1"RESET", a simple 42 project tester            "BLUE"|\n"RESET);
	printf(BLUE"|                                                                              "BLUE"|\n"RESET);
	printf(BLUE"\\------------------------------------------------------------------------------/\n"RESET);
}

void	ft_true(unsigned int n)
{
	printf(GREEN "%d.OK " RESET, n);
}

void ft_false(unsigned int n)
{
	printf(RED "%d.KO " RESET, n);
}

int main(void)
{
	printf("\n");
	papaya();
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	printf(BLUE "\nTesting second part...\n" RESET);
    test_ft_substr();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_split();
    test_ft_itoa();
    test_ft_strmapi();
    test_ft_striteri();
    test_ft_put_fd();
	printf(BLUE "\nTesting bonus part...\n" RESET);
    test_lst();
}
