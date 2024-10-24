# Nome do executável
NAME = scavtrap

# Compilador
CXX = c++

# Flags de compilação
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos fonte
SRCS = ClapTrap.cpp FragTrap.cpp main.cpp

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

# Regra para compilar e executar o programa
run: all
	./$(NAME)

# Limpar os arquivos .o e o executável
clean:
	rm -f $(OBJS)

# Limpar tudo (incluindo o executável)
fclean: clean
	rm -f $(NAME)

# Recompilar tudo do zero
re: fclean all

.PHONY: all clean fclean re run
