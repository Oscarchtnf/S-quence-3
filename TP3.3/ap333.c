#include <stdio.h>
#include <stdlib.h>
//-----------------------------triple-----------------------------------
float triple(float nombre){
	float resultat = 0;
	resultat = 3 * nombre;
	return resultat;}

//-----------------------------Addition----------------------------------
int addition(int a, int b){
	return a + b;}

void bonjour(){
	printf("bonjour");}

// ----------------------moyenne de 5 nombres---------------------------
float Moyenne_5(float nba, float nbb, float nbc, float nbd, float nbe){
	return (nba+nbb+nbc+nbd+nbe)/5;}

//-------------------------Compter jusqu'a n----------------------------
void Compter_n(int nombrenfois){
	for (int i = 0; i < nombrenfois+1; ++i){
		printf("Compteur = %d\n",i );}}


//----------------------Imc poids taille genre--------------------------
void Imc(float poids, int age, float taille, char genre){
	float imc = poids / (taille * taille);
	switch(genre)
	{
	case 1: printf("\nBonjour, vous étes une femme, vous avez %d ans, vous pesez %f KG, vous mesurez %f cm et votre IMC est de %f\n ",age, poids, taille, imc); break;
    case 2 : printf("\nBonjour, vous étes un homme, vous avez %d ans, vous pesez %f KG, vous mesurez %f cm et votre IMC est de %f\n ",age, poids, taille, imc); break; }}

//--------------------Fonction principale du code-----------------------
int main()
{
	float nombreentre =0, nombretriple=0;
	printf("Saisir un nombre\n");
	scanf("%f", &nombreentre);
	nombretriple = triple (nombreentre);
	printf("Le triple de ce nombe est de :%f\n", nombretriple);

	int nombre1 = 0, nombre2=0, nombreadd=0;
	printf("Saisir un premier nombre à addittionner\n");
	scanf("%d", &nombre1);
	printf("Saisir un deuxiéme nombre à addittionner\n");
	scanf("%d", &nombre2);
	nombreadd = addition (nombre1, nombre2);
	printf("L'addition de ces deux nombres est égale à : %d\n", nombreadd);
	
	printf("bonjour\n");

// ----------------------moyenne de 5 nombres---------------------------
	printf("Moyenne de (10,2,1,24,7) : %f\n",Moyenne_5(10,2,1,24,7));

//-------------------------Compter jusqu'a n----------------------------
	int nombrenfois=0;
	printf("Saisir le nombre de fois a repeter n fois le compteur:\n");
	scanf("%d", &nombrenfois);
	Compter_n(nombrenfois);

//----------------------Imc poids taille genre--------------------------
	int age;
	float poids, taille;
	int genre;
	printf("Quel est votre age?");
	scanf("%d", &age);
	printf("Quel est votre poids (en kg)?");
	scanf("%f", &poids);
	printf("Quelle est votre taille (en m)?");
	scanf("%f", &taille);
	printf("Quel est votre genre (1 pour femme / 2 pour homme)?");
	scanf("%d", &genre);
	Imc(poids, age, taille, genre);
}

