SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
FLAGS			= -std=c++98

NAME			= megaphone

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

.PHONY:			all clean fclean re test
