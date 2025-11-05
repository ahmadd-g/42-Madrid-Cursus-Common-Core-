/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:43:53 by ahgutier          #+#    #+#             */
/*   Updated: 2025/11/03 20:43:53 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_len;

	if (!lst)
		return (0);
	lst_len = 0;
	while (lst)
	{
		lst_len++;
		lst = lst->next;
	}
	return (lst_len);
}

/* int	main()
{
	t_list *lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew("uno"));
	ft_lstadd_back(&lst, ft_lstnew("dos"));
	ft_lstadd_back(&lst, ft_lstnew("tres"));

	printf("Tamaño de la lista: %d\n", ft_lstsize(lst));
} */
