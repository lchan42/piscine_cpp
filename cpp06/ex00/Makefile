# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchan <lchan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 15:50:50 by lchan             #+#    #+#              #
#    Updated: 2022/10/17 20:24:11 by lchan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	cpp06ex00
SRCS	=	main.cpp Conversion.cpp
HEADER	=	Conversion.cpp
OBJS	=	$(SRCS:.cpp=.o)
COMPIL	=	c++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror -g3


# $< = dependances | $@ = regles -> .o

%.o:	%.cpp
	$(COMPIL) $(FLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(COMPIL) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
