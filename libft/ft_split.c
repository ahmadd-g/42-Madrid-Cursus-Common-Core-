/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:56:38 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:56:38 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_how_many_tokens(char const *str, char delimeter)
{
	size_t	tokens;

	tokens = 0;
	while (*str)
	{
		while (*str && *str == delimeter)
			str++;
		if (*str && *str != delimeter)
		{
			tokens++;
			while (*str && *str != delimeter)
				str++;
		}
	}
	return (tokens);
}

static char	*ft_extract_word(char const *str, char delimeter)
{
	size_t	len;
	char	*word;
	size_t	i;

	len = 0;
	while (str[len] && str[len] != delimeter)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free_all(char **split, size_t count)
{
	while (count > 0)
		free(split[--count]);
	free(split);
	return (NULL);
}

static int	ft_fill_split(char **res, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			res[i] = ft_extract_word(s, c);
			if (!res[i])
				return ((ft_free_all(res, i)), 0);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_tokens;
	char	**res;

	if (!s)
		return (NULL);
	n_tokens = ft_how_many_tokens(s, c);
	res = malloc((n_tokens + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!ft_fill_split(res, s, c))
		return (NULL);
	return (res);
}

/* int	main()
{
	char	*str = "Heyy wassup brother!!";
	char	**v = ft_split(str, ' ');
	while (*v)
		printf("%s\n", *v++);
} */

// saltarse los separadores
/* while (*s && *s == delimeter)
	s++; */

// Calcular la longitud de tokens
/* while (*s && *s != delimeter)
{
	len++;
	s++;
} */

// La función de 'safe_malloc' su idea principal es
// que va a reservar un espacio (con malloc) para cada
// string y si ésto falla se encarga de liberar todos los mallocs anteriores

// 'v' de "vector"

/*
static int	safe_malloc(char	**token_v, int pos, size_t	buffer)
{
	int i;

	token_v[pos] = malloc(buffer);
	if (!token_v[pos])
	{
		i = 0;
		while (i < pos)
			free(token_v[i++]);
		free(token_v);
		return (1);
	}
	return (0);
}
*/

/*
// Devolver 0 si todos los mallocs fueron bien, sino '1'
static int	ft_fill(char	**token_v, char const	*s, char delimeter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == delimeter)
			s++;
		while (*s && *s != delimeter)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i++], s - len, len + 1);
		}
	}
	return (0);
}
*/

/*
size_t	tokens_len(char const	*str, char	delimeter)
{
	size_t	word_len;
	char	*word;

	word_len = 0;
	while (str[word_len] != delimeter)
		word_len++;
	word = malloc(word_len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, word_len + 1);
	return (word);
}
*/

/*
static char	*ft_slcpy(char *dest, char const *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
*/
