# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 17:39:59 by tigerber          #+#    #+#              #
#    Updated: 2022/04/18 15:58:37 by tigerber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 	= c++

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

EXEC 	= Spell

SRC 	=	main.cpp \
			ASpell.cpp \
			ATarget.cpp \
			BrickWall.cpp \
			Dummy.cpp \
			Fireball.cpp \
			Fwoosh.cpp \
			Polymorph.cpp \
			SpellBook.cpp \
			TargetGenerator.cpp \
			Warlock.cpp \

OBJ		= $(SRC:.cpp=.o)

all : $(EXEC) 

$(EXEC) : $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)
	@printf "\e[1;32m--------------------------------------\n" 
	@printf "\e[1;32m./$@ successfully build       💻 ✅\e[0m\n" 
	@printf "\e[1;32m--------------------------------------\n" 

%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -o $@ -c $<
	
clean :
	@rm -rf *.o
	@printf "\e[38;5;206m--------------------------------------\n"
	@printf "\e[38;5;206mAll.o files deleted              🗑  ❌\e[0m\n"
	@printf "\e[38;5;206m--------------------------------------\n"

fclean : clean
	@rm -rf $(EXEC)
	@printf "\e[38;5;200mProg deleted                     🗑  ❌\e[0m\n"
	@printf "\e[38;5;200m--------------------------------------\n"

re : fclean all

.PHONY : all clean fclean re
