/*#include <stdio.h>
#include <stdlib.h>
int main()
	
//----boucle for------
	{
	for (int compteur = 0; compteur < 11; ++compteur)
	{
		printf("%d\n",compteur);
	}
	return 0;
	}
	*/


/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	int compteur = 0;

	while (compteur < 10)
	{
		printf("%d\n", compteur);
		compteur++;
	}
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int compteur = 0;
	do
	{
		printf("%d\n",compteur);
		compteur++;
	}while(compteur < 11);
	return 0;
}