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

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*line;

	printf("---------------------------\nBUFFER_SIZE\t=\t%llu\n---------------------------\n", (unsigned long long int)BUFFER_SIZE);
	if (argc <= 1)
	{
		printf("Aucun fichier en parametre.\n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			printf("Fichier %s impossible a lire.\n", argv[i]);
			return (0);
		}
		line = get_next_line(fd);
		if (line == NULL)
		{
			printf("ligne vide, fin de programme.\n");
			return (0);
		}
		while (line != NULL)
		{
			printf("%s", line);
			free (line);
			line = get_next_line(fd);
		}
		close(fd);
		i++;
	}
	return (0);
}
