# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 08:22:53 by clcarre           #+#    #+#              #
#    Updated: 2022/04/01 14:46:40 by clcarre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  	= libft.a
LIB 	= ar -rcs
SRC		= $(wildcard *.c)
OBJS 	= $(patsubst %.c,%.o,$(wildcard *.c))
CFLAGS 	= -Wall -Wextra -Werror

.c .o : $(SRC)
	gcc $(CFLAGS) -c -o  $@ $<

$(NAME) : $(OBJS)
	$(LIB) $@ $^ 

bonus : $(OBJS)
	$(LIB) $(NAME) $^
	
all : $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re