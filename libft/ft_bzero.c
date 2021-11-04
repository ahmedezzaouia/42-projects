/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:32 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:53:10 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = s;
	i = 0;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}	
}
/* int main()
{
	char str[] = "hello ahmed";
	ft_bzero(str,0);
	int i = 0;
	while (i < 8)
{
	printf("%d\n",str[i++]);
}
}
*/
