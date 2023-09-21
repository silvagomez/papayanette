#include "papaya_lib.h"

// Function to test strmapi()
char    test_upper_lower(unsigned int idx, char c) {
    if (idx % 2 == 0) {
        return toupper(c);
    } else {
        return tolower(c);
    }
}

void    test_ft_strmapi(void)
{
    char    *str1 = "Bye, papayanette";
    char    *expected1 = "ByE, pApAyAnEtTe";
    char    *result1;
    char    *result2;

    printf("ft_strmapi\t\t");

    result1 = ft_strmapi(str1, &test_upper_lower);
    if (strcmp(result1, expected1) == 0)
        ft_true(1);
    else
        ft_false(1);
    free(result1);

    result2 = ft_strmapi(NULL, &test_upper_lower);
    if (!result2)
        ft_true(2);
    else
        ft_false(2);
    
    printf("\n");
}


