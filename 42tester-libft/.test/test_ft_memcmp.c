#include "papaya_lib"

void	test_ft_memcmp(void)
{
	char	*str1 = "Liking papaya...";
	char	*str2 = "Liking piña...";
	size_t	size = strlen(str1);

	printf("ft_memcmp\t\t");

	if (ft_memcmp(str1, str2, 4) == memcmp(str1, str2, 4))
		ft_true(1);
	else
		ft_false(1);

	if (ft_memcmp(str1, str2, 0) == memcmp(str1, str2, 0))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_memcmp(str1, str2, size) == memcmp(str1, str2, size))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_memcmp(str1, "\0", size) == memcmp(str1, "\0", size))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_memcmp("\0", str2, size) == memcmp("\0", str2, size))
		ft_true(5);
	else
		ft_false(5);
	
	printf("\n");
}
