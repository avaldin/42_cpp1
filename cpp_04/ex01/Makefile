SRCS    =   main.cpp\
			Animal.cpp\
			Dog.cpp\
			Cat.cpp\
			Brain.cpp\
			WrongCat.cpp\
			WrongAnimal.cpp\

HDRS	=	Animal.hpp\
			Dog.hpp\
			Cat.hpp\
			Brain.hpp\
			WrongCat.hpp\
			WrongAnimal.cpp\


OBJS    =    $(SRCS:.cpp=.o)

NAME    =    test

CXX        =    c++

FLAGS    =    -Wall -Wextra -Werror -std=c++98 -g

all			:	$(NAME)

%.o        :    %.cpp $(HDRS)
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME)    :    $(OBJS) Makefile
	$(CXX) $(OBJS) -o $(NAME)

clean    :
	rm -f $(OBJS)

fclean    :    clean
	rm -f $(NAME)

re        :    fclean all