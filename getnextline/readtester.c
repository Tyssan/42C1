/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 08:47:26 by tbrunier          #+#    #+#             */
/*   Updated: 2024/04/04 08:47:26 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	buf[256];
	int		chars_read;
	int		chars_read_total;

	fd = open("test.txt", O_RDONLY);
	chars_read = read(fd, buf, 5);
	chars_read_total = chars_read;
	if (chars_read == -1)
	{
		printf("ERROR CODE -1\nPOTENTIAL REASONS: MISSING FILE, FILE PRIVILEGE ISSUE, ...");
		return (0);
	}
	if (chars_read == 0)
	{
		printf("ERROR CODE 0 (EMPTY FD)\n");
		return (0);
	}
	while (chars_read != 0 || chars_read == -1)
	{
		printf("%s\n", buf);
		printf("read return: %d, total: %d\n\n", chars_read, chars_read_total);
		chars_read = read(fd, buf, 5);
		chars_read_total += chars_read;
	}
	printf("END CODE: %d\nFD NUMBER: %d\n", chars_read, fd);
	return (0);
}
