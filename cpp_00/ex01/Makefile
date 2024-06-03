SRCS    =   Contact.cpp\
			PhoneBook.cpp\
			main.cpp\
			utils.cpp\

HDRS	=	Contact.hpp\
            PhoneBook.hpp\
            main.hpp\

OBJS    =    $(SRCS:.cpp=.o)

NAME    =    megaphone

CXX        =    c++

FLAGS    =    -Wall -Wextra -Werror -std=c++98

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