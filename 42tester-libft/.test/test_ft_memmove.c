#include "papaya_lib.h"

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
