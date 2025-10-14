/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:53:22 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:53:22 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	const unsigned char	*s;
	unsigned char		*d;

	d = dest;
	s = src;
	if (!d || !s)
		return NULL;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
	{
		while(n--)
			*d++ = *s++;
	}
	return(dest);
}

int	main()
{
	char str[] = "HelloWorld";
	ft_memmove(str + 2, str, 5);
	printf("%s\n", str);
}
