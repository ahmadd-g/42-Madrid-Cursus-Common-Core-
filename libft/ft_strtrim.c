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

int	ft_is_in_set(int c, char	*set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_slen(char const	*s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

static int	ft_slcpy(char	*dst, char const	*src, size_t	size)
{
	size_t	len;

	len = 0;
	if (size)
	{
		while (src[len] != '\0' && len < size - 1)
		{
			dst[len] = src[len];
			len++;
		}
	}
	dst[len] = '\0';
	while (src[len])
		len++;
	return (len);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	const char	*ptr_start;
	char		*trimmed;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_is_in_set(*s1, (char *)set))
		s1++;
	ptr_start = s1;
	s1 += ft_slen(s1) - 1;
	while (*s1 && ft_is_in_set(*s1, (char *)set))
		s1--;
	len = (s1 - ptr_start) + 1;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_slcpy(trimmed, ptr_start, len + 1);
	return (trimmed);
}

/* int	main()
{
	char	*arr = ft_strtrim("  *-*Holaa_-", " *-_");
	printf("%s", arr);
	free (arr);
} */
