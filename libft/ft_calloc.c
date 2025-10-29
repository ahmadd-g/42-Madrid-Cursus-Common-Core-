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

static void	ft_bezerou(void	*str, size_t	size)
{
	unsigned char	*ptr;

	ptr = str;
	while (size > 0)
	{
		*ptr = 0;
		ptr++;
		size--;
	}
}

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*res;

	if (nmemb && size && nmemb > (SIZE_MAX / size))
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
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
