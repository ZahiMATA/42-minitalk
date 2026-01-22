# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmata <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 11:10:51 by zmata             #+#    #+#              #
#    Updated: 2024/12/12 10:25:48 by zmata            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc									## variable
SRC = ft_putchar_fd.c ft_split.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c ft_calloc.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_substr.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

## prends tous les fichiers .c
OBJ = $(SRC:.c=.o)							## prends tous les fichiers .o
FLAG = -Wall -Wextra -Werror
NAME = libft.a





all  : $(NAME)								##cible: dépendances 
       								    	##	règles

$(NAME) : $(OBJ)
	ar -rcs $@ $^

%.o : %.c
	$(CC) -o $@ -c $< $(FLAG)					## $@ = OBJ $< = SRC





clean :
	rm -rf *.o 					

fclean : clean						
	rm -rf $(NAME)
re : fclean $(NAME)					
	
IPHONY : all clean fclean re


##$() = utiliser la variable
##$@  =	représente des cibles
##$ˆ  =	liste des dépendances
##$<  =	represnete les dependance
##$*  =	nom fichier , sans extension
##$?  =	liste des dépendances plus récentes que la cible

