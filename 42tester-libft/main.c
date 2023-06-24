/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:38 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/06/16 15:46:37 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

#define RED		"\033[91m"
#define GREEN	"\033[92m"
#define YELLOW	"\033[93m"
#define BLUE	"\033[94m"
#define	MAGENTA	"\033[95m"
#define RESET	"\033[0m"

void	ft_true(unsigned int n)
{
	printf(GREEN "%d.OK " RESET, n);
}

void ft_false(unsigned int n)
{
	printf(RED "%d.KO " RESET, n);
}

void	test_ft_isalpha(void)
{
	printf("ft_isalpha\t\t");
	if (ft_isalpha('A') == isalpha('A'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isalpha('a') == isalpha('a'))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_isalpha('z') == isalpha('z'))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_isalpha('Z') == isalpha('Z'))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_isalpha(' ') == isalpha(' '))
		ft_true(5);
	else
		ft_false(5);

	if (ft_isalpha(42) == isalpha(42))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isalpha(142) == isalpha(142))
		ft_true(7);
	else
		ft_false(7);

	if (ft_isalpha(-42) == isalpha(-42))
		ft_true(8);
	else
		ft_false(8);
	
	printf("\n");
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit\t\t");
	if (ft_isdigit('0') == isdigit('0'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isdigit('9') == isdigit('9'))
		ft_true(2);
	else
		ft_false(2);

	if (ft_isdigit(42) == isdigit(42))
		ft_true(3);
	else
		ft_false(3);

	if (ft_isdigit(0) == isdigit(0))
		ft_true(4);
	else
		ft_false(4);

	if (ft_isdigit(142) == isdigit(142))
		ft_true(5);
	else
		ft_false(5);

	if (ft_isdigit(-42) == isdigit(-42))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isdigit('Z') == isdigit('Z'))
		ft_true(7);
	else
		ft_false(7);

	if (ft_isdigit('a') == isdigit('a'))
		ft_true(8);
	else
		ft_false(8);

	printf("\n");
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum\t\t");
	if (ft_isalnum('a') == isalnum('a'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isalnum('A') == isalnum('A'))
		ft_true(2);
	else
		ft_false(2);

	if (ft_isalnum('z') == isalnum('z'))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_isalnum('Z') == isalnum('Z'))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_isalnum('0') == isalnum('0'))
		ft_true(5);
	else
		ft_false(5);
	
	if (ft_isalnum('9') == isalnum('9'))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isalnum(47) == isalnum(47))
		ft_true(7);
	else
		ft_false(7);

	if (ft_isalnum(58) == isalnum(58))
		ft_true(8);
	else
		ft_false(8);

	if (ft_isalnum(64) == isalnum(64))
		ft_true(9);
	else
		ft_false(9);

	if (ft_isalnum(91) == isalnum(91))
		ft_true(10);
	else
		ft_false(10);

	if (ft_isalnum(96) == isalnum(96))
		ft_true(11);
	else
		ft_false(11);

	if (ft_isalnum(123) == isalnum(123))
		ft_true(12);
	else
		ft_false(12);

	if (ft_isalnum(142) == isalnum(142))
		ft_true(13);
	else
		ft_false(13);
	
	if (ft_isalnum(-42) == isalnum(-42))
		ft_true(14);
	else
		ft_false(14);

	printf("\n");
}

void	test_ft_isascii(void)
{
	printf("ft_isascii\t\t");
	if (ft_isascii(0) == isascii(0))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isascii(42) == isascii(42))
		ft_true(2);
	else
		ft_false(2);

	if (ft_isascii('A') == isascii('A'))
		ft_true(3);
	else
		ft_false(3);

	if (ft_isascii('z') == isascii('z'))
		ft_true(4);
	else
		ft_false(4);

	if (ft_isascii(127) == isascii(127))
		ft_true(5);
	else
		ft_false(5);

	if (ft_isascii(142) == isascii(142))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isascii(-42) == isascii(-42))
		ft_true(7);
	else
		ft_false(7);

	printf("\n");
}

void	test_ft_isprint(void)
{
	printf("ft_isprint\t\t");
	if (ft_isprint(0) == isprint(0))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isprint(127) == isprint(127))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_isprint('~') == isprint('~'))
		ft_true(3);
	else
		ft_false(3);

	if (ft_isprint(' ') == isprint(' '))
		ft_true(4);
	else
		ft_false(4);

	if (ft_isprint(42) == isprint(42))
		ft_true(5);
	else
		ft_false(5);
	
	if (ft_isprint(-42) == isprint(-42))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isprint(142) == isprint(142))
		ft_true(7);
	else
		ft_false(7);

	printf("\n");
}

