#include "papaya_lib.h"

void	test_ft_isalpha(void)
{
	printf("ft_isalpha\t\t");
	if (ft_isalpha('A') == isalpha('A'))
		ft_true(1);
	else
		ft_false(1);
	if (ft_isalpha('a') == isalpha('a'))
		ft_true(2);
	else
		ft_false(2);
	if (ft_isalpha('z') == isalpha('z'))
		ft_true(3);
	else
		ft_false(3);
	if (ft_isalpha('Z') == isalpha('Z'))
		ft_true(4);
	else
		ft_false(4);
	if (ft_isalpha(' ') == isalpha(' '))
		ft_true(5);
	else
		ft_false(5);
	if (ft_isalpha(42) == isalpha(42))
		ft_true(6);
	else
		ft_false(6);
	if (ft_isalpha(142) == isalpha(142))
		ft_true(7);
	else
		ft_false(7);
	if (ft_isalpha(-42) == isalpha(-42))
		ft_true(8);
	else
		ft_false(8);	
	printf("\n");
}
