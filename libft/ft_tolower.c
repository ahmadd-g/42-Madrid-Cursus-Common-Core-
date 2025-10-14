/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:00:13 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 14:00:13 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_tolower(int	c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* int	main()
{
	printf("%c\n", ft_tolower('A')); // a (97)
	printf("%c\n", ft_tolower('Z')); // z (122)
	printf("%c\n", ft_tolower('W')); // w (119)
	printf("%c\n", ft_tolower('a')); // a (97)
} */