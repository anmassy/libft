/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:58:21 by anmassy           #+#    #+#             */
/*   Updated: 2022/11/14 16:44:12 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len_dest;
	size_t		len_src;

	i = 0;
	len_dest = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (len_dest < size && dst[len_dest])
		len_dest++;
	if (size <= len_dest)
		return (size + len_src);
	while (size && (--size - len_dest) && src[i])
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
