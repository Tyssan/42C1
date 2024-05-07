/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:39:32 by tbrunier          #+#    #+#             */
/*   Updated: 2024/05/07 14:39:32 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <limits.h>
#include "get_next_line_bonus.h"

int	main(void)
{
	int	fd1 = open("tests/test1.txt", O_RDONLY);
	int	fd2 = open("tests/test2.txt", O_RDONLY);
	int	fd3 = open("tests/test3.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
	{
		printf("bruh");
		return (0);
	}
	char	*str = get_next_line(fd1);

	printf("%s\n", str);
	free(str);
	str = NULL;
	str = get_next_line(fd2);
	printf("%s\n", str);
	free(str);
	str = NULL;
	str = get_next_line(fd3);
	printf("%s\n", str);
	free(str);
	str = NULL;
	str = get_next_line(fd1);
	printf("%s\n", str);
	free(str);
	str = NULL;
	str = get_next_line(fd2);
	printf("%s\n", str);
	free(str);
	str = NULL;
	str = get_next_line(fd1);
	printf("%s\n", str);
	free(str);
	str = NULL;
	str = get_next_line(fd2);
	printf("%s\n", str);
	free(str);
	str = NULL;

	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
