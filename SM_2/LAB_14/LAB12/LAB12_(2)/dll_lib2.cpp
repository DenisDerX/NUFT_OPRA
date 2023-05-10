#include "dll_lib2.h"
using namespace std;
void __declspec (dllexport) cmat(char* mat)
{
    for (int i = 0; mat[i] != '\0'; i++) 
    {
        if (mat[i] == '/') 
        {
            mat[i] = '*';
        }
    }
}
