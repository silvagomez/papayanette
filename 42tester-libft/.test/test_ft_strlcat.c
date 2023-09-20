#include "papaya_lib.h"

void	test_ft_strlcat()
{
	char		dst1[42] = "Papayanette";
	const char	*src1 = ", testing...";
	size_t		size1 = strlen(dst1);
	char		dst2[12] = "Hello";
	const char	*src2 = ", world from 42";
	size_t 		size2 = strlen(dst2);
	
	printf("ft_strlcat\t\t");
	
	if (ft_strlcat(dst1, src1, size1) == strlcat(dst1, src1, size1))
		ft_true(1);
	else
		ft_false(1);

	if (ft_strlcat(dst2, src2, size2) == strlcat(dst2, src2, size2))
		ft_true(2);
	else
		ft_false(2);

	if (ft_strlcat(dst1, src1, 0) == strlcat(dst1, src1, 0))
		ft_true(3);
	else
		ft_false(3);

	if (ft_strlcat(dst1, "\0", size1) == strlcat(dst1, "\0", size1))
		ft_true(4);
	else
		ft_false(4);
	
	printf("\n");
}
