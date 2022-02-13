#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, char *argv[]) {
        int mode2Joueurs = -1;
         
        printf("Sasir 1 pour séléctionner le mode solo ou séléctionner 2 pour le mode 2 joueurs :\n");
        scanf("%d",&mode2Joueurs);
        printf("Vous avez séléctionner le mode %d\n", mode2Joueurs);
  
        int nombreMystere=0, nombreEntre=0, coup = 0;
        const int MIN = 1;
        int nombreMAX;

        printf("Sasir 1 pour séléctionner le niveau 1, séléctionner 2 pour le niveaux 2 et séléctionner 3 pour le niveaux 3 :\n");
        scanf("%d",&nombreMAX);
        printf("Vous avez séléctionner le niveau %d\n", nombreMAX);

        switch(nombreMAX) {
            case 1:
                nombreMAX = 100;
                break;
            case 2:
                nombreMAX= 1000;
                break;
            case 3:
                nombreMAX= 10000;
                break;
        }

        switch(mode2Joueurs) {
            case 1 :                                                     //mode un joueur
                srand(time(NULL));
                nombreMystere = (rand() % (nombreMAX - MIN + 1)) + MIN;
                break;
            case 2 :                                                     //mode 2 joueurs
                printf("Saisir un nombre à faire deviner entre 1 et %d\n", nombreMAX);
                scanf("%d",&nombreMystere);
                break;
        }
            do {
                // On demande le nombre
                printf("Quel est le nombre ?\n");
                scanf("%d",&nombreEntre);
                coup++;
                
                // On compare le nombre entré avec le nombre mystère
                if(nombreEntre<nombreMystere)
                    printf("\nC'est plus !\n");
                else if(nombreEntre>nombreMystere)
                    printf("\nC'est moin !\n");
            } while(nombreEntre != nombreMystere);
            printf("\nBravo, vous avez trouvé le nombre mystere en %d coups!!!\n",coup);
          
            return(0);

        }