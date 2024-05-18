#ifndef REMBER_HPP
# define REMBER_HPP

#include "Rember.cpp"

int Rember::getNum(void)
{
	return(this->num);
}

void Rember::setNum(const int & arg)
{
	this->num = arg;
}


Rember::Rember() : num(0)
{

}

Rember::Rember(const Rember & obj)
{
	// this = obj;
	this->num = obj.num;
}

Rember Rember::operator=(const Rember & obj)
{
	// this = obj;
	this->num = obj.num;
	return (*this);
}

Rember::~Rember()
{
	
}

#endif