#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int varDamage = 25;
    int varMonsterDamage = 30; 
    int choixAction;
    
    int maxHealth = 200;
    int curMonsterLp = 200;
    int curHealth = maxHealth;
    //On essaie de tirer les actions du monstre au hasard en faisant 1 ou 2
        
    
    
    

    printf ("\n""You start the game with 100 life points""\n\n""Here is a monster with 200 life point, Defeat him !""\n\n""Enter 3 to attack the monster or 4 to hide yourself behind a bloc of rock""\n" );
  
    
    
     while (curMonsterLp > 0 && curHealth > 0){ 
                printf("__________________________________""\n");
          
                int monsterBehaviour = rand()%2 + 1;
    
                 scanf ("%d", &choixAction);
                 printf ("\n");
    
                switch (choixAction){
                case 3:
                curMonsterLp = curMonsterLp - varDamage;
                printf("You inflict 25 damage to the monster, keep going!""\n""There's %d left""\n""\n", curMonsterLp);
                break;
                    
                case 4:
                printf("You are behind a wall, unfortunately the monster manage to hurt you""\n""You're now %d lp""\n",curHealth);
                   
                break;
                        
                default:
                printf("You didn't tape a correct number, nothing happened");
                

            
                    
                }   
           

                switch (monsterBehaviour){
                case 1:
                if(choixAction == 4){
                curHealth = curHealth - 7,5;
                }
                else; 
                curHealth = curHealth - varMonsterDamage;
                printf("The monster stab in the heart ! You're just %d lp left, be carefull! ""\n""\n", curHealth);
                break;
                    
                case 2:
                if (choixAction == 3){
                curMonsterLp = curMonsterLp + varDamage; 
                }
                printf("Defense""\n""The monster is now %d lp""\n",curMonsterLp);   
                break;
                        
                default:
                printf("You didn't tape a correct number, nothing happened");;



                    }
         
             }
    
     if (curMonsterLp <= 0){
         
       printf ("The monster is now dead, congratulation !");
    }
    else if (curHealth <= 0)
    {
        printf ("Oh crap, you died !");
        
    return 0;
        
    }
}
    