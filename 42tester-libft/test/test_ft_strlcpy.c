#include "papaya_lib.h"

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
