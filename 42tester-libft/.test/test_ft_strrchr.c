#include "papaya_lib.h"

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
