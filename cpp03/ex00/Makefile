FILES			=	ClapTrap \
					main \

SRCS			=	$(addsuffix .cpp, $(FILES))

OBJS			=	$(SRCS:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror
FLAGS			=	-std=c++98

NAME			=	ClapTrap

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

PHONY:			all clean fclean re test
