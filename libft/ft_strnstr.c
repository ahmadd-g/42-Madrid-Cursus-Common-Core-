/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:59:13 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:59:13 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	const char	*hay;
	const char	*nee;
	size_t		what_remains;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		hay = haystack;
		nee = needle;
		what_remains = len;
		while (*hay == *nee && *nee && what_remains--)
		{
			hay++;
			nee++;
		}
		if (!*nee)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/* int main(void)
{
    char hay[] = "hola mundo Nuestro";
    char nee[] = "mun";
    char *res = ft_strnstr(hay, nee, 10);

    if (res)
        printf("Encontrado: %s\n", res); // mundo Nuestro
    else
        printf("No encontrado.\n");
} */

/*
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[++j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
*/

// línea 21: (*needle == '\0')