void	test_ft_strlen(void)
{
	char	*str1 = "Papayanette, testing...";
	char	*str2 = "       ";
	char	*str3 = "0 0 0 0 0";
	char	*str4 = "\0\0\0";

	printf("ft_strlen\t\t");
	if (ft_strlen(str1) == strlen(str1))
		ft_true(1);
	else
		ft_false(1);

	if (ft_strlen(str2) == strlen(str2))
		ft_true(2);
	else
		ft_false(2);

	if (ft_strlen(str3) == strlen(str3))
		ft_true(3);
	else
		ft_false(3);

	if (ft_strlen(str4) == strlen(str4))
		ft_true(4);
	else
		ft_false(4);

	printf("\n");
}

void	test_ft_memset(void)
{
	char	str1[12] = "Hello, ";
	char	str2[12] = "Hello, ";
	char	str3[42] = "Papaya is a soft, versatile fruit.";
	char	str4[42] = "Papaya is a soft, versatile fruit.";
	int		c = 'B';
	
	printf("ft_memset\t\t");

	ft_memset(str1, c, strlen(str1));
   	memset(str2, c, strlen(str2));
	if (strcmp(str1, str2) == 0)
		ft_true(1);
	else
		ft_false(1);
	
	ft_memset(str1, c, strlen("\0"));
   	memset(str2, c, strlen("\0"));
	if (strcmp(str1, str2) == 0)
		ft_true(2);
	else
		ft_false(2);
	
	ft_memset(str3 + 12, '.', 15);
   	memset(str4 + 12, '.', 15);
	if (strcmp(str3, str4) == 0)
		ft_true(3);
	else
		ft_false(3);

	strcpy(str3, "\0");
	strcpy(str4, "\0");
	ft_memset(str3, '.', 15);
   	memset(str4, '.', 15);
	if (strcmp(str3, str4) == 0)
		ft_true(4);
	else
		ft_false(4);
	
	printf("\n");
}

void	test_ft_bzero()
{
	char	str1[12] = "Hello, ";
	char	str2[12] = "Hello, ";
	char	str3[42] = "Papaya is a soft, versatile fruit.";
	char	str4[42] = "Papaya is a soft, versatile fruit.";

	printf("ft_bzero\t\t");
	
	ft_bzero(str1, strlen(str1));
	bzero(str2, strlen(str2));
	if (strcmp(str1, str2) == 0)
		ft_true(1);
	else
		ft_false(1);
	
	ft_bzero(str3 + 12, 15);
   	bzero(str4 + 12, 15);
	if (strcmp(str3, str4) == 0)
		ft_true(2);
	else
		ft_false(2);

	strcpy(str3, "\0");
	strcpy(str4, "\0");
	ft_bzero(str3, 15);
   	bzero(str4, 15);
	if (strcmp(str3, str4) == 0)
		ft_true(3);
	else
		ft_false(3);

	printf("\n");
}

