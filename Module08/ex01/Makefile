NAME = easyfind

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp 

INCS_DIR = easyfind.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re