#include "Rember.hpp"

int main(int argc, char** argv)
{
	try
	{
		Rember a;

		std::cout << a.getNum() << std::endl;
		a.setNum(420);
		std::cout << a.getNum() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}