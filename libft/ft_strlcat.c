/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:58:33 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:58:33 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(char const	*s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	available_space;

	src_len = ft_slen(src);
	dest_len = ft_slen(dest);
	available_space = size - dest_len - 1;
	if (dest_len >= size)
		return (size + src_len);
	if (size > dest_len)
	{
		while (available_space-- && *src++)
		{
			*dest = *src;
			dest++;
		}
	}
	*dest = '\0';
	return (dest_len + src_len);
}

/* int	main()
{
	char	arr1[11] = "Hola mundo";
	char	arr2[] = "Si eso esta bien";
	char	arr3[6] = "a ver";
	char	arr4[] = "+3.";
	char	arr5[20] = "Siempree";
	char	arr6[] = "+5...";

	printf("%zu\n", ft_strlcat(arr1, arr2, 4)); // 20 (Ha devuelto todo 
	// ya que directamente 
	// 'size' es menor que la longitud de 'dest', 
	// entonces 'size + longitud de src')
	printf("%zu\n", ft_strlcat(arr3, arr4, 4)); // 7 
	// (lo mismo que el caso anterior, 'size + 
	// longitud de src')
	printf("%zu\n", ft_strlcat(arr5, arr6, 15)); // 13, 
	// ya que ha sumado los caracteres del 
	// 'src' + el 'dest' y todo ha cabido correcta y adecuadamente.
} */

// Devuelve la longitud o tamaño completo de la cadena ORIGEN 
// (a la que vas a pasar a 
// destino) (para que sepas cuánto necesitas para que quepa toda ella)
// Añade más texto (desde 'src') al final del 'dest' ya existente
// (continúa donde ya termina 'dest')
// Te devuelve la longitud total que habría resultado de 
// '(len(dest) + len(src))'
// En la línea 22 sería lo mismo que hacer esto (para ambos):
/* while (*src)
{
	src_len++;
	src++;
} */
// Línea 36: sería lo mismo que hacer '*dest++ = *src++;'
