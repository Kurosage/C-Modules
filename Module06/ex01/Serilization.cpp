#include "Serilization.hpp"

Serilization::Serilization(std::string ptr){
    this->ptr = ptr;

}
Serilization::~Serilization(){

}

Serilization::Serilization(const  Serilization &a){
    ptr = a.getPtr();
	std::cout << "Serilization copy constructor called\n";
}

Serilization &Serilization::operator=(const  Serilization &a){
    ptr = a.getPtr();
    std::cout << "Serilization copy assignment operator called\n";
	return *this;
}

std::string Serilization::getPtr() const{
    return this->ptr;
}

