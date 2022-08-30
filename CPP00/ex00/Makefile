NAME	=	megaphone

SRCS	=	megaphone.cpp

OBJ		=	$(SRCS:.cpp=.o)
DEP		=	$(SRCS:.cpp=.d)

CPPFLAGS	=	c++ -Wall -Wextra -Werror -std=c++98 -MMD

all: $(NAME)
	
$(NAME): $(OBJ)
	$(CPPFLAGS) -o $(NAME) $(OBJ)
-include $(DEP)
%.o:%.cpp
	$(CPPFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean