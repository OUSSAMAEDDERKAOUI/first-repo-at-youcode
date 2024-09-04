#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int nombre,i,j, count =0 ,found ;
   char titre[50][50];
   char auteur[50][50];
   int quantite[50];
   float prix [50];
   char titrerech[50];
   char titlefind [50];
   int s=0;
   do {
   printf ("------------ menu------------\n: ");
   printf("1-Ajouter un livre au stock.\n");
   printf("2-Afficher tous les livres disponibles.  \n");
   printf("3-Mettre à jour la quantité d'un livre.\n");
   printf("4-Supprimer un livre du stock.\n");
   printf("5-Afficher le nombre total de livres en stock.\n");
   printf("0-pour quitter le programme : \n");
   printf (" choisir parmi ces choix :");
   scanf("%d",&nombre);
    switch  (nombre)
    {
     case 0 :printf ("le programme est ferme .");
     break;
     case 1 : printf ("veuilliez entrer les informations de chaque livre :\n");
              printf ("Titre du livre: ");
              scanf("%s",titre[count]);
              printf("Auteur du livre : ");
              scanf("%s",auteur[count]);
              printf("Prix du livre: ");
              scanf("%f",&prix[count]);
              printf("Quantité en stock: \n");
              scanf ("%d",&quantite[count]);
              count++;
     break ;
     case 2 :
     for (i=0;i<count;i++)
     printf (" titre : %s \n auteur : %s \n prix : %f \n quantite : %d \n\n",titre[i],auteur[i],prix[i],quantite[i]);
     break ;
     case 3 :
        printf("veuilliez entre le titre de livre rechercher : ");
        scanf("%s",titrerech);
        int found =0;
        for (i=0;i<count;i++){
        if (strcmp(titre[i],titrerech)==0)
        {
            found=1;
            printf("la derniere valeur est %d .\n",quantite[i] );
            printf("veuilliez entre  la nouvelle  quantite : \n");
            scanf ("%d",&quantite[i]);
            printf("la quantite est  mise a jour avec succes .\n" );
            break;
        }
        }
        if(found!=1)
            printf ("le livre n existe pas .\n");
        break ;
     case 4 :
        printf("Entrer le title de livre a supprimer  : \n-");
                scanf("%s",titlefind);
                for(int i=0; i<count; i++){
                    if(strcmp(titre[i],titlefind) == 0){
                        for(int j=i; j<count; j++){
                            strcpy(titre[j],titre[j+1]);
                            strcpy(auteur[j],auteur[j+1]);
                            prix[j] = prix[j+1];
                            quantite[j] = quantite[j+1];
                        }
                        found = 1;
                        count--;
                        printf("le livre a ete supprimer avec success !\n");
                        break;
                    }
                }
                if(found == 0){
                    printf("le livre est introuvable !\n");
                }
                found = 0;

     break;
     case 5 :
        for (i=0;i<count;i++)
            s=s+quantite[i];
        printf("le nombre totale des livres en stock est  :%d\n",s);
     break;
   }
     }while (nombre !=0);
    return 0;
}