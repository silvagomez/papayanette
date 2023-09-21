#include "papaya_lib.h"

void	test_ft_isalnum(void)
{
	printf("ft_isalnum\t\t");
	if (ft_isalnum('a') == isalnum('a'))
		ft_true(1);
	else
		ft_false(1);

	if (ft_isalnum('A') == isalnum('A'))
		ft_true(2);
	else
		ft_false(2);

	if (ft_isalnum('z') == isalnum('z'))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_isalnum('Z') == isalnum('Z'))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_isalnum('0') == isalnum('0'))
		ft_true(5);
	else
		ft_false(5);
	
	if (ft_isalnum('9') == isalnum('9'))
		ft_true(6);
	else
		ft_false(6);

	if (ft_isalnum(47) == isalnum(47))
		ft_true(7);
	else
		ft_false(7);

	if (ft_isalnum(58) == isalnum(58))
		ft_true(8);
	else
		ft_false(8);

	if (ft_isalnum(64) == isalnum(64))
		ft_true(9);
	else
		ft_false(9);

	if (ft_isalnum(91) == isalnum(91))
		ft_true(10);
	else
		ft_false(10);

	if (ft_isalnum(96) == isalnum(96))
		ft_true(11);
	else
		ft_false(11);

	if (ft_isalnum(123) == isalnum(123))
		ft_true(12);
	else
		ft_false(12);

	if (ft_isalnum(142) == isalnum(142))
		ft_true(13);
	else
		ft_false(13);
	
	if (ft_isalnum(-42) == isalnum(-42))
		ft_true(14);
	else
		ft_false(14);

	printf("\n");
}
