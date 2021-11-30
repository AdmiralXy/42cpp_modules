CC = c++
NAME = phonebook
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I. -g

INCLUDES = Contact.hpp PhoneBook.hpp

SRCS = phonebook.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJS = $(SRCS:%.cpp=%.o)

%.o: %.cpp $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
	@echo "Building: \033[0;34m$<\033[0m"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Binary \033[0;32m$(NAME)\033[0m successfully linked!"

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "Cleanup: \033[0;34mobject files\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "Cleanup: \033[0;34mlinked files\033[0m"

re: clean all

tests: $(NAME)
	@echo "\033[0;34mRunning tests...\033[0m"
		./phonebook
