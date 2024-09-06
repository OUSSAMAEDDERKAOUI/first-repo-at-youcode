#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
char eqname[60];
char stade [50];
char entri [50];
char pays [50];
}equipe;
typedef struct {
char numero [50];
char nom [50];
char poste [30];
 equipe equi ;

}joueur;
int i;
int main ()
{
    joueur j[2];
    printf ("veuillez entrer les information de  joueur\n ");

    for (i=0;i<1;i++){
    printf("le num est :");
    scanf("%s",j[i].numero);
    printf("le nom  est : ");
    scanf(" %[^\n]s",j[i].nom);
    printf("le poste est : ");
    scanf("%s",j[i].poste);
    printf("le nom eqip est :");
    scanf("%s",j[i].equi.eqname);
    printf("l 'entrineur est est :");
    scanf("%s",j[i].equi.entri);
    printf("le stdae est :");
    scanf("%s",j[i].equi.stade);
    printf("le pays est :");
    scanf("%s",j[i].equi.pays);
    }
    for (i=0;i<3;i++){
      printf ("les info de %d joueur est : %s---%s---%s---%s \n",i+1,j[i].numero,j[i].nom,j[i].poste,j[i].equi.eqname,j[i].equi.entri,j[i].equi.stade,j[i].equi.pays) ;

      }
    return 0;
}
