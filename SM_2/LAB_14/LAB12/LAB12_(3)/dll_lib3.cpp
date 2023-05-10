#include "dll_lib3.h"
using namespace std;
int __declspec (dllexport) count(int* v, int nv)
{
	int i, k = 0;;
	for (i = 0; i < nv; i++)
	{
		if (*(v + i) > 0 && *(v + i) % 2 != 0)
		{
			k++;
		}
	}
	return k;
}
