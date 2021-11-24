#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#define MAX 50

//declaration des variables globale
int chose,nb,nbr_comp,i=0,j=0;

//la définition de la strecture compte_bancaire
typedef struct compte_bancaire
{
	char CIN[10];
	char Nom[20];
	char Prenom[20];
	double Montant;

}compte_bancaire;

//la définition de la strecture Les_comptes_bancaires qui contient plusieurs compte bancaire
struct compte_bancaire Les_Comptes_Bancaires[MAX];

//prototype de tout les fonctions
void introduire_plusieurs_compte_bancaire();

void introduire_un_compte_bancaire();

void afficher_les_comptes_bancaires();

void tri_par_ordre_ascendant();

void tri_par_ordre_descendant();

void rechercher_par_CIN();

void fedilisation();

void quitter();

void Color(int couleurDuTexte,int couleurDeFond);

int main()
{
    //declaration
    double montant, MONTANT;
    char cin[10];
    //annimation
    system("color F0");
    Color(5,15);
    // présentation
    printf("                               \xB2 Programme : Gestion Bancaire / Le 26/11/2021 \xB2\n");
    printf("                               \xB2         R%calis%c par: Reda DAALABI \xB8          \xB2 \n",130,130);
    printf("                               \xB2   Encadr%c par: Mme. Fatimaezzahra SEDRAOUI   \xB2\n",130);
    do
    {
	  printf("\n--------------------------------------------------\xB2MENU\xB2------------------------------------------------\n\n");
	  Color(3,15);
	  printf("                                              Gestion Bancaire\n");
      printf("                                      Totale des comptes bancaires : %d\n\n",nbr_comp);
      Color(0,15);
      printf("                               <1> : pour ajouter plusieurs comptes bancaires\n");
      printf("                                  <2> : pour ajouter un compte bancaire\n");
      printf("                               <3> : pour afficher tout les comptes bancaires\n");
      printf("                                 <4> : pour d%cbiter un compte bancaire\n",130);
      printf("                                 <5> : pour cr%cditer un compte bancaire\n",130);
      printf("                          <6> : pour tri%cer les comptes bancaires par ordre ascendant\n",130);
      printf("                          <7> : pour tri%cer les comptes bancaires par ordre descendant\n",130);
      printf("             <8> : pour tri%cer les comptes bancaires par ordre ascendant (ayant un montant sup%crieur)\n",130,130);
      printf("             <9> : pour tri%cer les comptes bancaires par ordre descendant (ayant un montant sup%crieur)\n",130,130);
      printf("                              <10> : pour chercher un compte bancaire par CIN\n");
      printf("                                         <11> : Fid%clisation\n",130);
      printf("                                         <12> : pour quitter\n");
      Color(5,15);
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
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        afficher_les_comptes_bancaires();
		system("pause");
		system("cls");
		break;
		case 4 :
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Choisissez le compte a debiter par CIN : ");
        scanf("%s",cin);
        for(i=1;i<=nbr_comp;i++)
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
          else
          {
              printf("le compte n'existe pas !! \n");
          }
        }
        }
		system("pause");
		system("cls");
		break;
		case 5 :
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Choisissez le compte a crediter par CIN : ");
        scanf("%s",cin);
        for(i=1;i<=nbr_comp;i++)
        {
          if(strcmp(cin,Les_Comptes_Bancaires[i].CIN) == 0)
          {
              printf ("Veillez saisir le montant a debiter: ");
              scanf ("%lf", &montant);
              Les_Comptes_Bancaires[i].Montant=Les_Comptes_Bancaires[i].Montant+montant;
              printf("votre Montant est : %.2lf\n",Les_Comptes_Bancaires[i].Montant);
          }
          else
          {
              printf("le compte n'existe pas !! \n");
          }
        }
        }
		system("pause");
		system("cls");
		break;
		case 6 :
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        tri_par_ordre_ascendant();
        afficher_les_comptes_bancaires();
        }
        system("pause");
		system("cls");
        break;
        case 7 :
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        tri_par_ordre_descendant();
        afficher_les_comptes_bancaires();
        }
        system("pause");
		system("cls");
        break;
		case 8 :
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Veillez saisir le montant : ");
        scanf("%lf",&MONTANT);
        tri_par_ordre_ascendant();
        for(i=1;i<=nbr_comp;i++)
        {
            if(Les_Comptes_Bancaires[i].Montant>MONTANT)
            {
               printf("CIN :%s\nNom : %s\nPrenom : %s\nMontant : %.2lf DH\n",Les_Comptes_Bancaires[i].CIN,Les_Comptes_Bancaires[i].Nom,Les_Comptes_Bancaires[i].Prenom,Les_Comptes_Bancaires[i].Montant);
            }
            printf("****\n");
        }
        }
		system("pause");
		system("cls");
		break;
		case 9 :
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        printf("Veillez saisir le montant : ");
        scanf("%lf",&MONTANT);
        tri_par_ordre_descendant();
        for(j=1;j<=nbr_comp;j++)
        {
            if(Les_Comptes_Bancaires[j].Montant>MONTANT)
            {
               printf("CIN :%s\nNom : %s\nPrenom : %s\nMontant : %.2lf DH\n",Les_Comptes_Bancaires[j].CIN,Les_Comptes_Bancaires[j].Nom,Les_Comptes_Bancaires[j].Prenom,Les_Comptes_Bancaires[j].Montant);
            }
            printf("*****\n");
        }
        }
		system("pause");
		system("cls");
		break;
		case 10 :
        if(nbr_comp==0){
          printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
        rechercher_par_CIN();
        }
		system("pause");
		system("cls");
		break;
		case 11 :
        if(nbr_comp==0){
         printf("il faut premi%crement cr%cer un compte bancaire\n",130,130);
        }
        else{
           fedilisation();
        }
		system("pause");
		system("cls");
		break;
		case 12:
        quitter();
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
      printf("Saisir les information de compte bancaire numero %d :  \n\n",nbr_comp+1);
      printf("CIN : ");
      scanf("%s",Les_Comptes_Bancaires[nbr_comp+1].CIN);
      printf("Nom : ");
      scanf("%s",Les_Comptes_Bancaires[nbr_comp+1].Nom);
      printf("Prenom : ");
      scanf("%s",Les_Comptes_Bancaires[nbr_comp+1].Prenom);
      printf("Montant : ");
      scanf("%lf",&Les_Comptes_Bancaires[nbr_comp+1].Montant);
      nbr_comp=nbr_comp+1;
   }
}

