# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 14:27:01 by ejoo-tho          #+#    #+#              #
#    Updated: 2023/03/06 16:31:32 by ejoo-tho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

#-------------------COMPILATION-----------------------

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra -std=c++98

#-------------------SOURCES FILES----------------------

SRCS		=	Megaphone.cpp

#----------------------OBJECTS--------------------------

OBJS		=	$(SRCS:.cpp=.o)

#-----------------------COLORS--------------------------

RED			=	\x1b[31m

YELLOW		=	\x1b[33m

GREEN		=	\x1b[32m

NO_COLOR	=	\x1b[0m


#-------------------------RULES--------------------------
%.o: %.cpp
		@$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			@echo "$(GREEN)Compiling $(NAME)...$(NO_COLOR)"
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
			@echo "Enjoy!"

all:	$(NAME)

clean:
		@echo "$(RED)Deleting objects...$(NO_COLOR)"
		@rm -f $(OBJS)

fclean:	clean
		@echo "$(RED)Deleting executables...$(NO_COLOR)"
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
