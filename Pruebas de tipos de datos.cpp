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
    //integer
    assert (-1-2==-3);
    assert (-1+1==0);
    assert (-1*2>0);
    assert (-6/-3>0);
    //unsigned
    assert (10==1+1+1+1+1+1+1+1+1+1);
    assert (10/2==5);
    assert (5*5==25);
    //character
    assert (65+1==66);
    assert (10-1==9);
    assert (10*10+10/10==101);
    assert ("a"+1=="b");
    assert ("b"-1=="a");
    assert ("Hola mundo" == "Hola mundn"+1);
    //string
    assert ("Hola mundo" != "Adios mundo");
    assert ("Hola mundo" == "Hola mundo");
}