#include "Convert.hpp"
#include <limits.h>

Convert::Convert(std::string arg){
    this->arg = arg;

}
Convert::~Convert(){

}

Convert::Convert(const  Convert &a){
    arg = a.getArg();
	std::cout << "Convert copy constructor called\n";
}

Convert &Convert::operator=(const  Convert &a){
    arg = a.getArg();
	this->c_t = a.getChar();
	this->i_t = a.getInt();
	this->f_t = a.getFloat();
	this->d_t = a.getDouble();
    std::cout << "Convert copy assignment operator called\n";
	return *this;
}

std::string Convert::getArg() const{
    return this->arg;
}
int Convert::getInt() const{
    return this->i_t;
}
float Convert::getFloat() const{
    return this->f_t;
}
double Convert::getDouble() const{
    return this->d_t;
}
char Convert::getChar() const{
    return this->c_t;
}
int	Convert::checkInvis(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
Convert::operator char()
{
	char c = 0;
	if (arg.length() == 1)
	{
		int d = 0;
		try
		{
			d = stoi(arg);
			c = static_cast<char>(d);
		}
		catch (const std::invalid_argument& e){
			c = arg[0];
		}
		if (checkInvis(c))
			std::cout << "char: " << c << "\n";
		else
			std::cout << "char: Non displayable\n";
		return (c);
	}
	else
	{
		int	d = 0;
		try
		{
			d = stoi(arg);
		}
		catch (const std::invalid_argument& e){
			std::cout << "char: impossible\n";
			return (0);
		}
		catch (const std::out_of_range& ee) {
			std::cout << "char: impossible\n";
			return (0);
		}
		if (d < CHAR_MIN || d > CHAR_MAX)
		{
			std::cout << "char: impossible\n";
			return (0);
		}
		c = static_cast<char>(d);
		if (checkInvis(c))
			std::cout << "char: " << c << "\n";
		else
			std::cout << "char: Non displayable\n";
		return (c);
	}
}

Convert::operator int()
{
	int	d = 0;

	try
	{
		d = stoi(arg);
	}
	catch (const std::invalid_argument& e){
		std::cout << "int: impossible\n";
		return (0);
	}
	catch (const std::out_of_range& ee) {
		std::cout << "int: impossible\n";
		return (0);
	}
	std::cout << "int: " << d << "\n";
	return (d);
}

Convert::operator float()
{
	float	f = 0;
	try
	{
		f = stof(arg);
		if ((f - stoi(arg)) == 0)
			std::cout << "float: " << f << ".0f\n";
		else
			std::cout << "float: " << f << "f\n";
	}
	catch (const std::invalid_argument& e){
		if (arg == "nan" || arg == "+inf" || arg == "-inf")
			std::cout << "float: " << f << "f\n";
		else
			std::cout << "float: impossible\n";
		return (f);
	}
	catch (const std::out_of_range& ee) {
		std::cout << "float: impossible\n";
		return (f);
	}
	return (f);
}

Convert::operator double()
{
	double	d = 0;
	try
	{
		d = stod(arg);
		std::cout << "double: " << d << "\n";
	}
	catch (const std::invalid_argument& e){
		std::cout << "double: impossible\n";
		return (d);
	}
	catch (const std::out_of_range& ee) {
		std::cout << "double: impossible\n";
		return (d);
	}
	return (d);
}