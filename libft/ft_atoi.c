/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 11:08:53 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/15 11:08:55 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include libft.h

int					ft_atoi(char c){
					int d;
					int i;
					int n;

					d = 0;
					n = 0;
					if (c < 48 || c > 57){
						ft_putstr("Not a number bro.\n");
						exit(0);
					}
					else if (c >= 48 && c <= 57){
						i = 0;
						d = 48;
						while (i <= 9){
							if (c == d){
								n = i;
								return(n);
							}
							else{
								d++;
								i++;
							}
						}
					}
					return(0);
}

