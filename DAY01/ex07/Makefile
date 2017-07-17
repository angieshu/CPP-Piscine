# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/05 23:21:44 by ashulha           #+#    #+#              #
#    Updated: 2017/07/05 23:22:23 by ashulha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
PPFLAG = -Wall -Wextra -Werror
COMP =	clang++ $(PPFLAG)
FILE =	main.cpp

all : $(NAME)

$(NAME):
	@$(COMP) $(FILE) -o $(NAME)

clean:
	@rm -rf *.gch

fclean: clean
	@rm -rf $(NAME)

re: fclean all
