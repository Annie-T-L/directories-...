#include <iostream>
#include "crdi1.h"
#include "files_1.h"

using namespace std;

int main()
{
//    cout << "Hello World!" << endl;
    CrDi1 cr1;
    //if U want write here only name it must work like find f.
    //or else just write here all the path WITHOUT! spaces

//    cr1.ifDiEx1("/home/a/Documents/Prog'S/my1"); // done works!

//    cr1.crDir1("/home/a/Documents/Prog'S/my1"); // works .. cool
    const char *pa1 = "/home/a/Documents"; // no ! spaces ! careful =)
    cr1.dirLi1(pa1);

    return 0;
}

