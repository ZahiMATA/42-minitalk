# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmata <zmata@student.42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 14:50:00 by zmata             #+#    #+#              #
#   Updated: 2025/05/30 15:10:00 by zmata            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmata <zmata@student.42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 15:20:00 by zmata             #+#    #+#              #
#   Updated: 2025/05/30 16:00:00 by zmata            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# — outils
CC       = cc
CFLAGS   = -Wall -Wextra -Werror
RM       = rm -f

# — librairies externes
LIBFT_DIR      = Libft
FT_PRINTF_DIR  = ft_printf
LIBFT          = $(LIBFT_DIR)/libft.a
FT_PRINTF_LIB  = $(FT_PRINTF_DIR)/libftprintf.a
INCLUDES       = -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)

# — sources et objets
SRCS_SRV    = server.c
SRCS_CLT    = client.c
OBJS_SRV    = $(SRCS_SRV:.c=.o)
OBJS_CLT    = $(SRCS_CLT:.c=.o)

# — exécutables
NAME_SRV    = server
NAME_CLT    = client

# — cibles phony
.PHONY: all clean fclean re

# — build tout
all: $(LIBFT) $(FT_PRINTF_LIB) $(NAME_SRV) $(NAME_CLT)

# — build Libft
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# — build ft_printf
$(FT_PRINTF_LIB):
	@$(MAKE) -C $(FT_PRINTF_DIR)

# — serveur
$(NAME_SRV): $(OBJS_SRV) $(LIBFT) $(FT_PRINTF_LIB)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@

# — client
$(NAME_CLT): $(OBJS_CLT) $(LIBFT) $(FT_PRINTF_LIB)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
# — nettoyage des .o et des libs
clean:
	@$(RM) $(OBJS_SRV) $(OBJS_CLT)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(FT_PRINTF_DIR) clean

# — nettoyage complet
fclean: clean
	@$(RM) $(NAME_SRV) $(NAME_CLT)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(MAKE) -C $(FT_PRINTF_DIR) fclean

# — rebuild
re: fclean all
