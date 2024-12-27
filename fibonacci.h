#pragma once

#include <iostream>

class Fibonacci
{
protected:
    Fibonacci();
    unsigned *_arr;
    unsigned _num;

public:
    Fibonacci(unsigned n);
    virtual ~Fibonacci();
    unsigned sum();
    unsigned last()
    {
        if(!_arr) return 0;
        else return _arr[_num-1];
    }
    void print()
    {
	std::cout << "Fibonacci:\n";
        if(_arr) {
            for(unsigned i = 0; i < _num; i++)
                std::cout << _arr[i] << std::endl;
        } else std::cout << "Empty\n";
    }
};
