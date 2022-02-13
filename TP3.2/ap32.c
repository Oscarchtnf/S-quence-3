#include <stdio.h>
#include <stdlib.h>
int main()

{
int age;
int argent;
printf("Entrez votre age :\n");
	scanf("%d", &age);
	printf("Entrez la somme de votre argent :\n");
	scanf("%d", &argent);

	if(argent<=1000){
		if (age>=0 && age<=10){
			printf("hors de ma vue jeune misérable\n");
		}
		if (age>=11 && age<=20){
			printf("hors de ma vue, adolescent misérable\n");
		}
		if (age>=21 && age<=30){
			printf("hors de ma vue jeune adulte misérable\n");
		}
		if (age>=31 && age<=40){
			printf("hors de ma vue vieux misérable\n");
		}
	}else{
		if(argent<=10000){
			if (age>=0 && age<=10){
				printf("Salut jeune\n");
			}
			if (age>=11 && age<=20){
				printf("Salut adolescent\n");
			}
			if (age>=21 && age<=30){
				printf("Salut jeune adulte\n");
			}
			if (age>=31 && age<=40){
				printf("Salut vieux\n");
			}
		}else{
			if(argent<=100000){
				if (age>=0 && age<=10){
					printf("Bienvenue jeune Piscou\n");
				}
				if (age>=11 && age<=20){
					printf("Salut adolescent Piscou\n");
				}
				if (age>=21 && age<=30){
					printf("Salut jeune adulte Piscou\n");
				}
				if (age>=31 && age<=40){
					printf("Salut vieux Piscou\n");
				}
				}

			}
		}	
}