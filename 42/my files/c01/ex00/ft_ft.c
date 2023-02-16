/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zassam <zassam@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:06:19 by zassam            #+#    #+#             */
/*   Updated: 2023/02/13 17:07:28 by zassam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main()
{
	char dec;
	char uni;
    int number = 0;
    ft_ft(&number);
    
	
	dec = '0';
	uni = '0';
	
	dec = dec + number / 10;
	uni = uni + number % 10;
    write(1, &dec, 1); 
    write(1, &uni, 1); 
    return 0;
}*/
