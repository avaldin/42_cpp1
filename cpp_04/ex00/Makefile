SRCS    =   main.cpp\
			Animal.cpp\
			Dog.cpp\
			Cat.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\

HDRS	=	Animal.hpp\
			Dog.hpp\
			Cat.hpp\
			WrongAnimal.hpp\
			WrongCat.hpp\



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