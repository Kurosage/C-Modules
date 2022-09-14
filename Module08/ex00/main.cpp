#include "easyfind.hpp"
#include <set>
int main()
{
	std::set<int> ex;
	ex.insert(1);
	ex.insert(33);
	ex.insert(222);

	std::set<int>::const_iterator	it = ex.end();

	try
	{
		it = ::easyfind(ex,33);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != ex.end())
		std::cout <<"number was found\n";

	it = ex.end();

	try
	{
		it = ::easyfind(ex, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != ex.end())
		std::cout <<"number was found\n";

	return (0);
}
