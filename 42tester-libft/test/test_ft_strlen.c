#include "papaya_lib.c"

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
