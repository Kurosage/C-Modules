NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

INCS_DIR = Zombie.hpp

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