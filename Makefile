# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 15:30:23 by mdenoyel          #+#    #+#              #
#    Updated: 2015/12/13 15:37:08 by mdenoyel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

OBJ =

%.o: %.c
	gcc -c -Wall -Wextra -Werror $<

$(NAME) : $(OBJ)

all : $(NAME)

clean :
	re -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
