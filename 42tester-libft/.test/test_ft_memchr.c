#include "papaya_lib.h"

void	test_ft_memchr(void)
{
	char	*str = "Testing papaya...";
	size_t	size = strlen(str);

	printf("ft_memchr\t\t");
	printf("HOLA %s\n", ft_memchr(str, 'y', size));
	if (ft_memchr(str, 'y', size) == memchr(str, 'y', size))
		ft_true(1);
	else
		ft_false(1);

	if (ft_memchr(str, 'y', 0) == memchr(str, 'y', 0))
		ft_true(2);
	else
		ft_false(2);
	
	if (ft_memchr(str, 'y', 4) == memchr(str, 'y', 4))
		ft_true(3);
	else
		ft_false(3);
	
	if (ft_memchr(str, '\0', size) == memchr(str, '\0', size))
		ft_true(4);
	else
		ft_false(4);
	
	if (ft_memchr("\0", 'y', 4) == memchr("\0", 'y', 4))
		ft_true(5);
	else
		ft_false(5);
	
	printf("\n");
}
