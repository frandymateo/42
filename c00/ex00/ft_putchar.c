/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmateo-f <fmateo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:57:05 by fmateo-f          #+#    #+#             */
/*   Updated: 2024/07/23 15:50:53 by fmateo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    ft_putchar('H'); // Llamada a la función para imprimir 'H'
    ft_putchar('e'); // Llamada a la función para imprimir 'e'
    ft_putchar('l'); // Llamada a la función para imprimir 'l'
    ft_putchar('l'); // Llamada a la función para imprimir 'l'
    ft_putchar('o'); // Llamada a la función para imprimir 'o'
    ft_putchar('\n'); // Llamada a la función para imprimir un salto de línea
    return 0;
}