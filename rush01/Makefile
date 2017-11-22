# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aosobliv <aosobliv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 20:39:18 by aosobliv          #+#    #+#              #
#    Updated: 2017/11/12 13:38:35 by aosobliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_gkrellm

SOURCES=main.cpp\
		Display/CPUDisplay.cpp\
		Display/DiskDisplay.cpp\
		Display/HostnameDisplay.cpp\
		Display/NetworkDisplay.cpp\
		Display/OSDisplay.cpp\
		Display/ProcessDisplay.cpp\
		Display/RAMDisplay.cpp\
		Display/TimeDisplay.cpp\
		Modules/CPUModul.cpp\
		Modules/DiskModul.cpp\
		Modules/HostnameModul.cpp\
		Modules/Modul.cpp\
		Modules/NetworkModul.cpp\
		Modules/OSModul.cpp\
		Modules/ProcessModul.cpp\
		Modules/RAMModul.cpp\
		Modules/TimeModul.cpp\
		Modules/functions.cpp

FLAGS= -Wall -Wextra -Werror
OBJECTS=$(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJECTS)
	clang++ $(FLAGS) -o $(NAME) $(OBJECTS) -lncurses

%.o:%.cpp
	clang++ -c -o $@ $<

clean:
	rm -Rf $(OBJECTS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all
