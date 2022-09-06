
#include "Serilization.hpp" 
#include <iomanip>
#include <stdint.h>
#include <iostream>


static uintptr_t serialize(Serilization* ptr)
{
	return	(reinterpret_cast<uintptr_t>(ptr));
}

static Serilization* deserialize(uintptr_t raw)
{
	return	(reinterpret_cast<Serilization *>(raw));
}

int	main( void )
{
	Serilization	ptr1("text");
	uintptr_t	test = serialize(&ptr1);
	Serilization	*ptr2 = deserialize(test);
	std::cout << "Data1 address: "<< &ptr1 << "\n";
	std::cout << "Data2 address: "<< ptr2 << "\n";
	std::cout << "Data1 value: " << ptr1.getPtr() << std::endl;
	std::cout << "Data2 value: " << (*ptr2).getPtr() << std::endl;
	std::cout << std::endl << std::endl;

	return (0);
}