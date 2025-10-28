/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:56:59 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:56:59 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* int	main()
{
	printf("%s\n", ft_strchr("Holaa", 'l')); // 'laa'
} */
