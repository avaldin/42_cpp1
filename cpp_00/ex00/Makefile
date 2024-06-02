SRCS    =   megaphone.cpp

OBJS    =    $(SRCS:.cpp=.o)

NAME    =    megaphone

CC        =    c++

AR        =    ar -rc

FLAGS    =    -Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

%.o        :    %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME)    :    $(OBJS) Makefile
	$(AR) $(NAME) $(OBJS)

clean    :
	rm -f $(OBJS)

fclean    :    clean
	rm -f $(NAME)

re        :    fclean all