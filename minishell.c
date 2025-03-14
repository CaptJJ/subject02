/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajares <jpajares@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:25:18 by jpajares          #+#    #+#             */
/*   Updated: 2024/10/07 21:59:10 by jpajares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str = "Hello World!";

	ft_putstr(str);
	return (0);
}*/
