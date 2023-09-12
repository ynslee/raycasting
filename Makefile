# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 15:04:00 by jhusso            #+#    #+#              #
#    Updated: 2023/09/12 15:16:16 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = play

LIBFT = libft
INCLUDE = libft/libft.h
FLAGS = -Wall -Wextra -Werror -g
CC = cc
SRC = main.c image.c mouse_events.c key_events.c drawing_funcs.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SRC)
	@make -C $(LIBFT)
	@$(CC) $(FLAGS) -c $(SRC)
	@$(CC) $(FLAGS) $(OBJ) libft/libft.a -L /usr/local/include -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	@rm -f $(OBJ)
	@make -C $(LIBFT) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all

.PHONY = all clean fclean re
