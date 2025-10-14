/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:50:42 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:50:42 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while(n--)
	{
		*d = *s;
		s++;
		if (*d)
			d++;
	}
	return(dest);
}

/* int	main()
{
	char src[] = "Hello";
	char dest[6];

	ft_memcpy(dest, src, 6);  // copia los 5 chars + el '\0'
	printf("%s\n", dest);
} */
