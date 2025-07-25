NAME = phonebook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PATH := src/

SRC = PhoneBook.cpp \
		Contact.cpp \
		main.cpp

SRCS  := $(SRC_PATH)$(SRC)

OBJ_PATH := obj/
OBJ := $(SRC:.cpp=.o)
OBJS := $(addprefix $(OBJ_PATH),$(OBJ))

INC_PATH := -I ./includes/

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp | $(OBJ_PATH)
	@$(CXX) $(CXXFLAGS) -c $< -o $@ $(INC_PATH)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJS)
	@echo "Compiling ex01/..."
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) $(INC_PATH)
	@echo "ex01/ is ready"

clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "Removing ex01/..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean