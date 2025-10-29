/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:59:52 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:59:52 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(char const	*s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	if (start >= ft_slen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int	main()
{
	char	*heyy = ft_substr("abcdefg", 2, 3);
	printf("%s", heyy);
	free(heyy);
} */
