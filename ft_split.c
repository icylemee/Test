/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:25:19 by mlemee            #+#    #+#             */
/*   Updated: 2025/04/30 18:56:11 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static	int	ft_count_word(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i - 1] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static int	ft_strlen_c(char *s, char c)
{
	int	i; 

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char *ft_strdup_split(char **split, char *s, char c)
{
    int		i;
	char	*copy;

	i = 0;
	copy = malloc(ft_strlen_c(s, c) * (sizeof(char) + 1));
	if (copy == NULL)
	{
		free(split);
		return (NULL);
	}
	while (s[i] && s[i] != c)
	{
		copy[i] = s[i];
		i ++;
	}
	copy[i] = '\0';
	return (copy);
}
static	char	**ft_supr(char **split, int j)
{
	while (j--)
		free(split[j]);
	free(split);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
    char	**split;
	char	*cpy;
	int		i;
	int		j;

	cpy = ft_strtrim(s, &c);
	split = malloc(sizeof(char *) * (ft_count_word(cpy, c) + 1));
	j = 0;
	i = 0;
	if (split == NULL)
		return (split);
	while (cpy[i])
	{
		if (cpy[i] != c)
		{
			split[j++] = ft_strdup_split(split, &cpy[i], c);
			i += ft_strlen_c(&cpy[i], c);
			if (!split[j - 1])
				return (ft_supr(split, j));
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}

int main(void)
{
	int i = 0;
	char **bis = ft_split(",,,Salut,,oui,,   ,et,,toi,,", ',');
	if (!bis)
		return (printf("ERREUR/n"));
	while (bis[i])
	{
		printf("%s\n", bis[i]);
		i ++;
	}
	free(bis);
	//printf("%d\n", ft_count_word("Salut, oui, eetc,,,, voila,,, oui", ','));
}


/*split[j] = malloc(ft_strlen(&cpy[i], c) * (sizeof(char) + 1));
if (split[j] == NULL)
{
	free(split);
	return (NULL);
}
while (cpy[i] && cpy[i] != c)
{
	split[j][u] = cpy[i];
	i ++;
	u ++;
}
split[j][u] = '\0';
u = 0;
while (s[i] == c)
	i ++;
j++;*/

/*char	**ft_remplir(char **split, char *cpy, char c, int i, int j)
{
	int	u;

	u = 0;
	split[j] = malloc(ft_strlen(&cpy[i], c) * (sizeof(char) + 1));
	if (split[j] == NULL)
	{
		free(split);
		return (NULL);
	}
	while (cpy[i] && cpy[i] != c)
	{
		split[j][u] = cpy[i];
		i ++;
		u ++;
	}
	split[j][u] = '\0';
	u = 0;
	return (split);
}*/