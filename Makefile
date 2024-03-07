# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 00:00:24 by osebbar           #+#    #+#              #
#    Updated: 2024/03/07 23:25:25 by osebbar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror 
CC = cc
SOURCES =  ft_puts.c ft_specifier.c ft_printf.c ft_hexa.c ft_put_p.c

OBJECTS = $(SOURCES:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

.o .c:
	$(CC)  $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
