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

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	const char	*last;
	char		ch;

	ch = (char)c;
	ptr = s;
	last = NULL;
	while (*ptr)
	{
		if (*ptr == ch)
			last = ptr;
		ptr++;
	}
	if (ch == '\0')
		return ((char *)ptr);
	return ((char *)last);
}

/* int	main()
{
	char	*ss = strrchr("hola@correo.com", '.');
	printf("%s", ss);
} */

// return ((char *)ptr); /* ptr apunta al '\0' al salir del bucle */
