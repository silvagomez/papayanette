#include "papaya_lib.h"

void	test_ft_isprint(void)
{
	printf("ft_isprint\t\t");
	if (ft_isprint(0) == isprint(0))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isprint(127) == isprint(127))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_isprint('~') == isprint('~'))
		ft_true(3);
	else
		ft_false(3);

	if (ft_isprint(' ') == isprint(' '))
		ft_true(4);
	else
		ft_false(4);

	if (ft_isprint(42) == isprint(42))
		ft_true(5);
	else
		ft_false(5);
	
	if (ft_isprint(-42) == isprint(-42))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isprint(142) == isprint(142))
		ft_true(7);
	else
		ft_false(7);

	printf("\n");
}
