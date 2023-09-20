#include "papaya_lib.h"

void	test_ft_tolower(void)
{
	printf("ft_tolower\t\t");
	
	if (ft_tolower('A') == tolower('A'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_tolower(42) == tolower(42))
		ft_true(2);
	else
		ft_false(2);

	if (ft_tolower('Z') == tolower('Z'))
		ft_true(3);
	else
		ft_false(3);

	printf("\n");
}
