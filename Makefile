# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 15:30:23 by mdenoyel          #+#    #+#              #
#    Updated: 2015/12/19 19:51:15 by mdenoyel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

OBJ = ft_back.o \
	  ft_check_block.o \
	  ft_check_links.o \
	  ft_createmap.o \
	  ft_erase.o \
	  ft_lst_pushback.o \
	  ft_lstdel.o \
	  ft_lstdelone.o \
	  ft_lstlast.o \
	  ft_memset.o \
	  ft_move_upleft.o \
	  ft_newlst.o

%.o: %.c
	gcc -c -Wall -Wextra -Werror $<

all : $(OBJ)
	$(NAME)

$(NAME):
	gcc -o $(NAME) "main.c $(OBJ)"
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
