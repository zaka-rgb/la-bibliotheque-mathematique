#include<math.h>

int main()
{
    double dessus=0,nombre=0,abso=0;
    printf("ecrire un nombre");
    scanf("%lf",&nombre);
    dessus=ceil(nombre);                        // fabs et ceil en meme temps
printf("%f",dessus);
abso=fabs(dessus);
   printf("la valeur absolue est %f",abso);



    return 0;
}
