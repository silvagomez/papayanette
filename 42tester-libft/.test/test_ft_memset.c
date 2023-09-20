#include "papaya_lib.h"

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
