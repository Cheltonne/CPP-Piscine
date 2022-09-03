FILES			=	Bureaucrat \
					Form \
					ShrubberyCreationForm \
					RobotomyRequestForm \
					PresidentialPardonForm \
					Intern \
					main \

SRCS			=	$(addsuffix .cpp, $(FILES))

OBJS			=	$(SRCS:.cpp=.o)

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror 
FLAGS			=	-std=c++98

NAME			=	French_administration4.0
all:			$(NAME)

$(NAME):		$(OBJS)
				@clear
				@echo "      The One Piece...the One Piece is real!!!!!"
				@sleep 2
				@clear
				@echo "\033[0;32m"
				@echo "      ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡛⢿⠟⣻⣿⠟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
				@echo "      ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⢂⡀⢀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
				@echo "      ⣿⣿⣿⣿⣿⣿⣭⣭⣭⡽⠄⡿⠁⠘⢲⣶⡿⣿⣿⡿⠭⣭⣟⣛⣛⣿⣿⣿⣿⣿"
				@echo "      ⣿⣿⣿⠿⠋⠀⠀⠀⠀⠀⠀⠁⠀⠀⠹⢟⠁⠛⠋⡇⠀⠀⠀⠉⠉⠻⠙⣿⡿⣫"
				@echo "      ⣿⣿⠏⡀⠠⠀⠀⠀⢰⡿⠻⠀⠀⠀⠠⠃⠀⠀⠀⠳⣶⣦⠀⠀⠀⠀⠀⡈⢺⣿"
				@echo "      ⣿⠏⠀⠙⠈⠈⠐⣠⣿⣤⣤⡈⠤⠀⠁⠀⠠⠤⢤⣤⣽⣿⣆⠀⠀⠁⠒⠎⠘⣿"
				@echo "      ⠏⠀⠄⠀⠄⣠⣾⡇⠀⠀⠀⠀⠀⠀⢉⣁⠀⠀⠀⠀⠄⣿⣿⣷⡄⠀⠀⠈⠄⠘"
				@echo "      ⢀⠎⠀⠀⠈⢩⣿⣷⡀⠀⠀⠀⠀⠀⣠⣄⠉⠀⠀⠀⠐⣿⣿⣿⡀⠀⣄⠀⠈⢢"
				@echo "      ⠈⠈⠀⠀⠐⢿⣿⣿⡇⠀⠀⠀⠀⠀⠠⠄⠀⠀⠀⠀⣾⣿⣿⣿⣷⡄⠛⢦⡀⠀"
				@echo "      ⠀⠀⠀⠀⢀⣸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⠃⠀⠘⣿⡄"
				@echo "      ⡈⣱⣶⣶⣾⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣆⠀⠀⣿⡇"
				@echo "      ⠀⣿⣿⣿⣿⣿⣿⠏⠀⢀⠀⠀⠀⠀⠈⠀⠈⠀⠀⠀⠀⠹⣿⣿⣿⣿⣆⠀⢹⡇"
				@echo "      ⢸⣿⣿⣿⣿⣿⡏⠀⡀⠡⠈⠀    ⠌⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⡇⠈⣷"
				@echo "\033[0;31m⠀"
				@echo "          CAN WE GET MUCH HIGHER    "
				@echo "\033[0;37m"
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)

clean:
				$(RM) $(OBJS) $(WRONG_OBJS)

fclean:			clean
				$(RM) $(NAME) 

re:				fclean $(NAME)

PHONY:			all clean fclean re test
