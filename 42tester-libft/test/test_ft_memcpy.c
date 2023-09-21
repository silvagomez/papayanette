#include "papaya_lib.h"

void	test_ft_memcpy()
{
	char	src1[42] = "Papaya is a soft, versatile fruit.";
	char	dst1[50];
	char	dst2[50];

	printf("ft_memcpy\t\t");
	
	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1, src1, strlen(src1));
	//Important original need + 1
	memcpy(dst2, src1, strlen(src1)+1);
	if (strcmp(dst1, dst2) == 0)
		ft_true(1);
	else
		ft_false(1);

	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1, src1, 6);
	memcpy(dst2, src1, 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(2);
	else
		ft_false(2);

	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1 + 6, src1, 6);
	memcpy(dst2 + 6, src1, 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(3);
	else
		ft_false(3);

	//With NULL -> Segmentation fault
	strcpy(dst1, "Heloooo!!");
	strcpy(dst2, "Heloooo!!");
	ft_memcpy(dst1, "\0", 6);
	memcpy(dst2, "\0", 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(4);
	else
		ft_false(4);
	
	strcpy(dst1, "\0");
	strcpy(dst2, "\0");
	ft_memcpy(dst1, src1, 6);
	memcpy(dst2, src1, 6);
	if (strcmp(dst1, dst2) == 0)
		ft_true(5);
	else
		ft_false(5);
	
	printf("\n");
}
