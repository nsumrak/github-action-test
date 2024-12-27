#include "fibonacci.h"

Fibonacci::Fibonacci()
{
    _arr = 0L;
    _num = 0;
}

Fibonacci::Fibonacci(unsigned n)
{
    _num = n;
    _arr = 0L;

    if(!n)
        return;

    _arr = new unsigned[n];
    _arr[0] = 1;

    // Variable to store the last two terms
    unsigned prev1 = 1, prev2 = 0;
    
    // Variable that stores the current fibonacci term
    unsigned curr;

    // Calculating the next fibonacci number by using
    // the previous two number
    for (unsigned i = 1; i < n; i++) {
        curr = prev1 + prev2;
        _arr[i] = curr;
        prev2 = prev1;
        prev1 = curr;
    }
}

Fibonacci::~Fibonacci()
{
    if(_arr)
        delete[] _arr;
}

unsigned Fibonacci::sum()
{
    unsigned sum = 0;
    if(_arr) {
        for(unsigned i = 0; i < _num; i++) sum += _arr[i];
    }
    return sum;
}
