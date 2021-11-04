/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:26:29 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:37:24 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*sr;

	sr = (unsigned char *) src;
	dt = dst;
	i = 0;
	while (i < n)
	{
		dt[i] = sr[i];
		i++;
	}
	return (dst);
}

/*
int main () {
   const int src[50] = {0,5,6,3};
   int dest[50] ;
   int dest1[50];
   ft_memcpy(dest, src, 4 *sizeof(int));
   memcpy(dest1, src, sizeof(int) * 4);
   int i = 0;
   while (i < 4)
   {   
  	 printf("ft_memcpy dest = %d\n", dest[i]);
  	 printf("memcpy dest1 = %d\n", dest1[i]);
	 i++;
   }
   return(0);
}
*/
