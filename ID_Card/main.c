#include <stdio.h>
#include <stdlib.h>



int main()
{

      FILE *P_FICHIER; /* pointeur sur FILE */
  char NOM_FICHIER[30], NOM_PERS[30], PRENOM_PERS[30], ADRESSE_PERS[50], CP_PERS[5], VILLE_PERS[30];

  int  I,NB_ENREG, fin;

   fin = 0;
   while(!fin)
   {
      int c;

      /* affichage menu */
      printf("1.Demarrer\n");

      c = getchar();

      /* suppression des caracteres dans stdin */
      if(c != '\n' && c != EOF)
      {
         int d;
         while((d = getchar()) != '\n' && d != EOF);
      }

      switch(c)
      {
         case '1':
            fin = 1;
            break;

         default:
            printf("Choix errone\n");
      }
   }



  /* Première partie :
     Créer et remplir le fichier */
  printf("Entrez le nom du fichier a creer : ");
  scanf("%s", NOM_FICHIER);
  P_FICHIER = fopen(NOM_FICHIER, "w");  /* write */
  printf("Nombre d'enregistrements a creer : ");
  scanf("%d", &NB_ENREG);
  I = 0;
  while (I<NB_ENREG)
     {
      printf("Entrez le nom : ");
      scanf("%s", NOM_PERS);
      fprintf(P_FICHIER, "%s\n", NOM_PERS);
      printf("Entrez le prenom : ");
      scanf("%s", PRENOM_PERS);
      fprintf(P_FICHIER, "%s\n", PRENOM_PERS);
      printf("Entrez l'adresse : ");
      scanf("%s", ADRESSE_PERS);
      fprintf(P_FICHIER, "%s\n", ADRESSE_PERS);
      printf("Entrez le code postal : ");
      scanf("%s", CP_PERS);
      fprintf(P_FICHIER, "%s\n", CP_PERS);
      printf("Entrez la ville: ");
      scanf("%s", VILLE_PERS);
      fprintf(P_FICHIER, "%s\n", VILLE_PERS);
      I++;
     }

  fclose(P_FICHIER);

  /* Deuxième partie :
     Lire et afficher le contenu du fichier */
  P_FICHIER = fopen(NOM_FICHIER, "r");  /* read */
  I = 0;
   if (NOM_FICHIER != NULL)

    {

        // On peut lire et écrire dans le fichier

    }

    else

    {

        // On affiche un message d'erreur si on veut

        printf("Impossible d'ouvrir le fichier txt");

    }


  while (!feof(P_FICHIER)) /*Feof sert à verifier si la fin du fichier (fEOF = End-Of-File) est associé avec le flux
                             Par conséquent, lorsque feof n'est pas présent d'ou la présence du "!feof", fonction stdio.h dans error-handling*/
     {
      fscanf(P_FICHIER, "%s\n", NOM_PERS);
      printf("NOM : %s\n", NOM_PERS);
      fscanf(P_FICHIER, "%s\n", PRENOM_PERS);
      printf("PRENOM : %s\n", PRENOM_PERS);
      fscanf(P_FICHIER, "%s\n", ADRESSE_PERS);
      printf("NOM : %s\n", ADRESSE_PERS);
      fscanf(P_FICHIER, "%s\n", CP_PERS);
      printf("NOM : %s\n", CP_PERS);
      fscanf(P_FICHIER, "%s\n", VILLE_PERS);
      printf("NOM : %s\n", VILLE_PERS);

      I++;
     }
  fclose(P_FICHIER);
  return 0;
}
