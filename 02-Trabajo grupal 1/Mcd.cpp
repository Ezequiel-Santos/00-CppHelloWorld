//10/08/2022
//Equipo 1
//AyED k1051

// Mcd: N -> N/ Mcd(x;y)= m/x ^ m/y

#include<cassert>

unsigned int Mcd(unsigned int, unsigned int);
int Bus(unsigned int, unsigned int,int&,int&);
int min(int, int);

int main()
{
    //pruebas de la funcion Mcd
    assert(3 == Mcd(6,9));
}

unsigned int Div(unsigned int x,unsigned  int y)
{
    return x / y;
}

int resto(int x,int y)
{
    return x % y;
}

int min(int x, int y)
{
    return x < y ? x :
           y;
}

int Bus(unsigned int x, unsigned int y,int &n,int &L)
{
    n++;
    return n == min(x, y) ? L :
           resto(x, n) == 0 and resto(y, n) == 0 ? (n = n-1) && (L = L * n) && (x = Div(x, n)) && (y = Div(y, n)) && Bus(x, y,n, L) :
           /*resto(x, n) != 0 and resto(y, n) != 0 ?*/ Bus(x, y, n, L)  ;
}

unsigned int Mcd(unsigned int x, unsigned int y)
{
    int L = 1;
    int n = 1;
    return	Bus(x, y, n, L);
}
