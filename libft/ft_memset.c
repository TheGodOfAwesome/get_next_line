/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuvezwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 18:09:47 by kmuvezwa          #+#    #+#             */
/*   Updated: 2017/06/25 14:22:15 by kmuvezwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	character;
	char			*str;
	int				x;

	character = c;
	str = (char*)b;
	x = 0;
	while (len > 0)
	{
		str[x] = character;
		x++;
		len--;
	}
	return (str);
}
