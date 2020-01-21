#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int varDamage = 25;
    int varMonsterDamage = 30; 
    int actionPlayer;
    
    
    int maxHealth = 200;
    int curMonsterLp = 200;
    int curHealth = maxHealth;
    
    int manaPlayer = 50;
    int useMana = 10;
    int round = 0;
    int poison = 5;
    int monsterState;
    
    printf ("\n""You start the game with 100 life points""\n\n""Here is a monster with 200 life point, Defeat him !""\n\n""Enter 3 to attack the monster""\n\n""4 to hide yourself behind a bloc of rock""\n\n""5 to use a special poison attack" );
  
    
    
    
     while (curMonsterLp > 0 && curHealth > 0){ 
         
          //On essaie de tirer les actions du monstre au hasard en faisant 1 ou 2
                int monsterBehaviour = rand()%2 + 1;
         //Une fois par tour le monstre perdra 5pv que si le joueur l'a empoisonné une fois
                manaPlayer = manaPlayer + 1;
                printf("ManaPlayer = %d \n\n",manaPlayer);
         
                if (monsterState == 40 && manaPlayer != 0){
                    manaPlayer = manaPlayer - useMana;
                    curMonsterLp = curMonsterLp - poison;
                    printf("The monster is poisoned, he lost 5Lp \n, he is now %d",curMonsterLp);
                }
         
                printf("__________________________________""\n");

         
                 scanf ("%d", &actionPlayer);
                 printf ("\n");
    
                switch (actionPlayer){
                         
                default:
                printf("You didn't tape a correct number, nothing happened");
                break;
                        
                case 3:
                curMonsterLp = curMonsterLp - varDamage;
                printf("You inflict 25 damage to the monster, keep going!""\n""There's %d left""\n""\n", curMonsterLp);
                break;
                    
                case 4:
                printf("You are behind a wall",curHealth);   
                break;
                
                case 5:
                printf("You poisoned the monster he will loose 5lp per turn \n");
                monsterState = 40;
                break;
                }

                
                switch (monsterBehaviour){
                case 1:
                if(actionPlayer == 4){
                curHealth = curHealth - 7,5;
                printf("unfortunately the monster manage to hurt you""\n""You're now %d lp""\n", curHealth);
                }
                else; 
                curHealth = curHealth - varMonsterDamage;
                printf("The monster stab in the heart ! You're just %d lp left, be carefull! ""\n""\n", curHealth);
                break;
                    
                case 2:
                if (actionPlayer == 3){
                curMonsterLp = curMonsterLp + varDamage;
                printf("The monster defended himself too bad""\n""The monster is %d lp again""\n",curMonsterLp);
                }
                else if (actionPlayer == 5){
                printf("He can't defend himself the monster have %d lp now \n\n", curMonsterLp);
                }  
                break;
                        
                default:
                printf("You didn't tape a correct number, nothing happened");
                break;



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