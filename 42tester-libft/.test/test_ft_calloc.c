#include "papaya_lib.h"

void	test_ft_calloc(void)
{
	size_t	count1 = 24;
	size_t	size1 = sizeof(int);
	int		*ptr1;
	int		*ptr2;
	size_t	count2 = 42;
	size_t	size2 = sizeof(char);
	char	*str1;
	char	*str2;
	
	printf("ft_calloc\t\t");

	if ((ptr1 = (int *)ft_calloc(count1, size1)) != NULL && \
				(ptr2 = (int *)calloc(count1, size1)) != NULL)
	{
		if (memcmp(ptr1, ptr2, count1 * size1) == 0)
			ft_true(1);
		else
			ft_false(1);

		for (size_t i = 0; i < count1; i++)
		{
			ptr1[i] = i + 1;
			ptr2[i] = i + 1;
		}
		if (memcmp(ptr1, ptr2, count1 * size1) == 0)
			ft_true(2);
		else
			ft_false(2);

		free(ptr1);
		free(ptr2);
	}

	if ((str1 = (char *)ft_calloc(count2, size2)) != NULL && \
				(str2 = (char *)calloc(count2, size2)) != NULL)
	{
		if (memcmp(str1, str2, count2 * size2) == 0)
			ft_true(1);
		else
			ft_false(1);

		for (size_t i = 0; i < count2; i++)
		{
			str1[i] = 'A' + i;
			str2[i] = 'A' + i;
		}
		if (memcmp(str1, str2, count2 * size2) == 0)
			ft_true(2);
		else
			ft_false(2);

		free(str1);
		free(str2);
	}

	printf("\n");
}
