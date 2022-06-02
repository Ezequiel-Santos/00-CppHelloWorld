#include <iostream>
#include <iomanip>
#include <cassert>

int main() {
    assert (2 == 1 + 1);
    // bool
    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);
    // double
    assert (2.0==1.0+1.0);
    assert (1.0==0.1*10.0);
    assert (1.0!=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    // long
    assert (7000 < 7500)
    assert (7000 + 1000 = 8000)
    //integer
    assert (-1-2==-3);
    assert (-1+1==0);
    assert (-1*2>0);
    assert (-6/-3>0);
    //unsigned
    assert (10u==1u+1u+1u+1u+1u+1u+1u+1u+1u+1u);
    assert (10u/2u==5u);
    assert (5u*5u==25u);
    //character
    assert ("c"-"a"=2)
    assert ("a"+1=="b");
    assert ("b"-1=="a");
    assert ("Hola mundo" == "Hola mundn"+1);
    //string
    assert ("Hola mundo" != "Adios mundo");
    assert ("Hola mundo" == "Hola mundo");
    assert (12 == "Las Palabras"s.length())
}
