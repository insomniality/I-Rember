NAME = prog

all:
	g++ -std=c++98 *.cpp -o $(NAME)
clean:
	rm -rf $(NAME)
fclean:
	rm -rf $(NAME)