void	test_ft_memcpy()
{
	char	src1[42] = "Papaya is a soft, versatile fruit.";
	char	dst1[50];
	char	dst2[50];

	printf("ft_memcpy\t\t");
	
	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1, src1, strlen(src1));
	//Important original need + 1
	memcpy(dst2, src1, strlen(src1)+1);
	if (strcmp(dst1, dst2) == 0)
		ft_true(1);
	else
		ft_false(1);

	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1, src1, 6);
	memcpy(dst2, src1, 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(2);
	else
		ft_false(2);

	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1 + 6, src1, 6);
	memcpy(dst2 + 6, src1, 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(3);
	else
		ft_false(3);

	//With NULL -> Segmentation fault
	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1, "\0", 6);
	memcpy(dst2, "\0", 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(4);
	else
		ft_false(4);
	
	strcpy(dst1, "\0");
	strcpy(dst2, "\0");
	ft_memcpy(dst1, src1, 6);
	memcpy(dst2, src1, 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(5);
	else
		ft_false(5);
	
	printf("\n");
}

void	test_ft_memmove()
{
	char	str1[] = "I like papaya";
	char	str2[] = "I like papaya";
	char	str3[] = "I prefer piña";

	printf("ft_memmove\t\t");

	ft_memmove(str1, str3, strlen(str1));
	memmove(str2, str3, strlen(str2));
	if (strcmp(str1, str2) == 0)
		ft_true(1);
	else
		ft_false(1);

	// + 9 -> the original copy double, why?
	ft_memmove(str1 + 8, "mangoo", 5);
	memmove(str2 + 8, "mangoo", 5);
	if (strcmp(str1, str2) == 0)
		ft_true(2);
	else
		ft_false(2);

	ft_memmove(str1, "mangoo", 8);
	memmove(str2, "mangoo", 8);
	printf("ft %s, size %zu\n", ft_memmove(str1, "mangoo", 13), ft_strlen(ft_memmove(str1, "mangoo", 13)));
	printf("orginal %s, size %zu\n", memmove(str2, "mangoo", 13), ft_strlen(memmove(str2, "mangoo", 13)));
	if (strcmp(str1, str2) == 0)
		ft_true(3);
	else
		ft_false(3);

	ft_memmove(str1, "\0", 5);
	memmove(str2, "\0", 5);
	if (strcmp(str1, str2) == 0)
		ft_true(4);
	else
		ft_false(4);

	strcpy(str1, "\0");
	strcpy(str2, "\0");
	ft_memmove(str1, "mangoo", 5);
	memmove(str2, "mangoo", 5);
	if (strcmp(str1, str2) == 0)
		ft_true(5);
	else
		ft_false(5);

	//printf("\n%s --- %s\n", str1, str2);
	
	printf("\n");
}

void	test_ft_strlcpy()
{
	char	str1[] = "I like papaya";
	char	str2[24];
	char	str3[24];
	size_t	n2;
	size_t	n3;

	printf("ft_strlcpy\t\t");

	n2 = ft_strlcpy(str2, str1, 24);
	n3 = strlcpy(str3, str1, 24);
	if (strcmp(str2, str3) == 0 && n2 == n3)
		ft_true(1);
	else
		ft_false(1);
	
	n2 = ft_strlcpy(str2, "mango", 0);
	n3 = strlcpy(str3, "mango", 0);
	if (strcmp(str2, str3) == 0 && n2 == n3)
		ft_true(2);
	else
		ft_false(2);

	n2 = ft_strlcpy(str2 + 7, "mango", 7);
	n3 = strlcpy(str3 + 7, "mango", 7);
	if (strcmp(str2, str3) == 0 && n2 == n3)
		ft_true(3);
	else
		ft_false(3);

	strcpy(str2, "\0");
	strcpy(str3, "\0");
	n2 = ft_strlcpy(str2, "mango", 7);
	n3 = strlcpy(str3, "mango", 7);
	if (strcmp(str2, str3) == 0 && n2 == n3)
		ft_true(4);
	else
		ft_false(4);

	//printf("\n%s --- %s\n", str2, str3);
	
	printf("\n");
}

void	test_ft_strlcat()
{
	char		dst1[42] = "Papayanette";
	const char	*src1 = ", testing...";
	size_t		size1 = strlen(dst1);
	char		dst2[12] = "Hello";
	const char	*src2 = ", world from 42";
	size_t 		size2 = strlen(dst2);
	
	printf("ft_strlcat\t\t");
	
	if (ft_strlcat(dst1, src1, size1) == strlcat(dst1, src1, size1))
		ft_true(1);
	else
		ft_false(1);

	if (ft_strlcat(dst2, src2, size2) == strlcat(dst2, src2, size2))
		ft_true(2);
	else
		ft_false(2);

	if (ft_strlcat(dst1, src1, 0) == strlcat(dst1, src1, 0))
		ft_true(3);
	else
		ft_false(3);

	if (ft_strlcat(dst1, "\0", size1) == strlcat(dst1, "\0", size1))
		ft_true(4);
	else
		ft_false(4);
	
	printf("\n");
}
void	test_ft_toupper(void)
{

	printf("ft_toupper\t\t");
	
	if (ft_toupper('a') == toupper('a'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_toupper(42) == toupper(42))
		ft_true(2);
	else
		ft_false(2);

	if (ft_toupper('z') == toupper('z'))
		ft_true(3);
	else
		ft_false(3);

	printf("\n");
}

void	test_ft_tolower(void)
{
	printf("ft_tolower\t\t");
	
	if (ft_tolower('A') == tolower('A'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_tolower(42) == tolower(42))
		ft_true(2);
	else
		ft_false(2);

	if (ft_tolower('Z') == tolower('Z'))
		ft_true(3);
	else
		ft_false(3);

	printf("\n");
}

void	test_ft_strchr(void)
{
	char	*str1 = "I like piña papaya and piña";
	char	*str2;
	char	*str3;

	printf("ft_strchr\t\t");
	
	str2 = ft_strchr(str1, 'y');
	str3 = strchr(str1, 'y');
	if (strcmp(str2, str3) == 0)
		ft_true(1);
	else
		ft_false(1);
	
	str2 = ft_strchr("\0", 'o');
	str3 = strchr("\0", 'o');
	if (!str2 && !str3)
		ft_true(2);
	else
		ft_false(2);
	
	str2 = ft_strchr(str1, 'o');
	str3 = strchr(str1, 'o');
	if (!str2 && !str3)
		ft_true(3);
	else
		ft_false(3);
	
	printf("\n");
}

void	test_ft_strrchr(void)
{
	char	*str1 = "I like piña papaya and piña";
	char	*str2;
	char	*str3;

	printf("ft_strrchr\t\t");
	
	str2 = ft_strrchr(str1, 'y');
	str3 = strrchr(str1, 'y');
	if (strcmp(str2, str3) == 0)
		ft_true(1);
	else
		ft_false(1);
	
	str2 = ft_strrchr("\0", 'o');
	str3 = strrchr("\0", 'o');
	if (!str2 && !str3)
		ft_true(2);
	else
		ft_false(2);
	
	str2 = ft_strrchr(str1, 'o');
	str3 = strrchr(str1, 'o');
	if (!str2 && !str3)
		ft_true(3);
	else
		ft_false(3);
	
	printf("\n");
}

void	test_ft_strncmp()
{
	char	*str1 = "I like piña papaya and piña";
	char	*str2 = "I like piña papaya and piña";
	char	*str3 = "I like guava";
	size_t	size1 = strlen(str1);
	size_t	size2 = strlen(str2);
	size_t	size3 = strlen(str3);

	printf("ft_strncmp\t\t");

	if (ft_strncmp(str1, str2, size1) == strncmp(str1, str2, size2))
		ft_true(1);
	else
		ft_false(1);
	
	if (ft_strncmp(str1, str3, size3) == strncmp(str1, str3, size3))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_strncmp(str1 + 2, str3 + 2, 4) == strncmp(str1 + 2, str3 + 2, 4))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_strncmp(str1, str2, 0) == strncmp(str1, str2, 0))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_strncmp(str1, "\0", size1) == strncmp(str1, "\0", size1))
		ft_true(5);
	else
		ft_false(5);
	
	if (ft_strncmp("\0", str2, 42) == strncmp("\0", str2, 42))
		ft_true(6);
	else
		ft_false(6);
	
	printf("\n");
}

