# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/31 17:30:00 by elmondo           #+#    #+#              #
#    Updated: 2026/03/31 17:30:08 by elmondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed4losers

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo -e "\033[32m✔ $(NAME) created\033[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e "\033[90m• Compiled $<\033[0m"

clean:
	@rm -f $(OBJ)
	@echo -e "\033[33m✘ Object file removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo -e "\033[33m✘ $(NAME) removed\033[0m"

re: fclean all
