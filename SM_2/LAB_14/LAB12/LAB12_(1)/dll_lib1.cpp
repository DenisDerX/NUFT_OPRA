#include "dll_lib1.h"
using namespace std;
int __declspec (dllexport) det(int* v, int nv)
{
	int i;
	for (i = 0; i < nv - 1; i++)
	{
		if (*(v + i) < *(v + i + 1))
			return false;
	}
	return true;
}
