/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 10:51:33 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/15 10:51:37 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include libft.h

void				*ft_memset(void *b, int c, size_t len){
					ft_putstr("Memset Initialized!\n");
					int i;
					int sl;
					int lenn;
					unsigned char d;
					unsigned char *p;
					unsigned char *t;
					p = 0;
					ft_putstr("Variables Declared.\n");
					d = ft_itouch(c);
					i = 0;
					sl = ft_strlen(b);
					lenn = len;
					ft_putstr("Assignments Completed.\n");
					if (lenn > sl){
						ft_putstr("Len > Str, but okay...");
						int f;
						f = 0;
					/*	ft_putstr("Mallocing.\n");
						p = malloc(sizeof(unsigned char)*(len + 1));
						ft_putstr("Mallocinng Complete.\n"); */
						t = (unsigned char *)malloc(sizeof(unsigned char)*(lenn + 1));
						while(f < lenn){
							ft_putstr("Len Whiling. Lololol. \n");
							t[f] = d;
							f++;
						}
						if (f >= lenn)
							t[f] = '\0';
						return(t);
					}
					else if (lenn <= sl){	
						ft_putstr("LETS ROCK!\n");
						p = (unsigned char*)b;
						ft_putstr("temp array assigned and typecast is successful.\n");
						while(i < lenn){
							ft_putstr("Whiling. Lol. \n");
							p[i] = d;
							i++;
						}
					}
					return(p);
}
