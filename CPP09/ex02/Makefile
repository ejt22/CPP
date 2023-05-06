# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 14:18:13 by ejoo-tho          #+#    #+#              #
#    Updated: 2023/04/18 12:11:06 by ejoo-tho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PmergeMe

#-------------------COMPILATION-----------------------

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra
STD_LIB		=	-std=c++98

#-------------------SOURCES FILES----------------------

SRCS		=	PmergeMe.cpp \
					utils.cpp \
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
