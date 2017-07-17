# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 21:11:22 by ashulha           #+#    #+#              #
#    Updated: 2017/07/03 21:16:18 by ashulha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	phone_book
PPFLAG = -Wall -Wextra -Werror
COMP =	clang++ $(PPFLAG)
FILE =	PhoneBook.class.cpp \
		PhoneBook.cpp

all : $(NAME)

$(NAME):
	@$(COMP) $(FILE) -o $(NAME)

clean:
	@rm -rf *.gch

fclean: clean
	@rm -rf $(NAME)

re: fclean all
