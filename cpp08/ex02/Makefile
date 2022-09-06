FILES			=	main \

SRCS			=	$(addsuffix .cpp, $(FILES))

OBJS			=	$(SRCS:.cpp=.o)
DEPTH			=	$(SRCS:.cpp=.d) \
					easyfind.d

CXX				=	c++
RM				=	rm -f
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 -MMD -g3

NAME			=	easyfind

all:			$(NAME)

$(NAME):		Makefile $(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
				@echo "\033[0;32m"
				@echo " The One Piece...the One Piece is real!!!!!"
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

-include $(DEPTH)

clean:
				$(RM) $(OBJS) $(DEPTH)

fclean:			clean
				$(RM) $(NAME) 

re:				fclean $(NAME)

PHONY:			all clean fclean re test

