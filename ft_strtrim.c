/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:00:43 by anmassy           #+#    #+#             */
/*   Updated: 2022/11/14 14:02:09 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	check_sep(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	if (!set || !s1)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && check_sep(s1[start], (char *)set))
		start++;
	while (end > start && check_sep(s1[end - 1], (char *)set))
		end--;
	new = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (start < end)
		new[i++] = s1[start++];
	new[i] = 0;
	return (new);
}
