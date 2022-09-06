#ifndef SERILIZATION_H
#define SERILIZATION_H
#include <iostream>
#include <string>


class Serilization{
    private:
        std::string ptr;
    public:
        Serilization(std::string arg);
        ~Serilization();
        Serilization(const Serilization &a);
        Serilization &operator = (const Serilization &a);
        std::string getPtr() const;
};

#endif