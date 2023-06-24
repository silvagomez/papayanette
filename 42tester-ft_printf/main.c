/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:09:59 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/06/24 01:42:10 by dsilva-g         ###   ########.fr       */
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

/*

********************************************************************************
*                                                                              *
* ·· ······      ······ ··  ·· ······      ······ ··  ···      ···   ······ ·· *
* ···········  ···········  ···········  ···········   ···    ···  ··········· *
* ···     ···  ···     ···  ···     ···  ···     ···    ···  ···   ···     ··· *
* ···     ···  ···     ···  ···     ···  ···     ···     ······    ···     ··· *
* ···········  ···········  ···········  ···········      ····     ··········· *
* ·········      ······ ··  ·········     ······· ··      ···        ······ ·· *
* ···                       ···                          ···                   *
* ···                       ···                         ···    By: @silvagomez *
*                                                                              *
*            Welcome to papayanette 0.0, a simple 42 project tester            *
*                                                                              *
********************************************************************************
/------------------------------------------------------------------------------\
|                                                                              |
| ** ******      ****** **  ** ******      ****** **  ***      ***   ****** ** |
| ***********  ***********  ***********  ***********   ***    ***  *********** |
| ***     ***  ***     ***  ***     ***  ***     ***    ***  ***   ***     *** |
| ***     ***  ***     ***  ***     ***  ***     ***     ******    ***     *** |
| ***********  ***********  ***********  ***********      ****     *********** |
| *********      ****** **  *********      ****** **      ***        ****** ** |
| ***                       ***                          ***                   |
| ***                       ***                         ***    By: @silvagomez |
|                                                                              |
|            Welcome to papayanette 0.0, a simple 42 project tester            |
|                                                                              |
\------------------------------------------------------------------------------/

********************************************************************************
*                                                                              *
*                        _                                                     *
*                       (((                                                    *
*                      ((/((      Welcome to PAPAYAnette 0.0,                  *
*                     ((/·/((     a simple 42 project tester.                  *
*                    (((///·((                                                 *
*                    ((/·//(((                By: @silvagomez                  *
*                     (((((((                                                  *
*                       ⎺⎺⎺                                                    *
*                                                                              *
********************************************************************************

*/

