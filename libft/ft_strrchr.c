/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:59:19 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:59:19 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char	*s, int c)
{
	const char	*ptr;
	const char	*last;

	ptr = (char *)s;
	last = NULL;
	while (*ptr)
	{
		if (*ptr == (char)c)
			last = ptr;
		ptr++;
	}
	ptr = '\0';
	return ((char *)last);
}

/* int	main()
{
	char	*ss = strrchr("hola@correo.com", '.');
	printf("%s", ss);
} */
