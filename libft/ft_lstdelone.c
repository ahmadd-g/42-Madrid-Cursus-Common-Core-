/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:55:59 by ahgutier          #+#    #+#             */
/*   Updated: 2025/11/08 12:55:59 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void del_content(void *content)
{
	free(content);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// Ejemplo de uso:
/* int main()
{
	t_list *node = ft_lstnew(ft_strdup("Hola")); // Creas el nodo
	ft_lstdelone(node, del_content); // Procedes con su limpieza o 
	// liberación que es lo que hace la función a la que se la 
	// hemos pasado
} */
// 'ft_lstdelone' libera un nodo concreto: 
// primero su contenido usando la función ‘del’,
// y luego el propio nodo con free(). 
// No libera o toca el siguiente, ya que la lista podría seguir desde ahí.
