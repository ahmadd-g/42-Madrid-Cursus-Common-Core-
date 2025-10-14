/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:58:45 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:58:45 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlen(const char	*str)
{
	int	len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return(len);
}

/* int	main()
{
	char	arr[] = "Holaa"; // 5
	char	arr1[] = "Sii, yo quiero estoo0"; // 21
	printf("%d\n", ft_strlen(arr));
	printf("%d\n", ft_strlen(arr1));
} */
