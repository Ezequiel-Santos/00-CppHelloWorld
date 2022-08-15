//10/08/2022
//Equipo 01
//AyED k1051

//  div: N -> N / div(x;y)=x/y

#include<cassert>

unsigned int Div(unsigned int, unsigned int);


int main()
{
    //pruebas de las funcion div
    assert(0 == Div(3,4));
    assert(1== Div(5,5));
    assert(2 == Div(8,4));
    assert(1 == Div(21,15));

}


unsigned int Div(unsigned int x,unsigned  int y)
{
    return x / y;
}