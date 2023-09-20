#include "papaya_lib.c"

void	test_ft_itoa()
{
    int num1 = 24192;

    printf("ft_itoa\t\t\t");

    if (strcmp(ft_itoa(num1), "24192") == 0)
        ft_true(1);
    else
        ft_false(1);

    if (strcmp(ft_itoa(-42), "-42") == 0)
        ft_true(2);
    else
        ft_false(2);

    if (strcmp(ft_itoa(0), "0") == 0)
        ft_true(3);
    else
        ft_false(3);

    printf("\n");
}
