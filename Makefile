##
## EPITECH PROJECT, 2024
## MY SFML
## File description:
## The project makefile
##

SRCS	=	src/Application/Application.cpp	\

OBJS = (patsubst %.c, %.o, $(SRCS))

BIN = test

FLAGS = -lsfml-graphics -lsfml-system -lsfml-window -lsfml-audio -lm\
		-Iinclude/Application

all: $(BIN)

$(BIN): $(SRCS)
	g++ -std=c++23 main.cpp $^ -o $@ -g3 $(FLAGS)

unit_tests: fclean
	gcc -o unit_tests tests/unit_test.c $(SRCS) -lcriterion --coverage

tests_run: unit_tests
	./unit_tests
	gcovr --exclude tests/ --branches
	gcovr --exclude tests/

clean:
	find . -type f -name "*.o" -delete
	find . -type f -name "*~" -delete
	find . -type f -name "#*#" -delete
	find . -type f -name "a.out" -delete
	find . -type f -name "vgcore*" -delete
	find . -type f -name "*.gcda" -delete
	find . -type f -name "*.gcno" -delete

fclean: clean
	rm -f $(BIN) unit_tests

re: fclean all

.PHONY: all clean fclean re