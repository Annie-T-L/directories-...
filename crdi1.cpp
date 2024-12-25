#include "crdi1.h"
#include "crdi1.h"

CrDi1::CrDi1()
{
}

void CrDi1::ifDiEx1(const char *na1)
{
//    cout << "ifDiEx1()" << endl; // must be previous to use it onward (​    )
    DIR *d1 = opendir( na1);
    if (d1)
    {   cout << "dir ex\n"; }
    else if(ENOENT == errno)
    {   cout << "dir does not exist\n"; }
    else
    {   cout << "fail\n";   }
}

void CrDi1::crDir1(const char * pa1)
{
    //done, work, need to understand ...
    CrDi1 cr1;
    cr1.ifDiEx1("/home/a/Documents/Prog'S/my1");
    int st1;
    const char *pa2 = "/home/a/Documents/Prog'S/my1";
    st1 = mkdir(pa2, S_IRWXU | S_ISVTX); //why? this 2 why not smth else....
    if(0 != mkdir(pa2, 0777))
    {
        printf ("When execut mkdir(\%s)\n",pa2); // ??
//        perror(mkdir); // what's wrong with U
        exit(1);
    }
}

void CrDi1::dirLi1(const char *pa1)
{
//   works now need to Understand ....
    DIR *d1;
    struct dirent *ent;
//    pa1 = "/home/a/Documents";
    if ((d1 = opendir(pa1)) != nullptr)
    {
        while ((ent = readdir (d1 )) != nullptr)
        {   printf("%s\n", ent->d_name);    }
        closedir( d1);
    }
    else
    {   //couldn't open Dir ... ?
        perror( "");
//        return exit_failure;
    }
}

void CrDi1::findD()
{
    //only by the name or with path ?? think ...
}

void CrDi1::defineEntT()
{
    //
}
