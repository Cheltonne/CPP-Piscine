FILES			=	main \
					Animal \
					Dog \
					Cat \
					Brain \

WRONG_FILES		=	wrong_main \
					WrongAnimal \
					WrongCat \

SRCS			=	$(addsuffix .cpp, $(FILES))

WRONG_SRCS		=	$(addsuffix .cpp, $(WRONG_FILES))\

OBJS			=	$(SRCS:.cpp=.o)

WRONG_OBJS		=	$(WRONG_SRCS:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror 
FLAGS			=	-std=c++98

NAME			=	Animal_02

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)

clean:
				$(RM) $(OBJS) $(WRONG_OBJS)

fclean:			clean
				$(RM) $(NAME) "WrongAnimal_00"

re:				fclean $(NAME)

wrong:		$(WRONG_OBJS)
			$(CC) $(CFLAGS) -o "WrongAnimal_00" $(WRONG_OBJS) $(FLAGS)

PHONY:			all clean fclean re test
