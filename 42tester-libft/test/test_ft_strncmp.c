#include "papaya_lib.h"

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
