#include "papaya_lib.h"

void	test_ft_toupper(void)
{

	printf("ft_toupper\t\t");
	
	if (ft_toupper('a') == toupper('a'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_toupper(42) == toupper(42))
		ft_true(2);
	else
		ft_false(2);

	if (ft_toupper('z') == toupper('z'))
		ft_true(3);
	else
		ft_false(3);

	printf("\n");
}
