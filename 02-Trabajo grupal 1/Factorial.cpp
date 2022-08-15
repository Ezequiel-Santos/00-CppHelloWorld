//10/08/2022
//Equipo 01
//AyED k1051

// fac: N -> N/ fac(x)= x(x-1) * x(x-2) * x(x-3) ... x(x-n)

#include<cassert>

int fac(unsigned int);

int main() {

    //pruebas factorial
    assert(1 == fac(0));
    assert(1 == fac(1));
    assert(2 == fac(2));
    assert(6 == fac(3));
    assert(24 == fac(4));
    assert(120 == fac(5));
    assert(720 == fac(6));
    assert(5040 == fac(7));
    assert(40320 == fac(8));

}

int fac(unsigned int x)
{
    return x == 0 ? 1 :
           x * fac(x - 1);
}