//fonction qui permet la saisie un compte bancaire
void introduire_un_compte_bancaire()
{
    printf("\n\n");
    printf("Saisir les information de votre compte bancaire %d :  \n\n",nbr_comp+1);
    printf("CIN : ");
    scanf("%s",Les_Comptes_Bancaires[nbr_comp+1].CIN);
    printf("Nom : ");
    scanf("%s",Les_Comptes_Bancaires[nbr_comp+1].Nom);
    printf("Prenom : ");
    scanf("%s",Les_Comptes_Bancaires[nbr_comp+1].Prenom);
    printf("Montant : ");
    scanf("%lf",&Les_Comptes_Bancaires[nbr_comp+1].Montant);
    nbr_comp=nbr_comp+1;
    printf("\n\n");
}

//fonction qui permet de afficher tout les comptes bancaires
void afficher_les_comptes_bancaires()
{

    for(i=1;i<=nbr_comp;i++)
    {
        printf("*****\n");
        printf("CIN :%s\nNom : %s\nPrenom : %s\nMontant : %.2lf DH\n",Les_Comptes_Bancaires[i].CIN,Les_Comptes_Bancaires[i].Nom,Les_Comptes_Bancaires[i].Prenom,Les_Comptes_Bancaires[i].Montant);
    }
}

//fonction qui permet de trier les comptes bancaires par ordre croissante
void tri_par_ordre_ascendant()
{
    char tmpcin[10], tmpnom[20], tmpprenom[20];
    double tmpmontant;
    for(i=1;i<nbr_comp;i++)
    {
        for(j=i+1;j<=nbr_comp;j++)
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
    for(i=1;i<nbr_comp;i++)
    {
        for(j=i+1;j<=nbr_comp;j++)
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
      for(i=1;i<=nbr_comp;i++)
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

void fedilisation()
{
    double max1=0, max2=0, max3=0, j=0;
    tri_par_ordre_ascendant();
    for(i=1;i<=nbr_comp;i++)
    {
        if(max1<Les_Comptes_Bancaires[i].Montant)
        {
            max3=max2;
            max2=max1;
            max1=Les_Comptes_Bancaires[i].Montant;
        }
    }
    for(i=1;i<=nbr_comp;i++)
    {
        if(Les_Comptes_Bancaires[i].Montant>=max3)
        {
            j=((Les_Comptes_Bancaires[i].Montant*1.3)/100);
            Les_Comptes_Bancaires[i].Montant=Les_Comptes_Bancaires[i].Montant+j;
        }
    }
    tri_par_ordre_descendant();
    printf("1.3 aux comptes ayant les 3 premiers montants superieurs : \n");
    for(i=1;i<=nbr_comp;i++)
    {
        if(Les_Comptes_Bancaires[i].Montant>=max3)
        {
            printf("CIN : %s\nNom : %s\nPrenom : %s\nMontant : %.2lf DH\n",Les_Comptes_Bancaires[i].CIN,Les_Comptes_Bancaires[i].Nom,Les_Comptes_Bancaires[i].Prenom,Les_Comptes_Bancaires[i].Montant);
        }
    }
}

void quitter()
{
    printf("\nMerci Aurevoir et a bientot !!\n");
}

// fonction d'affichage de couleurs
void Color(int couleurDuTexte,int couleurDeFond)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
