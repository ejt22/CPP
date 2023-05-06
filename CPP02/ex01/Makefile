# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 14:18:13 by ejoo-tho          #+#    #+#              #
#    Updated: 2023/03/02 14:54:31 by elsajoo-tho      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

#-------------------COMPILATION-----------------------

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra
STD_LIB		=	-std=c++98

#-------------------SOURCES FILES----------------------

SRCS		=	Fixed.cpp \
					main.cpp

#----------------------OBJECTS--------------------------

OBJS		=	$(SRCS:.cpp=.o)

#-----------------------COLORS--------------------------

RED			=	\x1b[31m

YELLOW		=	\x1b[33m

GREEN		=	\x1b[32m

NO_COLOR	=	\x1b[0m


#-------------------------RULES--------------------------
%.o: %.cpp
		@printf "$(YELLOW)Generating $(NAME) objects... %-33.33s\r$(NO_COLOR)" $@
		@$(CC) $(FLAGS) $(STD_LIB) -c $< -o $@

$(NAME):	$(OBJS)
			@echo "$(GREEN)\nCompiling $(NAME)...$(NO_COLOR)"
			@$(CC) $(FLAGS) $(STD_LIB) $(OBJS) -o $(NAME)
			@echo "Enjoy!"

all:	$(NAME)

clean:
		@echo "$(RED)Deleting objects...$(NO_COLOR)"
		@rm -f $(OBJS)

fclean:	clean
		@echo "$(RED)Deleting executable file...$(NO_COLOR)"
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
