/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:19:56 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/15 19:19:56 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	const unsigned char	*res;

	res = s;
	if (!s)
		return (NULL);
	while (n > 0)
	{
		if ((const unsigned char)c == *res)
			return ((void *)res);
		res++;
		n--;
	}
	return (NULL);
}

/* int	main()
{
	char	*dominio = "xx@gmail.com";
	char	*ello = ft_memchr(dominio, '@', ft_strlen(dominio));
	ello++;
	printf("%s", ello);
} */
