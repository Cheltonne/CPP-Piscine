FILES			=	HumanA \
					HumanB \
					Weapon \
					main \

SRCS			=	$(addsuffix .cpp, $(FILES))

OBJS			=	$(SRCS:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror
FLAGS			=	-std=c++98

NAME			=	Violence_is_never_the_answer_Violence_is_the_question_and_the_answer_is_yes👊🩸

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

PHONY:			all clean fclean re test
