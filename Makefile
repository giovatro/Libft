# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 16:32:43 by gtroiano          #+#    #+#              #
#    Updated: 2023/07/24 16:01:02 by gtroiano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

files	= ft_bzero \
		  ft_calloc \
		  ft_isalnum \
		  ft_isalpha \
		  ft_isascii \
		  ft_isdigit \
		  ft_isprint \
		  ft_memcpy \
		  ft_memmove \
		  ft_memset \
		  ft_strlcat \
		  ft_strlcpy \
		  ft_strlen \
		  ft_strncmp \
		  ft_toupper \
		  ft_tolower \

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(NAME)

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
