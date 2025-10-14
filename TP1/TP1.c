#include<stdio.h>

void exchange(int *x,int *y)
{
    int p;
    p= *x;
    *x=*y;
    *y=p;
}

main()
    {
        int a=1;
        int b=2;
        exchange(&a,&b);
        printf("%d", a);
    }   


int MAX=100;

void saisir(float M[MAX][MAX], int taille)
{
    int i,j;
    printf ("saisir les valeurs de la matrice\n");
    for (i = 0; i < taille; i++)
    {
         printf(" ligne numero %d \n",i+1);
         for(j=0;j< taille ;j++)
         {
        	printf ("\nM[%d][%d] = ", i+1,j+1);
        	rewind(stdout);
        	scanf ("%f", &(M[i][j]));
         }
    }
}



void afficher(float M[MAX][MAX], int taille)
{
    int i,j;
    printf("Afficher matrice\n");
    printf("\t");
    for (i = 0; i < taille; i++)
    printf("\t%d\t",i+1);
    printf("\n\t");
    for (i = 0; i < taille; i++)
    printf("________________");
    for (i = 0; i < taille; i++)
    {
	printf("\n%d\t:",i+1);
    	for (j = 0; j < taille; j++)
        	printf ("\t%f", M[i][j]);
    }
    printf("\n\t");
    for (i = 0; i < taille; i++)
    printf("________________");
    printf("\n");

}


void additionner(float M1[MAX][MAX],float M2[MAX][MAX],float M3[MAX][MAX],int taille)
{
    int i,j;
    for(i=0;i<taille;i++)
   {
        for(j=0;j<taille;j++)
		 M3[i][j] = M1[i][j] + M2[i][j];
	}
}



void multiplier(float M1[MAX][MAX], float M2[MAX][MAX],float M3[MAX][MAX],int taille)
{
     int i,j,k;
     for(i=0;i<taille;i++)
        {
          for(j=0;j<taille;j++)
            {
              M3[i][j]=0;
              for(k=0;k<taille;k++)
	            M3[i][j] = M3[i][j] + M1[i][k] * M2[k][j];
            }
        }
}

main(void)
{
    float M[2][2];
    saisir(M,2);
}