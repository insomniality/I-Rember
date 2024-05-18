#ifndef REMBER_CPP
# define REMBER_CPP

#include <iostream>

class Rember
{
	public:
		int getNum(void);
		void setNum(const int &);

		Rember();
		Rember(const Rember & obj);
		Rember operator=(const Rember & obj);
		~Rember();
	private:
		int num;
};

#endif