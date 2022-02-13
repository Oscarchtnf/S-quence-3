#include <stdio.h>
#include <stdlib.h>
int main()
{
	int triple(int nombre)
	{
		int resultat = 0;

		resultat = 3 * nombre;
		return resultat;
	}

	int addition(int a, int b)
	{
		return a + b;
	}

	void bonjour()
	{
		printf("bonjour");
	}
	return 0;
}