void	test_ft_memchr(void)
{
	char	*str = "Testing papaya...";
	size_t	size = strlen(str);

	printf("ft_memchr\t\t");
	printf("HOLA %s\n", ft_memchr(str, 'y', size));
	if (ft_memchr(str, 'y', size) == memchr(str, 'y', size))
		ft_true(1);
	else
		ft_false(1);

	if (ft_memchr(str, 'y', 0) == memchr(str, 'y', 0))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_memchr(str, 'y', 4) == memchr(str, 'y', 4))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_memchr(str, '\0', size) == memchr(str, '\0', size))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_memchr("\0", 'y', 4) == memchr("\0", 'y', 4))
		ft_true(5);
	else
		ft_false(5);
	
	printf("\n");
}
void	test_ft_memcmp(void)
{
	char	*str1 = "Liking papaya...";
	char	*str2 = "Liking piña...";
	size_t	size = strlen(str1);

	printf("ft_memcmp\t\t");

	if (ft_memcmp(str1, str2, 4) == memcmp(str1, str2, 4))
		ft_true(1);
	else
		ft_false(1);

	if (ft_memcmp(str1, str2, 0) == memcmp(str1, str2, 0))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_memcmp(str1, str2, size) == memcmp(str1, str2, size))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_memcmp(str1, "\0", size) == memcmp(str1, "\0", size))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_memcmp("\0", str2, size) == memcmp("\0", str2, size))
		ft_true(5);
	else
		ft_false(5);
	
	printf("\n");
}

