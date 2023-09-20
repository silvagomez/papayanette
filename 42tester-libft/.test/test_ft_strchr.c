#include "papaya_lib.h"

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
