/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:45:54 by kmgoduka          #+#    #+#             */
/*   Updated: 2016/08/05 19:09:04 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>
#include<stdio.h>
int					ft_putchar(char c){
					write(1, &c, 1);
					return(0);
}	
int					ft_strlen(char *c){
					int i;
					i = 0; 
					while(c[i] != '\0'){
						i++;
					}
					return(i);
}		
int					ft_putendl(void){
					write(1, "\n", 1);
					return(0);
}
int					ft_putstr(char *b){
					int i;
					i = 0;
					while(b[i] != '\0'){
						ft_putchar(b[i]);
						i++;
					}
					return(0);
}
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
/*int				ft_print(int num, ...){
					va_list valist;
					va_start(valist, num);
					ft_putnbr(num);
					va_end(valist);	
					return(0);
}*/
unsigned char		ft_itouch(int a){
					unsigned char d;
					d = 0;

					if (a > 1 && a < 127){
						d = a;
					}
					else
						ft_putstr("Nah bruh. This shit is beyond me.\n");
					return(d);
}
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
long int			ft_tenner(int a, long int b){
					int d;
					d = 0;
					if (a == 0)
						return(b);
					else{
						while(d < a){
							b = b * 10;
							d++;
						}
					}
					return(b);
}
int					ft_putnbr(int c){
					ft_putstr(ft_itoa(c));
					ft_putendl();
					return(0);
}/*float			ft_atof(char *c)*/
int					ft_linebreak(int linelen){
					int i;
					i = 0;
					while (i <= linelen){
					ft_putchar('-');
					i++;
					}
					ft_putendl();
					return(0);
}
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

int					main(int argc, char **argv){
					char *d;
					int t;
					t = 2987;
					if (argc < 2){
						ft_putstr("Not enough arguments. Hate me, please.\n");
					}
					else if (argc > 2){
						ft_putstr("That's too many arguments.\n");
						ft_putstr("What is this, a relationship? FOH!\n");
					}
					else if (argc == 2){
						ft_putstr("Nice argument. You should be a philosopher.\n");
						ft_putstr("Nah I'm kidding, you suck.\n");
						d = argv[1];
						ft_putstr("Argument assigned. Let's Rock.\n");
						ft_putstr("Argument: ");
						ft_putstr(d);
						ft_putendl();
						ft_memset(d, '&', 4);
						ft_putstr(d);
						ft_putendl();
						ft_putstr("ft_putnbr test\n");
						ft_linebreak(50);
				//		ft_print(3, 't', "rywgb rwtywrw", 545);
						ft_putnbr(49075);
						ft_putnbr(t);
						ft_putstr("\nTest for zero\nDun Dun Duuuuuuun!!\n");
						ft_linebreak(50);
						ft_putnbr(0);
						ft_putendl();
						ft_putstr("\nTest for negative!");
						ft_putstr("\nOh shit, here we go motherfucker!! *Rick Voice*\n");
						ft_linebreak(60);
						ft_putnbr(-435);
						ft_putendl();
						ft_putstr("\nI CAN'T LOOK, WHAT DOES IT SAY LAD?!!\n:(!!\n");
					}
					return(0);
}
