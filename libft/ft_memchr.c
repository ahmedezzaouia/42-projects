/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:39:29 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:48:35 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	k;
	unsigned char	*b;

	b = (unsigned char *) s;
	k = c;
	i = 0;
	while (*b != k && i < n)
		b++;
	return (b);
}

/*int main ()
{
	int dest[50] = {0,3,5,9,1,6,36};
	int i = 0;
		ft_memchr(dest,5,5 * sizeof(int));
	while (i < 6)
	{
		printf("%d\n",dest[i++]);
	}
}
*/
