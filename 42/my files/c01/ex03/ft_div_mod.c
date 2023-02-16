/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zassam <zassam@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:43:34 by zassam            #+#    #+#             */
/*   Updated: 2023/02/14 11:44:23 by zassam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int a = 10;
    int b = 3;
    int div, mod;
    
    ft_div_mod(a, b, &div, &mod);

    char div_char = div + '0';
    char mod_char = mod + '0';

    write(1, &div_char, 1);
    write(1, "\n", 1);
    write(1, &mod_char, 1);
    write(1, "\n", 1);

    return 0;
}*/
