#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int varDamage = 25;
    int choixAction;
    
    int maxHealth = 100;
    int curMonsterLp = 100;
    int curHealth = maxHealth;
    printf ("\n""You start the game with 500 life points""\n\n""Here is a monster with 500 life point, Attack him !""\n\n""Enter 1 to attack the monster""\n" );
    
     while (curMonsterLp > 0)
    { 
         scanf ("%d", &choixAction);
         printf ("\n");
    
            switch (choixAction)
            {
                case 1:
                curMonsterLp = curMonsterLp - varDamage;
                printf("You inflict 25 damage to the monster, keep going!""\n""There's %d left""\n", curMonsterLp);
                break;
                default:
                printf("You didn't tape a correct number, nothing happened");

            return 0;
                    
            }   
      }
    
    if (curMonsterLp <= 0){
       printf ("The monster is now dead, congratulation !");
    }
}