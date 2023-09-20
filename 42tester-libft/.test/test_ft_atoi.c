#include "papaya_lib.h"

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
