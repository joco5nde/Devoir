#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

 /*char tab[5][10]={"salma","hind","chahd","bassma","nour"};

printf("****************************exercice 1 : ******************************\n");
 for (int i=0; i<=4;i++){
    printf("<student at index %d,you well take seat %s>\n",i,tab[i]);
 }

printf("****************************exercice 2 : ******************************\n");
int tab1[5]={1,2,3,4,5};
 for (int i=0; i<=4;i++){
    printf("le contenu %d: %d\n",i,tab1[i]);
 }
 printf("    *************inverse : *****************   \n ");
 for (int i=4; i>=0;i--){
    printf("le contenu %d: %d\n",i,tab1[i]);
 }
 printf("****************************exercice  3: ******************************\n");
int tab2[10]={1,2,3,4,5,6,7,8,9,10};
printf("le nombre des element : %d",sizeof(tab2)/sizeof(tab2[0]));
printf("****************************exercice  4: ******************************\n");
char tab3[1000];
int index;
char lettre;
int comt=0;
srand(time(NULL));
char tab4[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','K','R','S','T','U','V','W','X','Y','Z'};
printf("entrer la lettre acomparer :");
scanf(" %c",&lettre);
 for (int i=0; i<1000;i++){
        index=rand()%26;
        tab3[i]=tab4[index];
        if (lettre==tab3[i]){
            comt++;}


 }
    printf("le nombre d'occurrences est :%d",comt);

printf("****************************exercice  5: ******************************\n");
char tab5[1000];
int index;
srand(time(NULL));
char tab6[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','K','R','S','T','U','V','W','X','Y','Z'};
    for (int i=0; i<1000;i++){
        index=rand()%26;
        tab5[i]=tab6[index];
 }

 for (int i=0; i<=25;i++){
    int compt2=0;
        for(int j=0; j<1000;j++){
            if(tab6[i]==tab5[j]){
                compt2++;}
        }
 printf("le nombre d occurence de letrre < %c >est:%d \n",tab6[i],compt2);
    }*/
  /* printf("****************************exercice  6: ******************************\n");
int Tab[7];
int index;
srand(time(NULL));
char tab_number[10]={0,1,2,3,4,5,6,7,8,9};
    for (int i=0; i<10;i++){
        index=rand()%10;
        Tab[i]=tab_number[index];
 }
 /*for (int i=0; i<=25;i++){
    int compt2=0;
        for(int j=0; j<1000;j++){
            if(tab6[i]==tab5[j]){
                compt2++;}
        }
 printf("le nombre d occurence de letrre < %c >est:%d \n",tab6[i],compt2);
printf("****************************exercice pointeur 1: ******************************\n");
char x;
printf("le contenu de variable est : %c \n",x);
printf("la taille  de variable est : %d \n",sizeof(x));
printf("l adress de variable est : %p \n",&x);*/


/* ***************************** tri *************** ***********/
/*
srand(time(NULL));
int tab[7];;
int var;
for (int i=0;i<7;i++)
{
    tab[i]=rand() % 10 ;
}
for (int i=0;i<7;i++)
{
    for (int j=i+1;j<7;j++)
    {
       if (tab[j]< tab[i])
        {   var=tab[i];
            tab[i]=tab[j];
            tab[j]=var;
        }
    }
}
for (int i=0;i<7;i++)
{
    printf("%d",tab[i]);
}*/

/* ***************************** supprimer ************************ */
/*
srand(time(NULL));
int tab[10];
int taille =9;
for (int i=0;i<9;i++)
{
    tab[i]=rand() % 10 ;
}
for (int i=0;i<9;i++)
{
    printf("%d",tab[i]);
}
printf("\n");


for (int i=0;i<9;i++)
{
    if (tab[i] %2 ==0)
    { taille -=1 ;
        for (int j=i;j < taille ;j++)
            {
                tab[j]=tab[j+1];
            }
    };
}
for (int i=0;i<taille;i++)
{
    printf("%d",tab[i]);
} */

/* ************* chaine de caractere *********************** */
/*
    char chaine[] = "hello";
    int taille = 0;
    char *p1=chaine;
    while (*p1 != '\0') {
        taille++;
        p1++;
    }
    printf("La taille de la chaine  est : %d\n",  taille);
*/
/* ********************** ToUpperCasw *********** */
void ToUpperCase(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') { // Vérifie si le caractère est une lettre minuscule
            *s = *s - ('a' - 'A'); // Convertit la lettre minuscule en majuscule en ajustant la valeur ASCII
        }
        s++; // Passe au caractère suivant dans la chaîne
    }
}


    char s[] = "gljbu kfiytdky gufk ";
    printf("miniscule: %s\n", s);

    ToUpperCase(s);

    printf("majuscule : %s\n", s);

    return 0;
}
