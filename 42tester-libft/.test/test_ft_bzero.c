#include "papaya_lib.h"

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