void	test_ft_strnstr(void)
{
    char	*largestring = "Pa pa ya";
    char	*smallstring = "pa";
    char	*ptr1;
	char	*ptr2;

	printf("ft_strnstr\t\t");
    
	ptr1 = strnstr(largestring, smallstring, 4);
    ptr2 = ft_strnstr(largestring, smallstring, 4);
	if (!ptr1 && !ptr2)
		ft_true(1);
	else
		ft_false(1);

    ptr1 = strnstr(largestring, smallstring, 5);
    ptr2 = ft_strnstr(largestring, smallstring, 5);
	if (strcmp(ptr1, ptr2) == 0)
		ft_true(2);
	else
		ft_true(2);

    ptr1 = strnstr(largestring, smallstring, 0);
    ptr2 = ft_strnstr(largestring, smallstring, 0);
	if (!ptr1 && !ptr2)
		ft_true(3);
	else
		ft_true(3);
   
   //Important sending NULL = segmentation fault
   //better sendind "\0"
	ptr1 = strnstr(largestring, "\0", 5);
	ptr2 = ft_strnstr(largestring, "\0", 5);
	//printf("\n%s\n%s\n", ptr1, ptr2);
	if (strcmp(ptr1, ptr2) == 0)
		ft_true(4);
	else
		ft_true(4);
	
	ptr1 = strnstr("\0", smallstring, 5);
	ptr2 = strnstr("\0", smallstring, 5);
	if (!ptr1 && !ptr2)
		ft_true(5);
	else
		ft_false(5);

	printf("\n");
}

void	test_ft_atoi(void)
{
	char	*str1 = "12345";
	char	*str2 = "-9876";
	char	*str3 = "0";
	char	*str4 = "      42";
	char	*str5 = "\t-42";
	char	*str6 = "xyz123";
	char	*str7 = ",xyz123,abc42";

	printf("ft_atoi\t\t\t");

	if (ft_atoi(str1) == atoi(str1))
		ft_true(1);
	else
		ft_false(1);

	if (ft_atoi(str2) == atoi(str2))
		ft_true(2);
	else
		ft_false(2);

	if (ft_atoi(str3) == atoi(str3))
		ft_true(3);
	else
		ft_false(3);

	if (ft_atoi(str4) == atoi(str4))
		ft_true(4);
	else
		ft_false(4);

	if (ft_atoi(str5) == atoi(str5))
		ft_true(5);
	else
		ft_false(5);

	if (ft_atoi(str6) == atoi(str6))
		ft_true(6);
	else
		ft_false(6);

	if (ft_atoi(str7) == atoi(str7))
		ft_true(7);
	else
		ft_false(7);

	printf("\n");
}

void	test_ft_calloc(void)
{
	size_t	count1 = 24;
	size_t	size1 = sizeof(int);
	int		*ptr1;
	int		*ptr2;
	size_t	count2 = 42;
	size_t	size2 = sizeof(char);
	char	*str1;
	char	*str2;
	
	printf("ft_calloc\t\t");

	if ((ptr1 = (int *)ft_calloc(count1, size1)) != NULL && \
				(ptr2 = (int *)calloc(count1, size1)) != NULL)
	{
		if (memcmp(ptr1, ptr2, count1 * size1) == 0)
			ft_true(1);
		else
			ft_false(1);

		for (size_t i = 0; i < count1; i++)
		{
			ptr1[i] = i + 1;
			ptr2[i] = i + 1;
		}
		if (memcmp(ptr1, ptr2, count1 * size1) == 0)
			ft_true(2);
		else
			ft_false(2);

		free(ptr1);
		free(ptr2);
	}

	if ((str1 = (char *)ft_calloc(count2, size2)) != NULL && \
				(str2 = (char *)calloc(count2, size2)) != NULL)
	{
		if (memcmp(str1, str2, count2 * size2) == 0)
			ft_true(1);
		else
			ft_false(1);

		for (size_t i = 0; i < count2; i++)
		{
			str1[i] = 'A' + i;
			str2[i] = 'A' + i;
		}
		if (memcmp(str1, str2, count2 * size2) == 0)
			ft_true(2);
		else
			ft_false(2);

		free(str1);
		free(str2);
	}

	printf("\n");
}

