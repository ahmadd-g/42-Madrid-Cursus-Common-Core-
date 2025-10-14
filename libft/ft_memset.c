/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:48:44 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:48:44 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int	c, size_t	n)
{
	unsigned char *ptr; // 'unsigned char' es para tomar de referencia la medida de bytes
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = (unsigned char)c;
		ptr++;
		i++;
	}
	return(s);
}

/* int	main()
{
	char arr[6] = "Hello";
	ft_memset(arr, '*', 3);
	printf("%s\n", arr); // ***lo
} */
