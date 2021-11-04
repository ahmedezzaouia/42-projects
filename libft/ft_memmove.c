/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:06:26 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 19:17:38 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	handle(unsigned char *dt, unsigned char *sc, size_t i, size_t len)
{
	while (i < len)
	{
		dt[i] = sc[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	int				j;
	unsigned char	*dt;
	unsigned char	*sc;

	sc = (unsigned char *) src;
	dt = dst;
	i = 0;
	if (dt > sc)
	{
		j = len - 1;
		while (j >= 0)
		{
			dt[j] = sc[j];
			j--;
		}
	}
	else
		handle(dt, sc, i, len);
	return (dst);
}
/*
int main () {
   char dest[] = "ayoub";
   char dest1[] = "ayoub";
   memmove(dest, dest + 2, 3);
   ft_memmove(dest1, dest1 + 2 , 3);
   printf("memmove : dest = %s, src = %s\n", dest, dest);
   printf("ft_memmove : dest = %s, src = %s\n", dest1, dest1);

   return(0);
}
*/
