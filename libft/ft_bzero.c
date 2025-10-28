/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:48:08 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:48:08 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/* int	main()
{
	char arr[] = "Holaa";
	ft_bzero(arr, 3);
	printf("%s\n", arr);
} */

// Ponemos 'while (n > 0)' y no 'while (n--)'
// porque es de tipo 'size_t' y evita el desbordamiento de 'n'
