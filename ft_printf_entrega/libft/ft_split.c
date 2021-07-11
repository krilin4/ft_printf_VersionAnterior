/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 13:36:46 by fesanche          #+#    #+#             */
/*   Updated: 2021/07/06 17:47:56 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str, int i)
{
	while (i)
		free(str[i--]);
	free(str);
	return (0);
}

static int	ft_contadorfilas(char const *s, char c)
{
	int	n_filas;

	n_filas = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return (n_filas);
		while (*s && *s != c)
			s++;
		n_filas++;
	}
	return (n_filas);
}

static int	ft_col(char const *s, char c)
{
	int	columns;

	columns = 0;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		columns++;
		s++;
	}
	return (columns);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		n_filas;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	n_filas = ft_contadorfilas(s, c);
	str = (char **)malloc(sizeof(char *) * (n_filas + 1));
	i = 0;
	while (i < n_filas)
	{
		str[i] = (char *)malloc(sizeof(char) * ft_col(s, c) + 1);
		if (!(str[i]))
			return (ft_free(str, i));
		while (*s == c)
			s++;
		j = 0;
		while (*s && *s != c)
			str[i][j++] = *s++;
		str[i][j] = '\0';
		i++;
	}
	str[i] = 0;
	return (str);
}
