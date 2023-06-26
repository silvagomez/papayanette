/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crazy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:19:31 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/06/26 13:22:42 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

#define BLACK	"\033[90m"
#define RED		"\033[91m"
#define RED2	"\033[31m"
#define GREEN 	"\033[92m"
#define YELLOW	"\033[93m"
#define BLUE	"\033[94m"
#define MAGENTA	"\033[95m"
#define RESET	"\033[0m"

void	papaya()
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
void	test_crazy()
{
	int	num1;
	int	num2;

	printf(BLUE"\nTest %%crazy\n"RESET);
	
	printf("Original  ");
	num1 = printf("%d", "abc");
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%d", "abc");
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%k");
	printf("\t\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%k");
	printf("\t\tTotal: %d\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%");
	printf("\t\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%");
	printf("\t\tTotal: %d\n\n", num2);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		papaya();
		if (strcmp(argv[1], "10") == 0)
			test_crazy();
	}
	//papaya();
	return (0);
}