void	papaya()
{
	/*
	
    printf("    (((\n");
    printf("   ((/((\n");
    printf("  ((/·/((\tPAPAYA TESTS\n");
    printf(" ((////·((\tBy : @silvagomez\n");
    printf(" ((/·///((\n");
    printf("  ((((((\n");
   
    printf(RED"\t     _\n");
    printf(RED"\t    (((\n");
    printf(RED"\t   (("YELLOW"/"RED"((\n");
    printf(RED"\t  (("YELLOW"/"BLACK"*"YELLOW"/"RED"((\tPAPAYAnette \n");
    printf(RED"\t ((("YELLOW"///"BLACK"*"RED"((\tBy:"YELLOW" @silvagomez\n");
    printf(RED"\t (("YELLOW"/"BLACK"*"YELLOW"//"RED"(((\n");
    num=printf(RED"\t  (((((((\n");
    printf(RED"\t    ⎺⎺⎺\n"RESET);

	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("* ·· ······      ······ ··  ·· ······      ······ ··  ···      ···   ······ ·· *\n");
	printf("* ···········  ···········  ···········  ···········   ···    ···  ··········· *\n");
	printf("* ···     ···  ···     ···  ···     ···  ···     ···    ···  ···   ···     ··· *\n");
	printf("* ···     ···  ···     ···  ···     ···  ···     ···     ······    ···     ··· *\n");
	printf("* ···········  ···········  ···········  ···········      ····     ··········· *\n");
	printf("* ·········      ······ ··  ·········     ······· ··      ···        ······ ·· *\n");
	printf("* ···                       ···                          ···                   *\n");
	printf("* ···                       ···                         ···    By: @silvagomez *\n");
	printf("*                                                                              *\n");
	printf("*            Welcome to papayanette 0.0, a simple 42 project tester            *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                        _                                                     *\n");
	printf("*                       (((                                                    *\n");
	printf("*                      ((/((      Welcome to PAPAYAnette 0.0,                  *\n");
	printf("*                     ((/·/((     a simple 42 project tester.                  *\n");
	printf("*                    (((///·((                                                 *\n");
	printf("*                    ((/·//(((                By: @silvagomez                  *\n");
	printf("*                     (((((((                                                  *\n");
	printf("*                       ⎺⎺⎺                                                    *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf(BLUE"********************************************************************************\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"* "RED"·· ······      ······ ··  ·· ······      ······ ··  ···      ···   ······ ·· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···········  ···········  ···········  ···········   ···    ···  ··········· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···     ···  ···     ···  ···     ···  ···     ···    ···  ···   ···     ··· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···     ···  ···     ···  ···     ···  ···     ···     ······    ···     ··· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···········  ···········  ···········  ···········      ····     ··········· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"·········      ······ ··  ·········     ······· ··      ···        ······ ·· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···                       ···                          ···                   "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···                       ···                         ···    By: "YELLOW"@silvagomez "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"*            "RESET"Welcome to "YELLOW"papayanette 0.0"RESET", a simple 42 project tester            "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"********************************************************************************\n"RESET);

	printf(BLUE"********************************************************************************\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"* "RED"** ******      ****** **  ** ******      ****** **  ***      ***   ****** ** "BLUE"*\n"RESET);
	printf(BLUE"* "RED"***********  ***********  ***********  ***********   ***    ***  *********** "BLUE"*\n"RESET);
	printf(BLUE"* "RED"***     ***  ***     ***  ***     ***  ***     ***    ***  ***   ***     *** "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"···     ···  ···     ···  ···     ···  ···     ···     ······    ···     ··· "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"···········  ···········  ···········  ···········      ····     ··········· "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"·········      ······ ··  ·········     ······· ··      ···        ······ ·· "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"···                       ···                          ···                   "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"···                       ···                         ···    By: "YELLOW"@silvagomez "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"*            "RESET"Welcome to "YELLOW"papayanette 0.0"RESET", a simple 42 project tester            "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"********************************************************************************\n"RESET);


	printf(BLUE"********************************************************************************\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"* "RED"** ******      ****** **  ** ******      ****** **  ***      ***   ****** ** "BLUE"*\n"RESET);
	printf(BLUE"* "RED"***********  ***********  ***********  ***********   ***    ***  *********** "BLUE"*\n"RESET);
	printf(BLUE"* "RED"***     ***  ***     ***  ***     ***  ***     ***    ***  ***   ***     *** "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"***     ***  ***     ***  ***     ***  ***     ***     ******    ***     *** "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"***********  ***********  ***********  ***********      ****     *********** "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"*********      ****** **  *********      ****** **      ***        ****** ** "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"***                       ***                          ***                   "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"***                       ***                         ***    "RED"By: "YELLOW"@silvagomez "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"*            "RESET"Welcome to "YELLOW"papayanette 0.0"RESET", a simple 42 project tester            "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"********************************************************************************\n"RESET);

	printf(BLUE"********************************************************************************\n"RESET);
	printf(BLUE"/------------------------------------------------------------------------------\\\n"RESET);
	//printf(BLUE"/––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\\\n"RESET);
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
	printf(BLUE"|            "RESET"Welcome to "YELLOW"papayanette 0.0"RESET", a simple 42 project tester            "BLUE"|\n"RESET);
	printf(BLUE"|                                                                              "BLUE"|\n"RESET);
	printf(BLUE"\\------------------------------------------------------------------------------/\n"RESET);
	//printf(BLUE"\\––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––/\n"RESET);

	printf(BLUE"********************************************************************************\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"* "RED"·· ······      ······ ··  ·· ······      ······ ··  ···      ···   ······ ·· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···········  ···········  ···········  ···········   ···    ···  ··········· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···     ···  ···     ···  ···     ···  ···     ···    ···  ···   ···     ··· "BLUE"*\n"RESET);
	printf(BLUE"* "RED"···     ···  ···     ···  ···     ···  ···     ···     ······    ···     ··· "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"···········  ···········  ···········  ···········      ····     ··········· "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"·········      ······ ··  ·········     ······· ··      ···        ······ ·· "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"···                       ···                          ···                   "BLUE"*\n"RESET);
	printf(BLUE"* "RED2"···                       ···                         ···    "RED"By: "YELLOW"@silvagomez "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"*            "RESET"Welcome to "YELLOW"papayanette 0.0"RESET", a simple 42 project tester            "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"********************************************************************************\n"RESET);

	printf(BLUE"********************************************************************************\n"RESET);
	printf(BLUE"*                                                                              *\n"RESET);
	printf(BLUE"*                        _                                                     *\n"RESET);
	printf(BLUE"*                       (((                                                    *\n"RESET);
	printf(BLUE"*                      ((/((      Welcome to PAPAYAnette 0.0,                  *\n"RESET);
	printf(BLUE"*                     ((/·/((     a simple 42 project tester.                  *\n"RESET);
	printf(BLUE"*                    (((///·((                                                 *\n"RESET);
	printf(BLUE"*                    ((/·//(((                By: @silvagomez                  *\n"RESET);
	printf(BLUE"*                     (((((((                                                  *\n"RESET);
	printf(BLUE"*                       ⎺⎺⎺                                                    *\n"RESET);
	printf(BLUE"*                                                                              *\n"RESET);
	printf(BLUE"********************************************************************************\n"RESET);

	printf(BLUE"********************************************************************************\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"*                       "RED" _                                                     "BLUE"*\n"RESET);
	printf(BLUE"*                       "RED"(((                                                    "BLUE"*\n"RESET);
	printf(BLUE"*                      "RED"(("YELLOW"/"RED"((      "RESET"Welcome to "RED"PAPAYAnette 0.0"RESET",                  "BLUE"*\n"RESET);
	printf(BLUE"*                     "RED"(("YELLOW"/"BLACK"·"YELLOW"/"RED"((     "RESET"a simple 42 project tester.                  "BLUE"*\n"RESET);
	printf(BLUE"*                    "RED"((("YELLOW"///"BLACK"·"RED"((                                                 "BLUE"*\n"RESET);
	printf(BLUE"*                    "RED"(("YELLOW"/"BLACK"·"YELLOW"//"RED"(((                By: "YELLOW"@silvagomez                  "BLUE"*\n"RESET);
	printf(BLUE"*                     "RED"(((((((                                                  "BLUE"*\n"RESET);
	printf(BLUE"*                       "RED"⎺⎺⎺                                                    "BLUE"*\n"RESET);
	printf(BLUE"*                                                                              "BLUE"*\n"RESET);
	printf(BLUE"********************************************************************************\n"RESET);
*/
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

void	test_c()
{
	int		num1;
	int		num2;
	char	c1 = '\0';
	char	c2 = 'a';
	char	c3 = '~';

	printf(BLUE"\nTest %%c\n"RESET);
	
	printf("Originali  ");
	num1 = printf("%c", c1);
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	num2 = ft_printf("%c", c1);
	printf("\tTotal: %d\n\n", num2);
	
	printf("Original  ");
	num1 = printf("");
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("");
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%c", c2);
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%c", c2);
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("z");
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("z");
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%c", c3);
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%c", c3);
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%c%c", '$', '1');
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%c%c", '$', '1');
	printf("\tTotal: %d\n\n", num2);
}

void	test_str()
{	
	int		num1;
	int		num2;
	char	*str1 = NULL;
	char	*str2 = "papaya";
	char	*str3 = "niño";

	printf(BLUE"\nTest %%s\n"RESET);

	printf("Original  ");
	num1 = printf("%s", str1);
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%s", str1);
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("");
	printf("\t\tTotal: %d\n", num1);
	printf("ft_printf ");
	num2 = ft_printf("");
	printf("\t\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("ñ");
	printf("\t\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("ñ");
	printf("\t\tTotal: %d\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%s", str2);
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%s", str2);
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%s", str3);
	printf("\t\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%s", str3);
	printf("\t\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("I'll mango");
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("I'll mango");
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%s %s", "I'll", "peach");
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%s %s", "I'll", "peach");
	printf("\tTotal: %d\n\n", num2);
}

void	test_digit()
{
	int		num1;
	int		num2;
	int		n1=0;
	int		n2=-42;
	int		n3=2147483647;
	//int		n4=-2147483648;

	printf(BLUE"\nTest %%d\n"RESET);

	printf("Original  ");
	num1 = printf("%d", n1);
	printf("\t\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%d", n1);
	printf("\t\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%d", n2);
	printf("\t\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%d", n2);
	printf("\t\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%d", n3);
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%d", n3);
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%d", (-2147483647 - 1));
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%d", (-2147483647 - 1));
	printf("\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%d %d %d %d %d", 1, 2, 3, 4, 5);
	printf("\tTotal: %d\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%d %d %d %d %d", 1, 2, 3, 4, 5);
	printf("\tTotal: %d\n\n", num2);
}

void	test_int()
{
	int		num1;
	int		num2;
	int		n1=0;
	int		n2=-42;
	int		n3=2147483647;
	//int		n4=-2147483648;

	printf(BLUE"\nTest %%i\n"RESET);

	printf("Original  ");
	num1 = printf("%i", n1);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%i", n1);
	printf("\t\tTotal: %i\n\n", num2);

	printf("Original  ");
	num1 = printf("%i", n2);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%i", n2);
	printf("\t\tTotal: %d\n\n", num2);

	printf("Original  ");
	num1 = printf("%i", n3);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%i", n3);
	printf("\tTotal: %i\n\n", num2);
/*
	printf("Original  ");
	num1 = printf("%d", (-2147483648));
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%d", (-2147483648));
	printf("\tTotal: %i\n\n", num2);
*/
	printf("Original  ");
	num1 = printf("%i", (-2147483647 - 1));
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%i", (-2147483647 - 1));
	printf("\tTotal: %i\n\n", num2);

	printf("Original  ");
	num1 = printf("%i %i %i %i %i", 1, 2, 3, 4, 5);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%i %i %i %i %i", 1, 2, 3, 4, 5);
	printf("\tTotal: %i\n\n", num2);
}

void	test_ptr()
{
	int		num1;
	int		num2;
	void	*ptr1 = NULL;
	char	*str1 = "I like papaya";
	char	*str2;
	int		len;
    
	printf(BLUE"\nTest %%p\n"RESET);

	printf("Original  ");
	num1 = printf("%p", ptr1);
	printf("\t\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%p", ptr1);
	printf("\t\t\tTotal: %i\n\n", num2);

	printf("Original  ");
	num1 = printf("%p", &str1);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%p", &str1);
	printf("\tTotal: %i\n\n", num2);

	len = strlen("@silvagomez");
	str2 = (char*)malloc(len + 1 * sizeof(char));
	strcpy(str2, "@silvagomez");
	str2[len] = '\0';
	printf("Original  ");
	num1 = printf("%p", &str2);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%p", &str2);
	printf("\tTotal: %i\n\n", num2);
	free(str2);
	
	printf("Original  ");
	num1 = printf("%p", &len);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%p", &len);
	printf("\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%p", "papaya");
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%p", "papaya");
	printf("\t\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%p", "");
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%p", "");
	printf("\t\tTotal: %i\n\n", num2);
}

void test_uint()
{
	int		num1;
	int		num2;
	int		n1=0;
	int		n2=2424;
	
	printf(BLUE"\nTest %%u\n"RESET);
	
	printf("Original  ");
	num1 = printf("%u", n1);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%u", n1);
	printf("\t\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%u", n2);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%u", n2);
	printf("\t\tTotal: %i\n\n", num2);

	printf("Original  ");
	num1 = printf("%u", -42);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%u", -42);
	printf("\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%u", (-2147483647 - 1));
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%u", (-2147483647 - 1));
	printf("\tTotal: %i\n\n", num2);
}

void	test_x()
{
	int		num1;
	int		num2;
	int		n1=0;
	int		n2=2424;
	
	printf(BLUE"\nTest %%x\n"RESET);
	
	printf("Original  ");
	num1 = printf("%x", n1);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%x", n1);
	printf("\t\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%x", n2);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%x", n2);
	printf("\t\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%x", 1992);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%x", 1992);
	printf("\t\tTotal: %i\n\n", num2);

	printf("Original  ");
	num1 = printf("%x", -42);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%x", -42);
	printf("\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%x", (-2147483647 - 1));
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%x", (-2147483647 - 1));
	printf("\tTotal: %i\n\n", num2);
}

void	test_X()
{
	int		num1;
	int		num2;
	int		n1=0;
	int		n2=2424;
	
	printf(BLUE"\nTest %%X\n"RESET);
	
	printf("Original  ");
	num1 = printf("%X", n1);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%X", n1);
	printf("\t\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%X", n2);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%X", n2);
	printf("\t\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%X", 1992);
	printf("\t\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%X", 1992);
	printf("\t\tTotal: %i\n\n", num2);

	printf("Original  ");
	num1 = printf("%X", -42);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%X", -42);
	printf("\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%X", (-2147483647 - 1));
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%X", (-2147483647 - 1));
	printf("\tTotal: %i\n\n", num2);
}

void test_percentage()
{
	int		num1;
	int		num2;
	char	*str1 = "cspdiuxX%";
	
	printf(BLUE"\nTest %%\n"RESET);
	
	printf("Original  ");
	num1 = printf("%s", str1);
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = ft_printf("%s", str1);
	printf("\tTotal: %i\n\n", num2);
	
	printf("Original  ");
	num1 = printf("%% %c %s %s", '%', "%%", "%%%");
	printf("\tTotal: %i\n", num1);
	printf("ft_printf ");
	fflush(stdout);
	num2 = printf("%% %c %s %s", '%', "%%", "%%%");
	printf("\tTotal: %i\n\n", num2);
	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		papaya();
		if (strcmp(argv[1], "all") == 0)
		{
			test_c();
			test_str();
			test_digit();
			test_int();
			test_ptr();
			test_uint();
			test_x();
			test_X();
			test_percentage();
		}
		if (strcmp(argv[1], "1") == 0)
		{
			test_c();
		}
		if (strcmp(argv[1], "2") == 0)
		{
			test_str();
		}
		if (strcmp(argv[1], "3") == 0)
		{
			test_digit();
		}
		if (strcmp(argv[1], "4") == 0)
		{
			test_int();
		}
		if (strcmp(argv[1], "5") == 0)
		{
			test_ptr();
		}
		if (strcmp(argv[1], "6") == 0)
		{
			test_uint();
		}
		if (strcmp(argv[1], "7") == 0)
		{
			test_x();
		}
		if (strcmp(argv[1], "8") == 0)
		{
			test_X();
		}
		if (strcmp(argv[1], "9") == 0)
		{
			test_percentage();
		}
	}
	//papaya();
	return (0);
}