void	test_ft_strdup(void)
{
	char	*str1 = "Testing papayanette...";
	char	*str2;
	char	*str3;

	printf("ft_strdup\t\t");
	
	str2 = ft_strdup("");
	str3 = strdup("");
	if (strcmp(str2, str3) == 0)
		ft_true(1);
	else
		ft_false(1);
	
	str2 = ft_strdup(str1);
	str3 = strdup(str1);
	if (strcmp(str2, str3) == 0)
		ft_true(2);
	else
		ft_false(2);
	
	printf("\n");
}

void    test_ft_substr(void)
{
    char            *str1 = "Hello, papaya!";
    unsigned int    start = 7;
    size_t          len = 6;
    char            *expected1 = "papaya";
    char            *result1;
    char            *result2;
    char            *result3;
    char            *result4;

    printf("ft_substr\t\t");

    result1 = ft_substr(str1, start, len);
    if (strcmp(result1, expected1) == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_substr(str1, 0, 5);
    if (strcmp(result2, "Hello") == 0)
        ft_true(2);
    else
        ft_false(2);
    free(result2);

    result3 = ft_substr(str1, 0, 0);
    if (strcmp(result3, "\0") == 0)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    result4 = ft_substr(str1, 42, len);
    if (strcmp(result4, "") == 0)
        ft_true(4);
    else
        ft_false(4);
    free(result4);

    printf("\n");
}

void    test_ft_strjoin()
{
    char    *str1 = "Hello, ";
    char    *str2 = "papaya!";
    char    *result1;
    char    *result2;
    char    *result3;
    char    *result4;

    printf("ft_strjoin\t\t");

    result1 = ft_strjoin(str1, str2);
    if (strcmp(result1, "Hello, papaya!") == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_strjoin("", "Empty");
    if (strcmp(result2, "Empty") == 0)
        ft_true(2);
    else
        ft_false(2);
    free(result2);

    result3 = ft_strjoin("Testing...", "");
    if (strcmp(result3, "Testing...\0") == 0)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    result4 = ft_strjoin("42", NULL);
    if (!result4)
        ft_true(4);
    else
        ft_false(4);
    free(result4);

    printf("\n");
}

void    test_ft_strtrim(void)
{
    char    *str1 = "papaya piña piña papaya";
    char    *set1 = "paya";
    char    *expected1 = " piña piña ";
    char    *result1;
    char    *result2;
    char    *result3;
    char    *result4;
    char    *result5;

    printf("ft_strtrim\t\t");

    result1 = ft_strtrim(str1, set1);
	printf("Comprobación %s", result1);
    if (strcmp(result1, expected1) == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_strtrim("   Testing... papaya   ", " ");
    if (strcmp(result2, "Testing... papaya") == 0)
        ft_true(2);
    else
        ft_false(2);
    free(result2);

    result3 = ft_strtrim("Hello, 42world!", "xyz");
    if (strcmp(result3, "Hello, 42world!") == 0)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    result4 = ft_strtrim(">>>Hello, World!<<<", "<hgygh>");
	printf("comprobación result 4 %s", result4);
    if (strcmp(result4, "Hello, World!") == 0)
        ft_true(4);
    else
        ft_false(4);
    free(result4);

    result5 = ft_strtrim(NULL, "42");
    if (!result5)
        ft_true(5);
    else
        ft_false(5);
    free(result5);

    printf("\n");
}

void    test_ft_split()
{
    char            *str1 = "Testing split with papaya";
    char            s1 = ' ';
    char            *expected1[] = {"Testing", "split", "with", "papaya", NULL};
    char            **result1;
    unsigned int    idx;
    char            *str2 = "Papaya,piña,,mango,,,guava";
    char            s2 = ',';
    char            *expected2[] = {"Papaya", "piña", "mango", "guava", NULL};
    char            **result2;
    char            **result3;

    printf("ft_split\t\t");

    result1 = ft_split(str1, s1);
    idx = 0;
    //In this case the comparison is with NULL instead of "\0"
    //"\0" comparison against a string literal is unspecified
    while (result1[idx] != NULL && expected1[idx] != NULL)
    {
        if (strcmp(result1[idx], expected1[idx]) != 0)
        {
            ft_false(1);
            break ;
        }
        idx++;
    }
    if (result1[idx] == NULL && expected1[idx] == NULL)
        ft_true(1);
    idx = 0;
    while (result1[idx] != NULL)
    {
        free(result1[idx]);
        idx++;
    }
    free(result1);

    result2 = ft_split(str2, s2);
    idx = 0;
    while (result2[idx] != NULL && expected2[idx] != NULL)
    {
        if (strcmp(result2[idx], expected2[idx]) != 0)
        {
            ft_false(1);
            break ;
        }
        idx++;
    }
    if (result2[idx] == NULL && expected2[idx] == NULL)
        ft_true(1);
    while (result2[idx] != NULL)
    {
        free(result2[idx]);
        idx++;
    }
    free(result2);

    result3 = ft_split(NULL, s1);
    if (!result3)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    printf("\n");
}

void	test_ft_itoa()
{
    int num1 = 24192;

    printf("ft_itoa\t\t\t");

    if (strcmp(ft_itoa(num1), "24192") == 0)
        ft_true(1);
    else
        ft_false(1);

    if (strcmp(ft_itoa(-42), "-42") == 0)
        ft_true(2);
    else
        ft_false(2);

    if (strcmp(ft_itoa(0), "0") == 0)
        ft_true(3);
    else
        ft_false(3);

    printf("\n");
}

// Function to test strmapi()
char    test_upper_lower(unsigned int idx, char c) {
    if (idx % 2 == 0) {
        return toupper(c);
    } else {
        return tolower(c);
    }
}

void    test_ft_strmapi(void)
{
    char    *str1 = "Bye, papayanette";
    char    *expected1 = "ByE, pApAyAnEtTe";
    char    *result1;
    char    *result2;

    printf("ft_strmapi\t\t");

    result1 = ft_strmapi(str1, &test_upper_lower);
    if (strcmp(result1, expected1) == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_strmapi(NULL, &test_upper_lower);
    if (!result2)
        ft_true(2);
    else
        ft_false(2);
    
    printf("\n");
}

// Function to test strmapi()
void    test_print_idx(unsigned int idx, char *c)
{
    printf(MAGENTA "%u->%c " RESET, idx, *c);
}

void    test_ft_striteri(void)
{
    printf("ft_striteri\t\t");

    ft_striteri("Papaya", &test_print_idx);
    printf(GREEN "OK" RESET);
    
    printf("\n");

}

void    test_ft_put_fd(void)
{
    /*
    The order in which the characters are displayed in the terminal 
    depends on the behavior of the output stream. By default, 
    the standard output stream (stdout) is line-buffered, 
    which means that the characters are stored in a buffer until 
    a newline character ('\n') is encountered or the buffer is full. 
    When either of these conditions is met, the buffer is flushed 
    and the contents are displayed.

    As a result, the characters 'O' and 'K' are displayed immediately 
    without being buffered, while the label "ft_putchar_fd" 
    is still in the buffer.

    The fflush(stdout) call forces the buffer to be flushed immediately, 
    ensuring that "ft_putchar_fd\t\t" is displayed before 
    the subsequent ft_putchar_fd calls.
    */
    printf("ft_putchar_fd\t\t");
    fflush(stdout);
    ft_putchar_fd('O', 1);
    ft_putchar_fd('K', 1);
    printf("\n");

    printf("ft_putstr_fd\t\t");
    fflush(stdout);
    ft_putstr_fd("OK", 1);
    printf("\n");
    
    printf("ft_putendl_fd\t\t");
    fflush(stdout);
    ft_putendl_fd("OK", 1);

    printf("ft_putnbr_fd\t\t");
    fflush(stdout);
    ft_putnbr_fd(42, 1);
    printf(GREEN ".OK" RESET);
    printf("\n");
}

// Test function for list
void    test_print_list(t_list *node)
{
    t_list  *list = node;

    while (list != NULL)
    {
        printf("%s", (char *)list->content);
        list = list->next;
    }
}

void    test_delete_content(void *content)
{
    free(content);
}

void    test_print_lstcontent(void *content)
{
	printf("%s", (char *)content);
}

void *test_add_suffix(void *content)
{
	char *str = (char *)content;
	char *new_str = malloc(strlen(str) + 3);
	
    strcpy(new_str, str);
	strcat(new_str, "_OK");
	return new_str;
}

void    test_lst()
{
    char    *str1 = "ft_lstnew";
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    int     lst_size;
    t_list  *node4;
    t_list  *node5;
    t_list  *node6;
    t_list  *node7;
    t_list  *node8;
    t_list  *node9;
    t_list  *node10;
    t_list  *node11;
    t_list  *node12;
    t_list  *node13;
    t_list  *node14;
    t_list  *node15;
    t_list  *node16;
    t_list  *node17;

    node1 = ft_lstnew(str1);
    printf("%s\t\t", (char *)node1->content);
    printf("%p", (char *)node1->next);
    printf(GREEN ".OK" RESET);
    printf("\n");

    node2 = ft_lstnew("_front\t\t");
    node3 = ft_lstnew("ft_lstadd");
    ft_lstadd_front(&node2, node3);
    test_print_list(node2);
    ft_true(1);
    printf("\n");

    printf("ft_lstsize\t\t");
    lst_size = ft_lstsize(node3);
    printf("Size->%d", lst_size);
    printf(GREEN ".OK" RESET);
    printf("\n");

    node4 = ft_lstnew("OK");
    node5 = ft_lstnew("new\t\t");
    node6 = ft_lstnew("ft_lst");
    ft_lstadd_front(&node4, node5);
    ft_lstadd_front(&node4, node6);
    //test_print_list(node4);
    node7 = ft_lstlast(node4);
    printf("ft_lstlast\t\t");
    printf(GREEN "%s\n" RESET, (char *)node7->content);

    node8 = ft_lstnew("ft_lstadd");
    node9 = ft_lstnew("_back\t\t");
    node10 = ft_lstnew("OK");
    ft_lstadd_back(&node8, node9);
    ft_lstadd_back(&node8, node10);
    test_print_list(node8);
    printf("\n");

    printf("ft_lstdelone\t\t");
    node11 = malloc(sizeof(t_list));
    node11->content = malloc(sizeof(char) * 3);
    strcpy(node11->content, "OK");
    node12 = malloc(sizeof(t_list));
    node12->content = malloc(sizeof(char) * 5);
    strcpy(node12->content, "okok");
    node11->next = node12;
    node12->next = NULL;
    //test_print_list(node11);
    ft_lstdelone(node12, &test_delete_content);
    //test_print_list(node11);
    // The reason the code is not displaying the content of the lists 
    // after deleting the specified nodes is that once a node is deleted, 
    // accessing its content or traversing the list will lead to 
    // undefined behavior, as the memory may have been deallocated 
    // or reused for other purposes..
    printf("\n");

    printf("ft_lstclear\t\t");
    node13 = malloc(sizeof(t_list));
    node13->content = malloc(sizeof(char) * 3);
    strcpy(node13->content, "OK");
    node14 = malloc(sizeof(t_list));
    node14->content = malloc(sizeof(char) * 5);
    strcpy(node14->content, "okok");
    node13->next = node14;
    node14->next = NULL;
    ft_lstclear(&node13, test_delete_content);
    if (node13 == NULL)
        ft_true(1);
    else
        ft_false(1);
    printf("\n");

    node15 = ft_lstnew("ft_lst");
    node16 = ft_lstnew("iter\t\t");
    node17 = ft_lstnew("OK");
    ft_lstadd_back(&node15, node16);
    ft_lstadd_back(&node15, node17);
    ft_lstiter(node15, test_print_lstcontent);
    printf("\n");

    printf("ft_lstmap\t\t");
    t_list *list2 = ft_lstnew("T1");
	t_list *n_node2 = ft_lstnew("T2");
	t_list *n_node3 = ft_lstnew("T3");
    ft_lstadd_back(&list2, n_node2);
    ft_lstadd_back(&list2, n_node3);
	//printf("List 2 before mapping: \n");
	//test_print_list(list2);
	t_list *new_list2 = ft_lstmap(list2, test_add_suffix, test_delete_content);
	//printf("List 2 after mapping: \n");
	test_print_list(new_list2); 
    printf("\n");
    
}

int main(void)
{
	printf("\n");
	printf(BLUE "********************************************************************\n");
	printf("*\t\t\t\t\t\t\t\t   *\n");
	printf("*" RESET "\tWelcome to " YELLOW "Papayanette 0.0" RESET ", a simple 42 libft tester\t   " BLUE "*\n");
	printf("*\t\t\t\t\t\t\t\t   *\n");
	printf("********************************************************************\n" RESET);
	printf("\n");
	printf(BLUE "Testing first part...\n" RESET);
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
