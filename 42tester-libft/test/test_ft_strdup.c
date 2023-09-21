#include "papaya_lib"

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
