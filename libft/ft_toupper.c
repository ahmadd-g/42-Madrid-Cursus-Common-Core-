/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:00:20 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 14:00:20 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_toupper(int	c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	return (c);
}

// O también en una línea: return (c - 32);

/* int	main()
{
	printf("%c\n", ft_toupper('a')); // A (65)
	printf("%c\n", ft_toupper('z')); // Z (90)
	printf("%c\n", ft_toupper('w')); // W (87)
	printf("%c\n", ft_toupper('A')); // A (65)
} */
