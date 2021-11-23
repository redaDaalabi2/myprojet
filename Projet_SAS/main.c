#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 50

//declaration des variables
int chose,nb,n,i,j=0;

//la définition de la strecture compte_bancaire
typedef struct compte_bancaire
{
	char CIN[10];
	char Nom[20];
	char Prenom[20];
	double Montant;

}compte_bancaire;

//la définition de la strecture Les_comptes_bancaires qui contient plusieurs compte bancaire
struct compte_bancaire Les_Comptes_Bancaires[max];

//prototype de tout les fonctions
void introduire_plusieurs_compte_bancaire();

void introduire_un_compte_bancaire();

void afficher_les_comptes_bancaires();

void tri_par_ordre_ascendant();

void tri_par_ordre_descendant();

void rechercher_par_CIN();

int main()
{
    //declaration
    double montant, MONTANT;
    char cin[10];
    //annimation
    system("color FC");
    // présentation
    printf("Programme : Gestion Bancaire / Le 26/11/2021\n");
    printf("R%calis%c par: Reda DAALABI \n",130,130);
    printf("Encadr%c par: Mme. Fatimaezzahra SEDRAOUI\n",130);
    do
    {
	  printf("\n*************************MENU***************************\n\n");
	  printf("                 Gestion Bancaire\n");
      printf("         Totale des comptes bancaires : %d\n\n",n);
      printf("1   : pour ajouter plusieurs comptes bancaires\n");
      printf("2   : pour ajouter un compte bancaire\n");
      printf("3   : pour afficher tout les comptes bancaires\n");
      printf("4   : pour d%cbiter un compte bancaire\n",130);
      printf("5   : pour cr%cditer un compte bancaire\n",130);
      printf("6   : pour tri%cer les comptes bancaires par ordre ascendant\n",130);
      printf("7   : pour tri%cer les comptes bancaires par ordre descendant\n",130);
      printf("8   : pour tri%cer les comptes bancaires par ordre ascendant (ayant un montant sup%crieur)\n",130,130);
      printf("9   : pour tri%cer les comptes bancaires par ordre descendant (ayant un montant sup%crieur)\n",130,130);
      printf("10  : pour chercher un compte bancaire par CIN\n");
      printf("11  : Fid%clisation\n",130);
      printf("12  : pour quitter\n");
      printf("\nTu peux choisir s'il vous plait : ");
    scanf("%d",&chose);
    switch(chose)
    {
    	case 1 :
        introduire_plusieurs_compte_bancaire();
        system("pause");
        system("cls");
		break;
    	case 2 :
        introduire_un_compte_bancaire();
		system("pause");
		system("cls");
		break;
		case 3 :
        if(n==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        afficher_les_comptes_bancaires();
		system("pause");
		system("cls");
		break;
		case 4 :
        if(n==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Choisissez le compte a debiter par CIN : ");
        scanf("%s",cin);
        for(i=1;i<=n;i++)
        {
          if(strcmp(cin,Les_Comptes_Bancaires[i].CIN)==0)
          {
              printf ("Veillez saisir le montant a debiter: ");
              scanf ("%lf", &montant);
              if (montant<=Les_Comptes_Bancaires[i].Montant)
              {
                 Les_Comptes_Bancaires[i].Montant=Les_Comptes_Bancaires[i].Montant-montant;
                 printf("votre Montant est : %.2lf\n",Les_Comptes_Bancaires[i].Montant);
              }
              else
              {
                 printf("Votre solde est insuffisant pour effectuer cette operation\n");
              }
          }
        }
        }
		system("pause");
		system("cls");
		break;
		case 5 :
        if(n==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Choisissez le compte a crediter par CIN : ");
        scanf("%s",cin);
        for(i=1;i<=n;i++)
        {
          if(strcmp(cin,Les_Comptes_Bancaires[i].CIN) == 0)
          {
              printf ("Veillez saisir le montant a debiter: ");
              scanf ("%lf", &montant);
              Les_Comptes_Bancaires[i].Montant=Les_Comptes_Bancaires[i].Montant+montant;
              printf("votre Montant est : %.2lf\n",Les_Comptes_Bancaires[i].Montant);
          }
        }
        }
		system("pause");
		system("cls");
		break;
		case 6 :
        tri_par_ordre_ascendant();
        afficher_les_comptes_bancaires();
        system("pause");
		system("cls");
        break;
        case 7 :
        tri_par_ordre_descendant();
        afficher_les_comptes_bancaires();
        system("pause");
		system("cls");
        break;
		case 8 :
        if(n==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Veillez saisir le montant : ");
        scanf("%lf",&MONTANT);
        tri_par_ordre_ascendant();
        for(i=1;i<=n;i++)
        {
            if(Les_Comptes_Bancaires[i].Montant>MONTANT)
            {
               printf("CIN :%s\nNom : %s\nPrenom : %s\nMontant : %.2lf DH\n",Les_Comptes_Bancaires[i].CIN,Les_Comptes_Bancaires[i].Nom,Les_Comptes_Bancaires[i].Prenom,Les_Comptes_Bancaires[i].Montant);
            }
            printf("**********************************\n");
        }
        }
		system("pause");
		system("cls");
		break;
		case 9 :
        if(n==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Veillez saisir le montant : ");
        scanf("%lf",&MONTANT);
        tri_par_ordre_descendant();
        for(j=1;j<=n;j++)
        {
            if(Les_Comptes_Bancaires[j].Montant>MONTANT)
            {
               printf("CIN :%s\nNom : %s\nPrenom : %s\nMontant : %.2lf DH\n",Les_Comptes_Bancaires[j].CIN,Les_Comptes_Bancaires[j].Nom,Les_Comptes_Bancaires[j].Prenom,Les_Comptes_Bancaires[j].Montant);
            }
            printf("***********************************\n");
        }
        }
		system("pause");
		system("cls");
		break;
		case 10 :
        if(n==0){
          printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        rechercher_par_CIN();
        }
		system("pause");
		system("cls");
		break;
		case 11 :
        if(n==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
           //fedilisation
        }
		system("pause");
		system("cls");
		break;
		case 12:
        printf("\nMerci Aurevoir et a bientot !!\n");
        break;
        default :
        printf("votre choix n'est pas valide !!!\n");
        system("pause");
		system("cls");
	}
	}while(chose!=12);
    return 0;
}

//fonction qui permet la saisie de plusieurs compte bancaire
void introduire_plusieurs_compte_bancaire()
{
   printf("Entrer le nombre des comptes bancaires que vous voulez saisie : ");
   scanf("%d",&nb);
   printf("\n\n");
   for(i=1;i<=nb;i++)
   {
      printf("Saisir les information de compte bancaire numero %d :  \n\n",n+1);
      printf("CIN : ");
      scanf("%s",Les_Comptes_Bancaires[n+1].CIN);
      printf("Nom : ");
      scanf("%s",Les_Comptes_Bancaires[n+1].Nom);
      printf("Prenom : ");
      scanf("%s",Les_Comptes_Bancaires[n+1].Prenom);
      printf("Montant : ");
      scanf("%lf",&Les_Comptes_Bancaires[n+1].Montant);
      n=n+1;
   }
}

//fonction qui permet la saisie un compte bancaire
void introduire_un_compte_bancaire()
{
    printf("\n\n");
    printf("Saisir les information de votre compte bancaire %d :  \n\n",n+1);
    printf("CIN : ");
    scanf("%s",Les_Comptes_Bancaires[n+1].CIN);
    printf("Nom : ");
    scanf("%s",Les_Comptes_Bancaires[n+1].Nom);
    printf("Prenom : ");
    scanf("%s",Les_Comptes_Bancaires[n+1].Prenom);
    printf("Montant : ");
    scanf("%lf",&Les_Comptes_Bancaires[n+1].Montant);
    n=n+1;
    printf("\n\n");
}

//fonction qui permet de afficher tout les comptes bancaires
void afficher_les_comptes_bancaires()
{

    for(i=1;i<=n;i++)
    {
        printf("***********************************\n");
        printf("CIN :%s\nNom : %s\nPrenom : %s\nMontant : %.2lf DH\n",Les_Comptes_Bancaires[i].CIN,Les_Comptes_Bancaires[i].Nom,Les_Comptes_Bancaires[i].Prenom,Les_Comptes_Bancaires[i].Montant);
    }
}

//fonction qui permet de trier les comptes bancaires par ordre croissante
void tri_par_ordre_ascendant()
{
    char tmpcin[10], tmpnom[20], tmpprenom[20];
    double tmpmontant;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(Les_Comptes_Bancaires[j].Montant<Les_Comptes_Bancaires[i].Montant)
            {
                //permutation
                strcpy(tmpcin,Les_Comptes_Bancaires[i].CIN);
                strcpy(Les_Comptes_Bancaires[i].CIN,Les_Comptes_Bancaires[j].CIN);
                strcpy(Les_Comptes_Bancaires[j].CIN,tmpcin);

                strcpy(tmpnom,Les_Comptes_Bancaires[i].Nom);
                strcpy(Les_Comptes_Bancaires[i].Nom,Les_Comptes_Bancaires[j].Nom);
                strcpy(Les_Comptes_Bancaires[j].Nom,tmpnom);

                strcpy(tmpprenom,Les_Comptes_Bancaires[i].Prenom);
                strcpy(Les_Comptes_Bancaires[i].Prenom,Les_Comptes_Bancaires[j].Prenom);
                strcpy(Les_Comptes_Bancaires[j].Prenom,tmpprenom);

                tmpmontant=Les_Comptes_Bancaires[i].Montant;
                Les_Comptes_Bancaires[i].Montant=Les_Comptes_Bancaires[j].Montant;
                Les_Comptes_Bancaires[j].Montant=tmpmontant;
            }
        }
    }
}

