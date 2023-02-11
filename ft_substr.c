/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:04:17 by anmassy           #+#    #+#             */
/*   Updated: 2022/11/14 13:58:19 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*ft_sub(char const *s, unsigned int beg, size_t len, char *new)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[beg] && i++ < len)
		new[j++] = s[beg++];
	new[j] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (len >= size - start)
		len = size - start;
	if (start >= size)
	{
		new = malloc(1);
		new[0] = '\0';
		return (new);
	}
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	return (ft_sub(s, start, len, new));
}
