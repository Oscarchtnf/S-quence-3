#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
	int Mode, acceuilmaintenance;
	char nom, prenom, texte;
	int etat;


// MENU acceuilmaintenance, 3 machines et 1 à sélectionner
	printf("***********************Bienvenue dans le menu Accueil Maintenance***********************\n-----------Pour choisir l'ascenseur tapez 1-----------\n-----------Pour choisir la Presse tapez 2-----------\n-----------Pour choisir l'Emballeuse tapez 3-----------\n");
	scanf("%d",&acceuilmaintenance);
	switch(acceuilmaintenance)
	{
	case 1: printf("Vous avez sélectionner la machine ascenseur !!\n "); break;
	case 2: printf("Vous avez sélectionner la machine Presse !!\n "); break;
    case 3: printf("Vous avez sélectionner la machine Emballeuse !!\n"); break;}
	//Fin du menu d'acceuil


//MENU sélection du mode
	printf("***********************Bienvenue dans le menu de sélection de votre mode***********************\n-----------Pour rentrer dans le mode édition tapez 1-----------\n-----------Pour entrer dans le mode consultation tapez 2-----------\n");
    scanf("%d",&Mode);
    switch(Mode)
	{
	case 1: printf("Vous avez sélectionner le mode édition !!\n"); break;
    case 2 : printf("Vous avez sélectionner le mode consultation !!\n"); break;}


// Si le mode sélctionné est le mode édition alors demander prenom, nom est bilan limité a 20 caractéres
	if (Mode==1)
	{
		printf("Quel est votre nom ?\n");
		scanf("%s", &nom);
		printf("Quel est votre prénom ?\n");
		scanf("%s", &prenom);

// Etat du systeme
		printf("Si L'état du systéme est très bon tapez 1\nSi L'état du systéme est bon tapez 2\nSi L'état du systéme est passable tapez 3\nSi L'état du systéme est mauvais tapez 4\n");
    	scanf("%d",&etat);
		switch(etat)
		{
		case 1: printf("L'état du système est très bon !!!!\n"); break;
    	case 2: printf("L'état du système est bon !!!\n"); break;
    	case 3: printf("L'état du système est passable!!\n "); break;
    	case 4: printf("L'état du système est mauvais!\n"); break;
    	}


		printf("Rapport sur la machine ?\n");
		scanf("%s", &texte);
	}
	else
	{
		printf("le mode consultation va s'ouvrir\n");

		if (acceuilmaintenance==1)
		{
			
		FILE* fichier = NULL;

    	fichier = fopen("rapport_ASCENSEUR.txt", "w");
    	if(fichier!=NULL)
    	{
    		fprintf(fichier, "Rapport de %s %s sur la machine %d. Etat : %s, rapport : %s\n", nom, prenom, acceuilmaintenance, etat, texte);
    		fclose(fichier);}



    	if (acceuilmaintenance==2)
    	{
		FILE* fichier = NULL;

    	fichier = fopen("rapport_PRESSE.txt", "w");
    	if(fichier!=NULL)
    	{
    		fprintf(fichier, "Rapport de %s %s sur la machine %d. Etat : %s, rapport : %s\n", nom, prenom, acceuilmaintenance, etat, texte);
    		fclose(fichier);}
    	}



    	if (acceuilmaintenance==3)
    	{
		FILE* fichier = NULL;

    	fichier = fopen("rapport_EMBALLEUSE.txt", "w");
    	if(fichier!=NULL)
    	{
    		fprintf(fichier, "Rapport de %s %s sur la machine %d. Etat : %s, rapport : %s\n", nom, prenom, acceuilmaintenance, etat, texte);
    		fclose(fichier);
    	}
    }
    	return 0;
	}
}
}