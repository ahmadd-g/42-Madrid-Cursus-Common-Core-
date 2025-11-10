/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:49:30 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:49:30 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (
		(c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')
	);
}

// es lo mismo que '(ft_isalpha(c) || ft_isdigit(c))'

// int	main()
// {
// 	printf("%d\n", ft_isalnum('4'));
// 	printf("%d\n", ft_isalnum(54));
// 	printf("%d\n", ft_isalnum(23));
// }

// Lo mismo:
/*
int	ft_isalnum(int c)
{
	if ((((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			|| (c >= '0' && c <= '9')) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
*/
