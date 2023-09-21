#include "papaya_lib.h"

// Function to test striteri()
void    test_print_idx(unsigned int idx, char *c)
{
    printf(MAGENTA "%u->%c " RESET, idx, *c);
}

void    test_ft_striteri(void)
{
    printf("ft_striteri\t\t");

    ft_striteri("Papaya", &test_print_idx);
    printf(GREEN "OK" RESET);
    
    printf("\n");

}
