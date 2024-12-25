#ifndef CRDI1_H
#define CRDI1_H
#include <iostream>
#include <dirent.h>
#include <sys/stat.h>

using namespace std;

class CrDi1
{
public:
    CrDi1();
    void ifDiEx1(const char *na1);
    void crDir1(const char *pa1);
    void dirLi1(const char *pa1);
    void findD();

    void defineEntT(); // define entity type .... what is the file
        //extension (*.rtf, *.png)
};

#endif // CRDI1_H
