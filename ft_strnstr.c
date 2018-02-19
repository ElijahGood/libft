/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 21:38:51 by inazarin          #+#    #+#             */
/*   Updated: 2017/11/09 16:16:31 by inazarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			n;
	unsigned char	*bb;
	unsigned char	*ll;

	if (!*little)
		return ((void *)big);
	while (*big && len--)
	{
		if (*big == *little)
		{
			bb = (void *)big + 1;
			ll = (void *)little + 1;
			n = len;
			while (*bb && *ll && *bb == *ll && n--)
			{
				++bb;
				++ll;
			}
			if (!*ll)
				return ((void *)big);
		}
		big++;
	}
	return (NULL);
}
