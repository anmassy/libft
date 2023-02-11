/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:56:19 by anmassy           #+#    #+#             */
/*   Updated: 2022/11/14 15:28:18 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst != NULL)
	{
		tmp = lst;
		while (tmp)
		{
			if (tmp->next == NULL)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
