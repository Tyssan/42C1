/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:06:35 by tbrunier          #+#    #+#             */
/*   Updated: 2024/04/05 13:06:35 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("tests/test1.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
		{
			free(line);
			break ;
		}
		printf("%s", line);
		free(line);
	}
	return (0);
}