#include "papaya_lib"

void    test_ft_substr(void)
{
    char            *str1 = "Hello, papaya!";
    unsigned int    start = 7;
    size_t          len = 6;
    char            *expected1 = "papaya";
    char            *result1;
    char            *result2;
    char            *result3;
    char            *result4;

    printf("ft_substr\t\t");

    result1 = ft_substr(str1, start, len);
    if (strcmp(result1, expected1) == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_substr(str1, 0, 5);
    if (strcmp(result2, "Hello") == 0)
        ft_true(2);
    else
        ft_false(2);
    free(result2);

    result3 = ft_substr(str1, 0, 0);
    if (strcmp(result3, "\0") == 0)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    result4 = ft_substr(str1, 42, len);
    if (strcmp(result4, "") == 0)
        ft_true(4);
    else
        ft_false(4);
    free(result4);

    printf("\n");
}
