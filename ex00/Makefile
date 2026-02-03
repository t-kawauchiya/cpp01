NAME = braiiiiiiinnnzzzz

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude
LDFLAGS =

SANFLAGS = -g -fsanitize=address -fsanitize=leak -fno-omit-frame-pointer

SRC_DIR = src/
OBJ_DIR = obj/
SRC_FILES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(LDFLAGS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

debug: CXXFLAGS += $(SANFLAGS)
debug: LDFLAGS += $(SANFLAGS)
debug: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all debug clean fclean re test
