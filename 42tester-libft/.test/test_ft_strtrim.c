#include "papaya_lib.h"

void    test_ft_strtrim(void)
{
    char    *str1 = "papaya piña piña papaya";
    char    *set1 = "paya";
    char    *expected1 = " piña piña ";
    char    *result1;
    char    *result2;
    char    *result3;
    char    *result4;
    char    *result5;

    printf("ft_strtrim\t\t");

    result1 = ft_strtrim(str1, set1);
	printf("Comprobación %s", result1);
    if (strcmp(result1, expected1) == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_strtrim("   Testing... papaya   ", " ");
    if (strcmp(result2, "Testing... papaya") == 0)
        ft_true(2);
    else
        ft_false(2);
    free(result2);

    result3 = ft_strtrim("Hello, 42world!", "xyz");
    if (strcmp(result3, "Hello, 42world!") == 0)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    result4 = ft_strtrim(">>>Hello, World!<<<", "<hgygh>");
	printf("comprobación result 4 %s", result4);
    if (strcmp(result4, "Hello, World!") == 0)
        ft_true(4);
    else
        ft_false(4);
    free(result4);

    result5 = ft_strtrim(NULL, "42");
    if (!result5)
        ft_true(5);
    else
        ft_false(5);
    free(result5);

    printf("\n");
}
