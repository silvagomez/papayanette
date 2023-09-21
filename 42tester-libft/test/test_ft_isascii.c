#include "papaya_lib"

void	test_ft_isascii(void)
{
	printf("ft_isascii\t\t");
	if (ft_isascii(0) == isascii(0))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isascii(42) == isascii(42))
		ft_true(2);
	else
		ft_false(2);

	if (ft_isascii('A') == isascii('A'))
		ft_true(3);
	else
		ft_false(3);

	if (ft_isascii('z') == isascii('z'))
		ft_true(4);
	else
		ft_false(4);

	if (ft_isascii(127) == isascii(127))
		ft_true(5);
	else
		ft_false(5);

	if (ft_isascii(142) == isascii(142))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isascii(-42) == isascii(-42))
		ft_true(7);
	else
		ft_false(7);

	printf("\n");
}
