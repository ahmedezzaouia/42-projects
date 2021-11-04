/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:27:29 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:57:46 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	st2 = (unsigned char *)s2;
	st1 = (unsigned char *)s1;
	i = 0;
	if (n == 0)
		return (0);
	while (st1[i] == st2[i] && i < n - 1)
		i++;
	return (st1[i] - st2[i]);
}
