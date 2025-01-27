# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 11:33:58 by bmetehri          #+#    #+#              #
#    Updated: 2025/01/27 03:03:39 by bmetehri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler and flags
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

# Define the target executable
TARGET = bureaucrat

# Define the source files
SRCS =		Bureaucrat.cpp		\
					main.cpp

# Define the object files
OBJS = $(SRCS:.cpp=.o)

# Define the dependencies
DEPS = $(OBJS) $(HDRS)

# Define the all rule
all: $(TARGET)

# Define the clean rule
clean:
	rm $(OBJS)

fclean: clean
	rm $(TARGET)

re: clean all

vg: re
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(TARGET)

# Define the rules for compiling object files
$(OBJS): %.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

# Define the rule for linking the executable
$(TARGET): $(OBJS)
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ $^
