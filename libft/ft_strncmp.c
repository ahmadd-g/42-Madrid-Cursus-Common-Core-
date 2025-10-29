/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:59:07 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:59:07 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2 || *s1 == '\0')
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/* int	main()
{
	char *arr;
	char *arr1;

	arr = "Hola";
	arr1 = "Holaa";
	printf("%d\n", ft_strncmp(arr1, arr, 5)); // 97

	char *arr2;
	char *arr3;

	arr2 = "Hola";
	arr3 = "Hola";
	printf("%d\n", ft_strncmp(arr2, arr3, 5)); // 0

	char *arr4;
	char *arr5;

	arr4 = "Hola";
	arr5 = "Hold";
	printf("%d\n", ft_strncmp(arr4, arr5, 5)); // -3

	char *arr6;
	char *arr7;
	arr6 = "Hola";
	arr7 = "hold";
	printf("%d\n", ft_strncmp(arr6, arr7, 5)); 
	// -32 (La mayúsucula está 32 posiciones ASCII por delante)
} */
