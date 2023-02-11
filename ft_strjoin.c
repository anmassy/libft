/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:05:43 by anmassy           #+#    #+#             */
/*   Updated: 2022/11/14 13:59:15 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;
	size_t	len_suf;
	size_t	len_pre;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len_pre = ft_strlen(s1);
	len_suf = ft_strlen(s2);
	new = (char *)malloc ((len_pre + len_suf + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = 0;
	return (new);
}
