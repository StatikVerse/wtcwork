/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 11:05:03 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/15 11:05:05 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include libft.h

int					ft_strlen(char *c){
					int i;
					i = 0; 
					while(c[i] != '\0'){
						i++;
					}
					return(i);
}

