#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char nom_eleve[99][99] ;

// définie les valeur de base du tableau ( nom des eleves et si ces eleve on déja été choisie dans un groupe (par défault aucun n'eleve n'est chosiie))
void define ()
{
strcpy(&nom_eleve[1][0],"Rayane");
strcpy(&nom_eleve[2][0],"Pierre");
strcpy(&nom_eleve[3][0],"Estebane");
strcpy(&nom_eleve[4][0],"JeremyC");
strcpy(&nom_eleve[5][0],"Enzo");
strcpy(&nom_eleve[6][0],"Frederic");
strcpy(&nom_eleve[7][0],"Julien");
strcpy(&nom_eleve[8][0],"Thibault");
strcpy(&nom_eleve[9][0],"JeremyM");
strcpy(&nom_eleve[10][0],"Louis");
strcpy(&nom_eleve[11][0],"Evan");
strcpy(&nom_eleve[12][0],"Theo");
nom_eleve[0][0] = 'y';
for (int i =1;i < 13 ; i++)
    {
    nom_eleve[0][i] = 'x';
    }
}


int main()
{
int random1 = 0;
int random2 = 0;
define();
for (int i = 1; i!= 7;i++)// boucle 6 fois car on veut 6 groupe
    {
    while (nom_eleve[0][random1] == 'y' || nom_eleve[0][random2] == 'y' || random1 == random2 )//cherche 2 eleve différent et pas encore choisie dans un groupe
        {
        random1 = rand()%12+1;
        random2 = rand()%12+1;
        }
    nom_eleve[0][random2] = 'y';
    nom_eleve[0][random1] = 'y';
    printf("\nLe groupe numero : %d\n est constituer de : %s et de : %s\n",i,&nom_eleve[random1][0],&nom_eleve[random2][0]);
    random2 = 0;
    random1 = 0;
    }
return 0;
} 