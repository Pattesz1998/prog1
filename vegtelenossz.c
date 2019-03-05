#include <stdbool.h>

int main()
{
	#pragma omp parallel
	while (true)
	{
		;
	}
	return 0;
}

//Futtatása
//gcc vegtelenossz.c -o vegossz
//-fopenmp!!