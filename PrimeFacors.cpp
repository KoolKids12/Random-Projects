// PrimeFactor.cpp

#include "Header.h"

bool isPrime(_int64 num, vector <_int64>& sto);

int main()
{
	clock_t start = clock();
	
	_int64 i = 2;

	vector <_int64> Sto;

	do
	{
		isPrime(i, Sto);

		i++;

	} while (i < 600851475143);

	for (int k = 0; k < Sto.size(); k++)
	{
		if (600851475143 % Sto[k] == 0)
		{
			cout << Sto[k];
		}
	}
	
	start = clock() - start;
	printf("It took me %d clicks (%f seconds).\n", start, ((float)start) / CLOCKS_PER_SEC);

	system("Pause");

	return 0;
}

bool isPrime(_int64 num, vector <_int64>& sto)
{
	if (num == 1)
	{
		return true;
	}
	else
	{
		for (int i = 2; i < (sqrt(num)); i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
		return true;
	}
	if (true && 600851475143 % num == 0)
	{
		sto.push_back(num);
	}
}
