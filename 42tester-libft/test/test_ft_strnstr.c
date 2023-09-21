#include "papaya_lib.h"

void	test_ft_strnstr(void)
{
    char	*largestring = "Pa pa ya";
    char	*smallstring = "pa";
    char	*ptr1;
	char	*ptr2;

	printf("ft_strnstr\t\t");
    
	ptr1 = strnstr(largestring, smallstring, 4);
    ptr2 = ft_strnstr(largestring, smallstring, 4);
	if (!ptr1 && !ptr2)
		ft_true(1);
	else
		ft_false(1);

    ptr1 = strnstr(largestring, smallstring, 5);
    ptr2 = ft_strnstr(largestring, smallstring, 5);
	if (strcmp(ptr1, ptr2) == 0)
		ft_true(2);
	else
		ft_true(2);

    ptr1 = strnstr(largestring, smallstring, 0);
    ptr2 = ft_strnstr(largestring, smallstring, 0);
	if (!ptr1 && !ptr2)
		ft_true(3);
	else
		ft_true(3);
   
   //Important sending NULL = segmentation fault
   //better sendind "\0"
	ptr1 = strnstr(largestring, "\0", 5);
	ptr2 = ft_strnstr(largestring, "\0", 5);
	//printf("\n%s\n%s\n", ptr1, ptr2);
	if (strcmp(ptr1, ptr2) == 0)
		ft_true(4);
	else
		ft_true(4);
	
	ptr1 = strnstr("\0", smallstring, 5);
	ptr2 = strnstr("\0", smallstring, 5);
	if (!ptr1 && !ptr2)
		ft_true(5);
	else
		ft_false(5);

	printf("\n");
}
