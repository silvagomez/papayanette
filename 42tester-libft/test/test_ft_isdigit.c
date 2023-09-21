3include "papaya_lib.h"

void	test_ft_isdigit(void)
{
	printf("ft_isdigit\t\t");
	if (ft_isdigit('0') == isdigit('0'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isdigit('9') == isdigit('9'))
		ft_true(2);
	else
		ft_false(2);

	if (ft_isdigit(42) == isdigit(42))
		ft_true(3);
	else
		ft_false(3);

	if (ft_isdigit(0) == isdigit(0))
		ft_true(4);
	else
		ft_false(4);

	if (ft_isdigit(142) == isdigit(142))
		ft_true(5);
	else
		ft_false(5);

	if (ft_isdigit(-42) == isdigit(-42))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isdigit('Z') == isdigit('Z'))
		ft_true(7);
	else
		ft_false(7);

	if (ft_isdigit('a') == isdigit('a'))
		ft_true(8);
	else
		ft_false(8);

	printf("\n");
}
