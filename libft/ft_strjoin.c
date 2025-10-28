/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:57:33 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:57:33 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(char const	*s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*new_str;
	char	*ptr;

	new_str = malloc(ft_slen(s1) + ft_slen(s2) + 1);
	if (!new_str)
		return (NULL);
	ptr = new_str;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (new_str);
}

/* int	main()
{
	char	*arr = ft_strjoin("Hola ", "y bienvenidos a mi mundo!");
	printf("%s", arr);
} */
