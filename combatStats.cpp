#include <cstdlib>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

using namespace std;
class combat
{
      public:
             int enemyHealth;
             int playerHealth;
             
             int enemyDamage;
             int playerDamage;
             
             int enemyDodge;
             int playerDodge;
             
             int enemyDodgeChance;
             int playerDodgeChance;

             int enemyCriticalHit;
             int playerCriticalHit;
             
             int enemyCriticalChance;
             int playerCriticalChance;
             
             int playerPotionCount;
             
             int playerPotionHeal;
             
             int playerParryChance;
             int playerParry;
             int playerCounterDamage;
             
             int enemyDrop;
             int enemyDropChance;
             
             int user_Input;
             


//###########
//SPIDER
//###########

void spider()

{


 cout<<"You engage in combat with a Giant Spider!"<<endl;
 cout<<"\n"<<endl;
 cout<<"\n";
 
 cout<<"Spider Health: "<<enemyHealth<<endl;
 cout<<"Your Health: "<<playerHealth<<endl;
 cout<<"\n";
 
 cout<<" 1.) Slash | 2.) Crush | 3.) Stab | 4.) Defensive | 5.) Use a Health Potion x"<<playerPotionCount<<endl;
 cout<<"\n";
 
 cout<<"What do you do?... ";
 cin>>user_Input;
 cout<<"\n";
 cout<<"\n";
 
 
 //#################
 //Calculate Common Stats
 //#################
 
 
 enemyDamage = rand() % 13 + 8;
 enemyDodgeChance = rand() % 100 + 1;
 enemyCriticalHit = rand() % 30 + 20;
 enemyCriticalChance = rand() % 100 + 1;
 enemyDropChance = rand() % 70 + 30;
 enemyDrop = rand() % 100 + 1;
 
  //dodge chance
 playerDodgeChance = rand() % 100 + 1;
  
 //critical hit chance
 playerCriticalChance = rand() % 100 + 1;
 
 //parry chance
 playerParryChance = rand() % 100 + 1;
 
 //#####################
 //INITIATE DAMAGE CALCULATION
 //#####################
 
//######
//HEAL
//#####

if(user_Input == 5 && playerPotionCount > 0 && playerHealth < 200)
{
 playerPotionHeal = rand() % 15 + 35;
 playerHealth = playerHealth + playerPotionHeal;
 cout<<"You heal yourself for "<<playerPotionHeal<<" hitpoints!"<<endl;
 playerPotionCount = playerPotionCount - 1;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 system("COLOR 0A");
 Sleep(125);
 system("COLOR 0F");
 playerDodge = 75;
}

else if(user_Input == 5 && playerPotionCount <= 0)
{
    cout<<"You are out of Health Potions!!"<<endl;
    cout<<"\n";
    cout<<"-----------------------------------"<<endl;
    cout<<"\n";
    
    //dodge rolls
    playerDodge = 15;
}
else if(user_Input == 5 && playerPotionCount > 0 && playerHealth >= 200)
{
 cout<<"You are already full health..."<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}

//##########
//Slash attack 
//##########

if(user_Input == 1)
 {
 //base damage rolls
 playerDamage = rand() % 21 + 25;
 
 //dodge rolls
 playerDodge = 20;
 
 //critical hit damage
 playerCriticalHit = rand() % 25 + 35;
 
 //Dodgablity
 enemyDodge = 25;
 
 cout<<"You slash your sword at your enemy!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
} 
           
//####### 
//Crushing
//#######


 else if(user_Input == 2)
 {
 //base damage rolls
 playerDamage = rand() % 35 + 35;
 
 //dodge rolls
 playerDodge = 15;
 
 //critical hit damage
 playerCriticalHit = rand() % 40 + 45;
 
 //Dodgablity
 enemyDodge = 45;
 
 cout<<"You swing with a crushing force!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 
} 
            
            
//####### 
//Stab
//#######


 else if(user_Input == 3)
 {
 //base damage rolls
 playerDamage = rand() % 11 + 12;
 
 //dodge rolls
 playerDodge = 30;
 
 //critical hit damage
 playerCriticalHit = rand() % 20 + 25;
 
 //Dodgablity
 enemyDodge = 15;
 
 cout<<"You lunge at the enemy!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}
            

//####### 
//Defensive
//#######


 else if(user_Input == 4)
{
 
 playerParry = 33;
  
 playerCounterDamage = rand() % 25 + 15;
 
 //dodge rolls
 playerDodge = 60;
 
 cout<<"You take a defensive stance!"<<endl;
 
 if(playerDodge > playerDodgeChance && playerParry > playerParryChance)
 {
  enemyHealth = enemyHealth - playerCounterDamage;
  playerDodge = 100;
  
  cout<<"You Counter-Attack the enemy for "<<playerCounterDamage<<"!"<<endl;
  cout<<"\n";
  cout<<"-----------------------------------"<<endl;
  cout<<"\n";
  }
  
 else
 {
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}

}
                    
                       
 //################
 //DAMAGE TO ENEMY
 //################
 
 if(user_Input != 5 && user_Input != 4)
 {
               
 if(enemyDodge <= enemyDodgeChance)
 {
               
 if(playerCriticalChance >= 90)
 {
  playerDamage = playerDamage + playerCriticalHit;
  cout<<"!!CRITICAL HIT!!"<<endl;
 }
  
 enemyHealth = enemyHealth - playerDamage;
 cout<<"You hit the enemy for "<<playerDamage<<"!"<<endl;
 cout<<"\n";
 }


else
 {
     cout<<"Your attack missed..."<<endl;
     cout<<"\n";
 }
}
Sleep(1500);


if(enemyHealth > 0)
{
//#################
//DAMAGE TO PLAYER
//#################

                 
if(playerDodge <= playerDodgeChance)
{

 if(enemyCriticalChance >= 80)
 {
 enemyDamage = enemyDamage + enemyCriticalHit;
 cout<<"!!CRITICAL HIT!!"<<endl;
 system("COLOR CF");
 }
 
 playerHealth = playerHealth - enemyDamage;
 cout<<"The spider bit you for "<<enemyDamage<<"!"<<endl;
 cout<<"\n";
 Sleep(125);
 system("COLOR 0F");
}


else
{
    cout<<"The spider's attack missed!"<<endl;
    cout<<"\n";
  }
}


//##################
//ENDING THE BATTLE
//#################


else
{
 cout<<"You killed the spider!"<<endl;
 cout<<"\n";
 cout<<"-------------------------------"<<endl;
 cout<<"You achieved Victory!"<<endl;
 cout<<"\n";
 
 //############
 //DROP CHANCES
 //#############
 
 if(enemyDrop <= enemyDropChance && enemyDrop > 15)
 {
 cout<<"--------------------------------------------------"<<endl;
 cout<<"You found a Health Potion on the Spider's Corpse!"<<endl;
 cout<<"\n";
  playerPotionCount = playerPotionCount + 1;         
 }   
        
  if(enemyDrop <= enemyDropChance && enemyDrop <= 15)
  {
   cout<<"--------------------------------------------------"<<endl;
   cout<<"You found 3 Health Potions on the Spider's Corpse!"<<endl;
   cout<<"\n";
   playerPotionCount = playerPotionCount + 3;
  }
  
  
}

system("PAUSE");
system("CLS");


}














































//###########
//WISP
//###########

void wisp()

{


 cout<<"You engage in combat with a Wisp!"<<endl;
 cout<<"\n"<<endl;
 cout<<"\n";
 
 cout<<"Wisp's Health: "<<enemyHealth<<endl;
 cout<<"Your Health: "<<playerHealth<<endl;
 cout<<"\n";
 
 cout<<" 1.) Slash | 2.) Crush | 3.) Stab | 4.) Defensive | 5.) Use a Health Potion x"<<playerPotionCount<<endl;
 cout<<"\n";
 
 cout<<"What do you do?... ";
 cin>>user_Input;
 cout<<"\n";
 cout<<"\n";
 
 
 //#################
 //Calculate Common Stats
 //#################
 
 
 enemyDamage = rand() % 20 + 20;
 enemyDodgeChance = rand() % 100 + 1;
 enemyCriticalHit = rand() % 35 + 5;
 enemyCriticalChance = rand() % 100 + 1;
 enemyDropChance = rand() % 50 + 50;
 enemyDrop = rand() % 100 + 1;
 
  //dodge chance
 playerDodgeChance = rand() % 100 + 1;
  
 //critical hit chance
 playerCriticalChance = rand() % 100 + 1;
 
 //parry chance
 playerParryChance = rand() % 100 + 1;
 
 //#####################
 //INITIATE DAMAGE CALCULATION
 //#####################
 
//######
//HEAL
//#####

if(user_Input == 5 && playerPotionCount > 0 && playerHealth < 200)
{
 playerPotionHeal = rand() % 15 + 35;
 playerHealth = playerHealth + playerPotionHeal;
 cout<<"You heal yourself for "<<playerPotionHeal<<" hitpoints!"<<endl;
 playerPotionCount = playerPotionCount - 1;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 system("COLOR 0A");
 Sleep(125);
 system("COLOR 0F");
 playerDodge = 75;
}

else if(user_Input == 5 && playerPotionCount <= 0)
{
    cout<<"You are out of Health Potions!!"<<endl;
    cout<<"\n";
    cout<<"-----------------------------------"<<endl;
    cout<<"\n";
    
    //dodge rolls
    playerDodge = 15;
}
else if(user_Input == 5 && playerPotionCount > 0 && playerHealth >= 200)
{
 cout<<"You are already full health..."<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}

//##########
//Slash attack 
//##########

if(user_Input == 1)
 {
 //base damage rolls
 playerDamage = rand() % 30 + 25;
 
 //dodge rolls
 playerDodge = 20;
 
 //critical hit damage
 playerCriticalHit = rand() % 25 + 35;
 
 //Dodgablity
 enemyDodge = 35;
 
 cout<<"You slash your sword at your enemy!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
} 
           
//####### 
//Crushing
//#######


 else if(user_Input == 2)
 {
 //base damage rolls
 playerDamage = rand() % 35 + 45;
 
 //dodge rolls
 playerDodge = 15;
 
 //critical hit damage
 playerCriticalHit = rand() % 45 + 55;
 
 //Dodgablity
 enemyDodge = 55;
 
 cout<<"You swing with a crushing force!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 
} 
            
            
//####### 
//Stab
//#######


 else if(user_Input == 3)
 {
 //base damage rolls
 playerDamage = rand() % 30 + 30;
 
 //dodge rolls
 playerDodge = 55;
 
 //critical hit damage
 playerCriticalHit = rand() % 25 + 35;
 
 //Dodgablity
 enemyDodge = 70;
 
 cout<<"You lunge at the enemy!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}
            

//####### 
//Defensive
//#######


 else if(user_Input == 4)
{
 
 playerParry = 33;
  
 playerCounterDamage = rand() % 25 + 15;
 
 //dodge rolls
 playerDodge = 65;
 
 cout<<"You take a defensive stance!"<<endl;
 
 if(playerDodge > playerDodgeChance && playerParry > playerParryChance)
 {
  enemyHealth = enemyHealth - playerCounterDamage;
  playerDodge = 100;
  
  cout<<"You Counter-Attack the enemy for "<<playerCounterDamage<<"!"<<endl;
  cout<<"\n";
  cout<<"-----------------------------------"<<endl;
  cout<<"\n";
  }
  
 else
 {
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}

}
                    
                       
 //################
 //DAMAGE TO ENEMY
 //################
 
 if(user_Input != 5 && user_Input != 4)
 {
               
 if(enemyDodge <= enemyDodgeChance)
 {
               
 if(playerCriticalChance >= 90)
 {
  playerDamage = playerDamage + playerCriticalHit;
  cout<<"!!CRITICAL HIT!!"<<endl;
 }
  
 enemyHealth = enemyHealth - playerDamage;
 cout<<"You hit the Wisp for "<<playerDamage<<"!"<<endl;
 cout<<"\n";
 }


else
 {
     cout<<"Your attack missed..."<<endl;
     cout<<"\n";
 }
}
Sleep(1500);


if(enemyHealth > 0)
{
//#################
//DAMAGE TO PLAYER
//#################

                 
if(playerDodge <= playerDodgeChance)
{

 if(enemyCriticalChance >= 85)
 {
 enemyDamage = enemyDamage + enemyCriticalHit;
 cout<<"!!CRITICAL HIT!!"<<endl;
 system("COLOR CF");
 }
 
 playerHealth = playerHealth - enemyDamage;
 cout<<"The Wisp slashed you for "<<enemyDamage<<"!"<<endl;
 cout<<"\n";
 Sleep(125);
 system("COLOR 0F");
}


else
{
    cout<<"The Wisp's attack missed!"<<endl;
    cout<<"\n";
  }
}


//##################
//ENDING THE BATTLE
//#################


else
{
 cout<<"You killed the Wisp!"<<endl;
 cout<<"\n";
 cout<<"-------------------------------"<<endl;
 cout<<"You achieved Victory!"<<endl;
 cout<<"\n";
 
 //############
 //DROP CHANCES
 //#############
 
 if(enemyDrop >= enemyDropChance && enemyDrop > 25)
 {
 cout<<"--------------------------------------------------"<<endl;
 cout<<"You found two Health Potions in the pile of Wisp dust!"<<endl;
 cout<<"\n";
  playerPotionCount = playerPotionCount + 2;         
 }   
        
  if(enemyDrop >= enemyDropChance && enemyDrop <= 25)
  {
   cout<<"--------------------------------------------------"<<endl;
   cout<<"You found 3 Health Potions in the Wisp Dust!"<<endl;
   cout<<"\n";
   playerPotionCount = playerPotionCount + 3;
  }
  
  
}

system("PAUSE");
system("CLS");


}
















































//###########
//REAPER
//###########

void reaper()

{


 cout<<"You engage in combat with a Reaper!"<<endl;
 cout<<"\n"<<endl;
 cout<<"\n";
 
 cout<<"Reaper's Health: "<<enemyHealth<<endl;
 cout<<"Your Health: "<<playerHealth<<endl;
 cout<<"\n";
 
 cout<<" 1.) Slash | 2.) Crush | 3.) Stab | 4.) Defensive | 5.) Use a Health Potion x"<<playerPotionCount<<endl;
 cout<<"\n";
 
 cout<<"What do you do?... ";
 cin>>user_Input;
 cout<<"\n";
 cout<<"\n";
 
 
 //#################
 //Calculate Common Stats
 //#################
 
 
 enemyDamage = rand() % 20 + 25;
 enemyDodgeChance = rand() % 100 + 1;
 enemyCriticalHit = rand() % 15 + 15;
 enemyCriticalChance = rand() % 100 + 1;
 enemyDropChance = rand() % 80 + 20;
 enemyDrop = rand() % 100 + 1;
 
  //dodge chance
 playerDodgeChance = rand() % 100 + 1;
  
 //critical hit chance
 playerCriticalChance = rand() % 100 + 1;
 
 //parry chance
 playerParryChance = rand() % 100 + 1;
 
 //#####################
 //INITIATE DAMAGE CALCULATION
 //#####################
 
//######
//HEAL
//#####

if(user_Input == 5 && playerPotionCount > 0 && playerHealth < 200)
{
 playerPotionHeal = rand() % 15 + 35;
 playerHealth = playerHealth + playerPotionHeal;
 cout<<"You heal yourself for "<<playerPotionHeal<<" hitpoints!"<<endl;
 playerPotionCount = playerPotionCount - 1;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 system("COLOR 0A");
 Sleep(125);
 system("COLOR 0F");
 playerDodge = 75;
}

else if(user_Input == 5 && playerPotionCount <= 0)
{
    cout<<"You are out of Health Potions!!"<<endl;
    cout<<"\n";
    cout<<"-----------------------------------"<<endl;
    cout<<"\n";
    
    //dodge rolls
    playerDodge = 15;
}
else if(user_Input == 5 && playerPotionCount > 0 && playerHealth >= 200)
{
 cout<<"You are already full health..."<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}

//##########
//Slash attack 
//##########

if(user_Input == 1)
 {
 //base damage rolls
 playerDamage = rand() % 30 + 28;
 
 //dodge rolls
 playerDodge = 20;
 
 //critical hit damage
 playerCriticalHit = rand() % 45 + 35;
 
 //Dodgablity
 enemyDodge = 25;
 
 cout<<"You slash your sword at your enemy!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
} 
           
//####### 
//Crushing
//#######


 else if(user_Input == 2)
 {
 //base damage rolls
 playerDamage = rand() % 25 + 30;
 
 //dodge rolls
 playerDodge = 15;
 
 //critical hit damage
 playerCriticalHit = rand() % 30 + 55;
 
 //Dodgablity
 enemyDodge = 55;
 
 cout<<"You swing with a crushing force!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 
} 
            
            
//####### 
//Stab
//#######


 else if(user_Input == 3)
 {
 //base damage rolls
 playerDamage = rand() % 18 + 20;
 
 //dodge rolls
 playerDodge = 45;
 
 //critical hit damage
 playerCriticalHit = rand() % 20 + 30;
 
 //Dodgablity
 enemyDodge = 15;
 
 cout<<"You lunge at the enemy!"<<endl;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}
            

//####### 
//Defensive
//#######


 else if(user_Input == 4)
{
 
 playerParry = 33;
  
 playerCounterDamage = rand() % 25 + 15;
 
 //dodge rolls
 playerDodge = 60;
 
 cout<<"You take a defensive stance!"<<endl;
 
 if(playerDodge > playerDodgeChance && playerParry > playerParryChance)
 {
  enemyHealth = enemyHealth - playerCounterDamage;
  playerDodge = 100;
  
  cout<<"You Counter-Attack the enemy for "<<playerCounterDamage<<"!"<<endl;
  cout<<"\n";
  cout<<"-----------------------------------"<<endl;
  cout<<"\n";
  }
  
 else
 {
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
}

}
                    
                       
 //################
 //DAMAGE TO ENEMY
 //################
 
 if(user_Input != 5 && user_Input != 4)
 {
               
 if(enemyDodge <= enemyDodgeChance)
 {
               
 if(playerCriticalChance >= 90)
 {
  playerDamage = playerDamage + playerCriticalHit;
  cout<<"!!CRITICAL HIT!!"<<endl;
 }
  
 enemyHealth = enemyHealth - playerDamage;
 cout<<"You hit the Reaper for "<<playerDamage<<"!"<<endl;
 cout<<"\n";
 }


else
 {
     cout<<"Your attack missed..."<<endl;
     cout<<"\n";
 }
}
Sleep(1500);


if(enemyHealth > 0)
{
//#################
//DAMAGE TO PLAYER
//#################

                 
if(playerDodge <= playerDodgeChance)
{

 if(enemyCriticalChance >= 85)
 {
 enemyDamage = enemyDamage + enemyCriticalHit;
 cout<<"!!CRITICAL HIT!!"<<endl;
 system("COLOR CF");
 }
 
 playerHealth = playerHealth - enemyDamage;
 cout<<"The Reaper slashed you for "<<enemyDamage<<"!"<<endl;
 cout<<"\n";
 Sleep(125);
 system("COLOR 0F");
}


else
{
    cout<<"The Reaper's attack missed!"<<endl;
    cout<<"\n";
  }
}


//##################
//ENDING THE BATTLE
//#################


else
{
 cout<<"You killed the Reaper!"<<endl;
 cout<<"\n";
 cout<<"-------------------------------"<<endl;
 cout<<"You achieved Victory!"<<endl;
 cout<<"\n";
 
 //############
 //DROP CHANCES
 //#############
 
 if(enemyDrop <= enemyDropChance && enemyDrop > 10)
 {
 cout<<"--------------------------------------------------"<<endl;
 cout<<"You found a Health Potion in the Reaper's remains!"<<endl;
 cout<<"\n";
  playerPotionCount = playerPotionCount + 1;         
 }   
        
  if(enemyDrop <= enemyDropChance && enemyDrop <= 10)
  {
   cout<<"--------------------------------------------------"<<endl;
   cout<<"You found 3 Health Potions in the Reaper's remains!"<<endl;
   cout<<"\n";
   playerPotionCount = playerPotionCount + 3;
  }
  
  
}

system("PAUSE");
system("CLS");


}
};
