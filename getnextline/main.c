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
	char	*singleLine = malloc(1 * sizeof(char));

	fd = open("test.txt", O_RDONLY);
	while(singleLine != NULL)
	{
		free(singleLine);
		singleLine = get_next_line(fd);
		printf("%s", singleLine);
	}
	return (0);
}
