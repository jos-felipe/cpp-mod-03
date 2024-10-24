# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 16:22:39 by josfelip          #+#    #+#              #
#    Updated: 2024/10/22 16:22:52 by josfelip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do executável
NAME = claptrap

# Compilador
CXX = c++

# Flags de compilação
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos fonte
SRCS = ClapTrap.cpp main.cpp

# Arquivos objeto (mesmos nomes que SRCS, mas com extensão .o)
OBJS = $(SRCS:.cpp=.o)

# Regra padrão para compilar o executável
all: $(NAME)

# Como compilar o executável a partir dos objetos
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Regras para criar os arquivos .o a partir dos .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar os arquivos .o e o executável
clean:
	rm -f $(OBJS)

# Limpar tudo (incluindo o executável)
fclean: clean
	rm -f $(NAME)

# Recompilar tudo do zero
re: fclean all

# O que fazer ao usar 'make' sem argumentos específicos
.PHONY: all clean fclean re
