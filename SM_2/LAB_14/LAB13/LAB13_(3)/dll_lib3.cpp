#include "dll_lib3.h"
using namespace std;
void __declspec (dllexport) sort(int* f, int n, int m) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m - 1; j++) 
		{
			for (int k = j + 1; k < m; k++) 
			{
				if (*(f + i * m + j) > *(f + i * m + k)) 
				{
					int c = *(f + i * m + j);
					*(f + i * m + j) = *(f + i * m + k);
					*(f + i * m + k) = c;
				}
			}
		}
	}
}
