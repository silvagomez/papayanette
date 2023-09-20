#include "papaya_lib.h"

void    test_ft_strjoin()
{
    char    *str1 = "Hello, ";
    char    *str2 = "papaya!";
    char    *result1;
    char    *result2;
    char    *result3;
    char    *result4;

    printf("ft_strjoin\t\t");

    result1 = ft_strjoin(str1, str2);
    if (strcmp(result1, "Hello, papaya!") == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_strjoin("", "Empty");
    if (strcmp(result2, "Empty") == 0)
        ft_true(2);
    else
        ft_false(2);
    free(result2);

    result3 = ft_strjoin("Testing...", "");
    if (strcmp(result3, "Testing...\0") == 0)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    result4 = ft_strjoin("42", NULL);
    if (!result4)
        ft_true(4);
    else
        ft_false(4);
    free(result4);

    printf("\n");
}
