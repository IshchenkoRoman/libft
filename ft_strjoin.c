/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishchen <rishchen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:12:06 by rishchen          #+#    #+#             */
/*   Updated: 2016/12/09 19:06:47 by rishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*ans;

	if (s1 && s2)
	{
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		ans = (char *)malloc(len * sizeof(char));
		if (ans)
		{
			ans = ft_strcpy(ans, s1);
			ans = ft_strcat(ans, s2);
			return (ans);
		}
	}
	return (0);
}
