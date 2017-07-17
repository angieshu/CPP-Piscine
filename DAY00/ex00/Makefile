# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 14:26:15 by ashulha           #+#    #+#              #
#    Updated: 2017/07/03 14:31:20 by ashulha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
PPFLAG = -Wall -Wextra -Werror
COMP = clang++ $(PPFLAG)
FILE = megaphone.cpp

all : $(NAME)

$(NAME) :
	@$(COMP) $(FILE) -o $(NAME)

clean :

fclean : clean
	@rm -rf $(NAME)

re : fclean all
