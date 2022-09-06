#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int random = (std::rand() % 3) + 1;
	A	*ch1;
	B	*ch2;
	C	*ch3;
	switch (random)
	{
		case (1):
			ch1 = new A;
			std::cout<< "Random A created\n";
			return (static_cast<Base *>(ch1));
			break ;
		case (2):
			ch2 = new B;
			std::cout<< "Random B created\n";
			return (static_cast<Base *>(ch2));
			break ;
		default:
			ch3 = new C;
			std::cout<<"Random C created";
			return (static_cast<Base *>(ch3));
			break ;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cout << "Error type\n";
}
void identify(Base& p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A\n";
		return ;
	}
	catch (std::bad_cast &bc) {
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B\n";
		return ;
	}
	catch (std::bad_cast &bc) {
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C\n";
		return ;
	}
	catch (std::bad_cast &bc) {

	}
	std::cout << "Unknown type\n";
}

int main(void)
{
	std::srand(std::time(0));

	std::cout << "Generating classes\n" ;
	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();
	Base &rand1_ref = *rand1;
	Base &rand2_ref = *rand2;
	Base &rand3_ref = *rand3;
	identify(rand1);
	identify(rand2);
	identify(rand3);
	identify(rand1_ref);
	identify(rand2_ref);
	identify(rand3_ref);
	delete rand1;
	delete rand2;
	delete rand3;
	return (0);
}