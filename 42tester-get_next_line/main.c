/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:39:06 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/06/06 14:08:11 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define RED		"\033[91m"
#define GREEN	"\033[92m"
#define YELLOW	"\033[93m"
#define BLUE	"\033[94m"
#define	MAGENTA	"\033[95m"
#define RESET	"\033[0m"

int	main(void)
{
	int		fd;
	int		fd2;
	int		fd3;
	int		fd4;
	int		num_line;
	char	*line1;
	char	*line2;
	char	*line3;

	fd = open("test_read_error.txt", O_RDONLY);
	if (fd < 0)
		return (0);
	printf(MAGENTA "|----- TESTS BUFFER_SIZE=%d -----|\n" RESET, BUFFER_SIZE);
	line1 = get_next_line(fd);
	printf("%s", line1);
	line1 = get_next_line(fd);
	printf("%s", line1);
	line1 = get_next_line(24);
	printf("%s", line1);
	close(fd);
	printf(YELLOW "\nEND There will be a null above OK, read again:\n" RESET);
	fd = open("test_read_error.txt", O_RDONLY);
	if (fd < 0)
		return (0);
	printf(BLUE "FILE DESCRIPTOR=%d\n" RESET, fd);
	line1 = get_next_line(fd);
	while (line1 != NULL)
	{
		printf("%s", line1);
		free(line1);
		line1 = get_next_line(fd);
	}
	printf(GREEN "|----- END TEST -----|\n" RESET);
	close(fd);
	free(line1);

	printf(MAGENTA "\n|----- TEST +2K LINE -----|\n" RESET);
	fd2 = open("test_2k.txt", O_RDONLY);
	printf(BLUE "FILE DESCRIPTOR=%d\n" RESET, fd2);
	if (fd2 < 0)
		return(0);
	line2 = get_next_line(fd2);
	printf("%s", line2);
	line2 = get_next_line(fd2);
	printf("%s", line2);
	line2 = get_next_line(fd2);
	printf("%s", line2);
	printf(GREEN "\n|----- END TEST -----|\n" RESET);
	close(fd2);
	free(line2);

	printf(MAGENTA "\n|----- TEST MULTIPLE FD AND NEGATIVE  -----|\n" RESET);
	fd3 = open("test_read_error.txt", O_RDONLY);
	if (fd3 < 0)
		return (0);
	fd4 = open("test.txt", O_RDONLY);
	if (fd4 < 0)
		return (0);
	line1 = get_next_line(fd3);
	line2 = get_next_line(fd4);
	line3 = get_next_line(-2);
	num_line = 1;
	while (line2 != NULL)
	{
		printf("fd=%d, line %d = %s", fd3, num_line, line1);
		printf("fd=%d, line %d = %s", fd4, num_line, line2);
		printf("fd=%d, line %d = %s", -2, num_line, line3);
		printf("\n");
		line1 = get_next_line(fd3);
		line2 = get_next_line(fd4);
		line3 = get_next_line(-2);
		num_line++;
	}
	printf(GREEN "|----- END TEST -----|\n" RESET);
	free(line1);
	free(line2);
	free(line3);
	close(fd3);
	close(fd4);
	return (0);
}
