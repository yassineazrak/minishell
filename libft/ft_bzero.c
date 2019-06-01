/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelazrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 07:29:54 by yelazrak          #+#    #+#             */
/*   Updated: 2019/04/06 22:26:26 by yelazrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *p, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)p;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}