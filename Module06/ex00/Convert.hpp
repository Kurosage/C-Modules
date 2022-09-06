#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include <string>


class Convert{
    private:
        std::string arg;
        int i_t;
        float f_t;
        char c_t;
        double d_t;
    public:
        Convert(std::string arg);
        ~Convert();
        Convert(const  Convert &a);
        Convert &operator = (const Convert &a);
        std::string getArg() const;
        int getInt() const;
        float getFloat() const;
        double getDouble() const ;
        char getChar() const;
        int	checkInvis(char c);
        operator char();
        operator int();
        operator float();
        operator double();

};

#endif