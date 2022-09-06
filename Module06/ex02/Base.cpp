#include "Base.hpp"


Base::Base()
{
	std::cout << "Base default constructor called\n";
}

Base::~Base()
{
	std::cout << "Base destructor called\n";
}


Base::Base(Base const &a)
{
	(void)a;
	std::cout << "Base copy constructor called\n";
}

Base & Base::operator=(Base const &a)
{
	(void)a;
	std::cout << "Base copy assignment operator called\n";
	return (*this);
}