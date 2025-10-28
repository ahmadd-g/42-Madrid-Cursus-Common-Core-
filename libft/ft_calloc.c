/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:17:03 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/15 14:17:03 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_bezerou(void	*str, size_t	size)
{
	unsigned char	*ptr;

	ptr = str;
	while (size > 0)
	{
		*ptr = 0;
		ptr++;
		size--;
	}
	return (str);
}

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*res;

	res = malloc(nmemb * size);
	ft_bezerou(res, nmemb * size);
	return (res);
}

/* int	main()
{
	void	*ptr;

	ptr = ft_calloc(3, 4);
	printf("%p", ptr);
	free(ptr);
} */

// nmemb = number of members (elementos)
