#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int varDamage = 25;
    int varMonsterDamage = 30;
    int choixAction;
    
    int maxHealth = 100;
    int curMonsterLp = 200;
    int curHealth = maxHealth;
    printf ("\n""You start the game with 100 life points""\n\n""Here is a monster with 200 life point, Attack him !""\n\n""Enter 1 to attack the monster""\n" );
    
     while (curMonsterLp > 0 && curHealth > 0)
    { 
         scanf ("%d", &choixAction);
         printf ("\n");
    
            switch (choixAction)
            {
                case 1:
                curMonsterLp = curMonsterLp - varDamage;
                printf("You inflict 25 damage to the monster, keep going!""\n""There's %d left""\n""\n""The monster can now attack you be carefull""\n""The monster counter your attack""\n", curMonsterLp);
                    
                curHealth = curHealth - varMonsterDamage;
                printf("Watcha ! the monster stab you, you're now %d lp !""\n", curHealth);
                    
                break;
                default:
                printf("You didn't tape a correct number, nothing happened");
                

            return 0;
                    
            }   
      }
    
    if (curMonsterLp <= 0)
    {
       printf ("The monster is now dead, congratulation !");
    }
    else if (curHealth <= 0)
    {
        printf ("Oh crap, you died !");
    }
}