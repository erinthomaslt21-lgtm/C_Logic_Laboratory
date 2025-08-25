#include<stdio.h>
int main()
{
    printf("WELCOME TO MATCHSTICKS GAME\n");
    printf("REFEREE  : Rules player will be allowed to pick 1-4 matchsticks\n");
    printf("REFEREE  : Whoever picks the last matchstick loses the game\n");
    int ms=21;
    int pl;
    while(ms>0)
    {
        printf("REFEREE  : Number of matchsticks remaining : %d\n",ms);
        if (ms!=1)
        {
            printf("REFEREE  : Choose between 1-4 matchsticks\n");
            scanf("%d",&pl);
            printf("PLAYER   : I choose %d matchsticks\n",pl);
            printf("COMPUTER : I choose %d matchsticks\n",(5-pl));
            ms-=5;
        }
        else
        {
            printf("REFEREE  : Only 1 matchstick remains\n");
            printf("REFEREE  : Computer Won\n");
            ms=0;
        }
    }
}