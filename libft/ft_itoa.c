/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 11:30:13 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/15 11:30:14 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include libft.h
/*FIX THIS SHIT!!!*/

char				*ft_itoa(long int a){
					int i;
					int md;
					int neg;
					long int c;
					long int f;
					char d;
					char *answer;
					answer = 0;
					d = 0;
					c = a;
					f = a;
					md = a;
					i = 0;
					neg = 0;
					if (a != 0){
						char *t;
						int numlen;
						numlen = 0;
						while(c != 0){
							numlen++;
							c = c / 10;
							ft_putstr("numlen loop\n");
						}
						t = malloc(numlen + 1);
						ft_putstr("\nMalloced\n");
						if (a < 0){
							ft_putstr("\nNumber is indeed negative, sire.");
							neg = 1;
							a = a*-1;
							f = f*-1;
							printf("\na = %ld\n", a);
							ft_putstr("\nNumber is now positive, I think.\n");
						}
						while(numlen != 0){	
							md = a%10;
							printf("\nmd = %d\n", md);
							f = f/10;
							printf("\nf = %ld\n", f);
							a = f;
							i = 0;
							d = 48;
							ft_putstr("a loop\n");
							while(i != md){
								ft_putstr("i loop\n");
								i++;
								d++;
							}
							t[numlen - 1] = d;
							numlen = numlen - 1;
						}
						if (neg == 1){
							int len;
							len = ft_strlen(t);
							while (len >= 0){
								t[len] = t[len - 1];
								len = len - 1;
							}
							t[0] = 45;
							answer = t;
						}
						else if (neg != 1){
							t[ft_strlen(t)] = '\0';
							answer = t;
						}
					}
					else{
						char *r;
						r = malloc(sizeof(char));
						r[0] = 48;
						answer = r;
					}
					return(answer);
}

