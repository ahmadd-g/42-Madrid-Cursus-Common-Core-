/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:58:40 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:58:40 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size)
	{
		while (src[len] != '\0' && len < size - 1)
		{
			dest[len] = src[len];
			len++;
		}
		
	}
	dest[len] = '\0';
	while (src[len])
		len++;
	return(len);
}

/* int	main()
{
	char src[] = "Hello!";
	char dst[4];
	printf("%d\n", ft_strlcpy(dst, src, 4)); // 6
} */

// Si la logitud de 'src' termina siendo mayor que la de 'size', hubo truncamiento (en este caso sí hubo).
// Te devuelve la longitud de 'src'.
// Copia una cadena 'src' entera y nueva desde cero a 'dest'
