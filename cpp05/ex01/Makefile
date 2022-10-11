# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchan <lchan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 15:50:50 by lchan             #+#    #+#              #
#    Updated: 2022/10/11 13:03:59 by lchan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	cpp05ex01
SRCS	=	main.cpp Bureaucrat.cpp Form.cpp
HEADER	=	Bureaucrat.hpp Form.hpp
OBJS	=	$(SRCS:.cpp=.o)
COMPIL	=	c++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror


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
