#include "StaticLib1.h"
int creatv(int* v, int nv)
{
	int i;
	for (i = 0; i < nv; i++)
		*(v + i) = rand() % 11;
	return 0;
}
int outv(int* v, int nv)
{
	int i;
	for (i = 0; i < nv; i++)
		printf("%5d ", *(v + i));
	cout << "\n";
	return 0;
}
 
