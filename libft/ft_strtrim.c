/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:59:34 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:59:34 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(int c, const char *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == (char)c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

/* Comportamiento similar a strlcpy, devuelve la longitud 
total de 'src' y copiamos la cadena */
static size_t	ft_slcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

static char	*ft_empty_trim(void)
{
	char	*trimmed;

	trimmed = malloc(1);
	if (!trimmed)
		return (NULL);
	trimmed[0] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	size_t		len;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_is_in_set((int)*start, set))
		start++;
	if (*start == '\0')
		return (ft_empty_trim());
	end = start + ft_slen(start) - 1;
	while (end > start && ft_is_in_set((int)*end, set))
		end--;
	len = (size_t)(end - start) + 1;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_slcpy(trimmed, start, len + 1);
	return (trimmed);
}

/* int	main()
{
	char	*arr = ft_strtrim("  *-*Holaa_-", " *-_");
	printf("%s", arr);
	free (arr);
} */

/* // avanzar start al primer no-set
	start = s1;
	while (*start && ft_is_in_set((int)*start, set))
		start++;
 */

/* // si la cadena resultante es vacía
	if (*start == '\0')
	{
		trimmed = malloc(1);
		if (!trimmed)
			return (NULL);
		trimmed[0] = '\0';
		return (trimmed);
	} */
/* 
// buscar el último carácter no-set
	end = start + ft_slen(start) - 1;
	while (end > start && ft_is_in_set((int)*end, set))
		end--; */

/* contar resto de src
	while (src[i] != '\0')
		i++; */
