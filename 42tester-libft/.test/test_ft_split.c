#include "papaya_lib.h"

void    test_ft_split()
{
    char            *str1 = "Testing split with papaya";
    char            s1 = ' ';
    char            *expected1[] = {"Testing", "split", "with", "papaya", NULL};
    char            **result1;
    unsigned int    idx;
    char            *str2 = "Papaya,piña,,mango,,,guava";
    char            s2 = ',';
    char            *expected2[] = {"Papaya", "piña", "mango", "guava", NULL};
    char            **result2;
    char            **result3;

    printf("ft_split\t\t");

    result1 = ft_split(str1, s1);
    idx = 0;
    //In this case the comparison is with NULL instead of "\0"
    //"\0" comparison against a string literal is unspecified
    while (result1[idx] != NULL && expected1[idx] != NULL)
    {
        if (strcmp(result1[idx], expected1[idx]) != 0)
        {
            ft_false(1);
            break ;
        }
        idx++;
    }
    if (result1[idx] == NULL && expected1[idx] == NULL)
        ft_true(1);
    idx = 0;
    while (result1[idx] != NULL)
    {
        free(result1[idx]);
        idx++;
    }
    free(result1);

    result2 = ft_split(str2, s2);
    idx = 0;
    while (result2[idx] != NULL && expected2[idx] != NULL)
    {
        if (strcmp(result2[idx], expected2[idx]) != 0)
        {
            ft_false(1);
            break ;
        }
        idx++;
    }
    if (result2[idx] == NULL && expected2[idx] == NULL)
        ft_true(1);
    while (result2[idx] != NULL)
    {
        free(result2[idx]);
        idx++;
    }
    free(result2);

    result3 = ft_split(NULL, s1);
    if (!result3)
        ft_true(3);
    else
        ft_false(3);
    free(result3);

    printf("\n");
}
