/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:48:39 by ahgutier          #+#    #+#             */
/*   Updated: 2025/11/05 17:48:39 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main()
{
	t_list *lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew("uno"));
	ft_lstadd_back(&lst, ft_lstnew("dos"));
	ft_lstadd_back(&lst, ft_lstnew("tres"));

	t_list *ultimo = ft_lstlast(lst);
	if (ultimo)
		printf("Último nodo: '%s'\n", (char *)ultimo->content);
	else
		printf("La lista está vacía\n");
} */
