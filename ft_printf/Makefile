# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmata <zmata@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 12:12:32 by zmata             #+#    #+#              #
#    Updated: 2025/04/14 09:57:51 by zmata            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc                                                                 ## variable

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c ft_putnbr_base.c ft_strlen.c ft_putnbr_base_p.c p_case.c ## prends tous les fichiers .c
OBJ = $(SRC:.c=.o)                                                      ## prends tous les fichiers .o
FLAG = -Wall -Wextra -Werror -g3

all  : $(NAME)                                                          ##cible: dépendances
                                                                        ##      règles
$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)

%.o : %.c
		$(CC) $(FLAG) -o $@ -c $< -fPIE

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re


##$() = utiliser la variable
##$@  = représente des cibles
##$ˆ  = liste des dépendances
##$<  = represnete les dependance
##$*  = nom fichier , sans extension
##$?  = liste des dépendances plus récentes que la cible