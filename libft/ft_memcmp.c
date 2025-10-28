/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:46:51 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/15 17:46:51 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*res1;
	const unsigned char	*res2;

	res1 = s1;
	res2 = s2;
	while (n--)
	{
		if (*res1 != *res2)
			return (*res1 - *res2);
		res1++;
		res2++;
	}
	return (0);
}

/* int	main()
{
	char	arr1[] = "Hola";
	char	arr2[] = "Holb";
	char	arr3[] = "Holaa";
	char	arr4[] = "Hola";
	char	arr5[] = "Holb";
	char	arr6[] = "Hola";
	char	arr7[] = "Hola";
	char	arr8[] = "Hola";
	int	a[] = {1, 2, 3, 4};
	int	b[] = {1, 2, 5, 4};

	printf("%d\n", ft_memcmp(arr1, arr2, 4)); // -1
	printf("%d\n", ft_memcmp(arr3, arr4, 5)); // 97
	printf("%d\n", ft_memcmp(arr5, arr6, 4)); // 1
	printf("%d\n", ft_memcmp(arr7, arr8, sizeof(arr7))); // 0

	if (ft_memcmp(a, b, sizeof(a)) == 0)
    	printf("Son iguales\n");
	else
    	printf("Son distintos\n"); // Este
} */