//fonction qui permet de trier les comptes bancaires par ordre decroissante
void tri_par_ordre_descendant()
{
    char tmpcin[10], tmpnom[20], tmpprenom[20];
    double tmpmontant;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(Les_Comptes_Bancaires[j].Montant>Les_Comptes_Bancaires[i].Montant)
            {
                //permutation
                strcpy(tmpcin,Les_Comptes_Bancaires[i].CIN);
                strcpy(Les_Comptes_Bancaires[i].CIN,Les_Comptes_Bancaires[j].CIN);
                strcpy(Les_Comptes_Bancaires[j].CIN,tmpcin);

                strcpy(tmpnom,Les_Comptes_Bancaires[i].Nom);
                strcpy(Les_Comptes_Bancaires[i].Nom,Les_Comptes_Bancaires[j].Nom);
                strcpy(Les_Comptes_Bancaires[j].Nom,tmpnom);

                strcpy(tmpprenom,Les_Comptes_Bancaires[i].Prenom);
                strcpy(Les_Comptes_Bancaires[i].Prenom,Les_Comptes_Bancaires[j].Prenom);
                strcpy(Les_Comptes_Bancaires[j].Prenom,tmpprenom);

                tmpmontant=Les_Comptes_Bancaires[i].Montant;
                Les_Comptes_Bancaires[i].Montant=Les_Comptes_Bancaires[j].Montant;
                Les_Comptes_Bancaires[j].Montant=tmpmontant;
            }
        }
    }
}

//fonction qui permet de chercher un compte bancaire par CIN
void rechercher_par_CIN()
{
      char cin[10];
      int j=0;
      printf(" Saisir CIN : ");
      scanf("%s",cin);
      for(i=1;i<=n;i++)
      {
        if(strcmp(Les_Comptes_Bancaires[i].CIN,cin)==0)
        {
            printf("\nRechercher un compte bancaire par CIN : \n");
            printf("Quelques informations sur le compte bancaire que vous avez recherche : \n");
            printf("----------------------------------\n");
            printf("CIN : %s\n",Les_Comptes_Bancaires[i].CIN);
            printf("Nom : %s\n",Les_Comptes_Bancaires[i].Nom);
            printf("Prenom : %s\n",Les_Comptes_Bancaires[i].Prenom);
            printf("Montant : %.2lf DH\n\n",Les_Comptes_Bancaires[i].Montant);
            j++;
        }
      }
      if(j==0)
      {
            printf("le compte n'existe pas !!\n");
      }
}

/*void fedilisation()
{

    for(i=1;i<=n;i++)
    {
        if(Les_Comptes_Bancaires[i].Montant>)
    }
}*/
