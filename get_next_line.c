/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:48:23 by pollo             #+#    #+#             */
/*   Updated: 2023/05/31 12:19:25 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin_gnl(char *str, char *aux)
{
	char	*s;
	int		i;
	int		ii;

	i = ft_strlen(str) + ft_strlen(aux);
	s = malloc(sizeof(char) * i + 1);
	if (!s)
		return (0);
	i = 0;
	if (!str)
		i = 0;
	else
	{
		while (str[i])
		{
			s[i] = str[i];
			i++;
		}
	}
	ii = 0;
	while (aux[ii])
		s[i++] = aux[ii++];
	s[i] = '\0';
	free(str);
	return (s);
}

static char	*ft_read_and_copy(int fd, char *str)
{
	char	*aux;
	int		n_read;

	aux = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!aux)
		return (0);
	n_read = 1;
	while (!(ft_strchr(str, '\n')) && n_read != 0)
	{
		n_read = read(fd, aux, BUFFER_SIZE);
		if (n_read < 0)
		{
			free(aux);
			write(1, "error reading file\n", 19);
			return (0);
		}
		aux[n_read] = '\0';
		str = ft_strjoin_gnl(str, aux);
	}
	free(aux);
	
	return (str);
}

static char	*ft_get_the_line(char *str)
{
	char	*line;
	int		i;
	int		c;

	if (!str[0])
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (0);
	c = 0;
	while (i >= c)
	{
		line[c] = str[c];
		c++;
	}
	line[c] = '\0';
	return (line);
}

static char	*ft_new_str(char *str, char *line)
{
	int		i;
	int		c;
	char	*aux;

	i = 0;
	c = ft_strlen(line);
	if (!str[0])
	{
		free(str);
		return (0);
	}
	aux = malloc(sizeof(char) * (ft_strlen(str) - c + 1));
	if (!aux)
		return (0);
	while (str[c])
		aux[i++] = str[c++];
	aux[i] = '\0';
	free(str);
	return (aux);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		write(1, "file error\n", 11);
		return (0);
	}
	str = ft_read_and_copy(fd, str);
	if (!str)
	{
		write (1, "error saving the buffer\n", 10);
		return (0);
	}
	line = ft_get_the_line(str);
	str = ft_new_str(str, line);
	return (line);
}