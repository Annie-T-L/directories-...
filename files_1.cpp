#include "files_1.h"
#include "crdi1.h"

Files_1::Files_1()
{
}

bool Files_1::ifFEx(const char* na1) // without '*' does not working WHY ?
{
    // it won't find a file "filename" it just create one ....
    // or else u can enter the full path instead of "filename"
    FILE *f1;
    if (f1 = fopen(na1, "a"))
    {   fclose(f1); cout << " file exist!\n "; return true; }
    else
    {   cout << "file does not ex\n";   return false;   }
}

void Files_1::crFi(const char pa1) //do not need this F was created in prev. function
{}
