//10/08/2022
//Equipo 01
//AyED k1051

// fib: N -> N/ fib(x)={0                   si n=0
//                     {1                   si n=1
//                     {fib(x-1)+fib(x-2)   si n>1

#include<cassert>

int fib(unsigned int);

int main()
{
    //pruebas Fibonacci
    assert(0 == fib(0));
    assert(1 == fib(1));
    assert(1 == fib(2));
    assert(55 == fib(10));
    assert(24157817 == fib(37));

}

int fib(unsigned int x)
{
    return x == 0 ? 0 :
           x == 1 ? 1 :
           /*x > 1 ?*/ (fib(x - 1) + fib(x - 2));
}

