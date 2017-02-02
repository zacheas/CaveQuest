#include <cstdlib>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

#include "asciiPics.cpp"
#include "mainmenu.cpp"
#include "narratorDialogue.cpp"
#include "asciiText.cpp"
#include "combatStats.cpp"

using namespace std;



//##############
//variables
//##############

int user_Input;
int chestChance;
int chestDrop;

//#############
//main
//#############

int main(int argc, char *argv[])
{
//##################
//define classes to specific  forms
//##################

system("COLOR 0F");

combat battle;

//visuals
 asciipic pic;
 
 //menu screen options
 menu menu;
 
 //visual text
 narration narrate;
 
 //header text
 ascii ascii;
 
 //entity stats
 
 //initialize a random seed
 srand (time(NULL));
 
 //###############
 //GAME
 //###############
 
 
 
 
 menu.caveQuest();  //opening splash screen
 Sleep(1);          //
 cout<<"\n";       //
 cout<<"\n";       //
 pic.viking();      //   
 Sleep(5000);      //
 
 system("CLS");
 
//############## 
//open main menu 
//############### 
 
while(true)
{ 
 menu.caveQuest();
 cout<<"\n";
 cout<<"\n";
 menu.mainmenu();  //main menu
 cin>>user_Input;
 system("CLS");
 
 if (user_Input == 2)  //about game screen
 {
  menu.caveQuest();
  menu.aboutscreen();
  system("CLS");
 }
 
  if (user_Input == 3)     //credits screen
 {
  menu.caveQuest();   
  menu.creditscreen();
  system("CLS");
 }
 

 if (user_Input == 4)   //exit game option
 {
  system("CLS");
  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  menu.caveQuest();
  Sleep(500);
  return(0);
}

//#####################
//## BEGIN GAME HERE ##
//#####################


 if(user_Input == 1)  //begin game
 {
  system("CLS");
  cout<<"Work in progress..."<<endl;
  cout<<"Pre-Alpha Build v0.13"<<endl;
  cout<<"\n";
  Sleep(750);
  system("CLS");
  break;
}

}

//################
//Opening scene
//################

ascii.theArrival();
Sleep(1000);
cout<<"\n";
cout<<"\n";
cout<<"\n";
pic.vikingBoat();
cout<<"\n";
cout<<"---------------------------------------"<<endl;
cout<<"\n";
narrate.opening();
Sleep(1000);
system("PAUSE");
system("CLS");

//##############
//Marrenhill
//##############

ascii.marrenhill();
Sleep(1000);
cout<<"\n";
cout<<"\n";
cout<<"\n";
pic.marrenhill();
narrate.marrenhill();

while(true)  //Marrenhill options
{
cout<<"\n";
cout<<"\n";
cout<<"What would you like to do?  ";
cin>>user_Input;

if(user_Input == 1)
{
 cout<<"Trade and stuff..."<<endl;
}

if(user_Input == 2)
{
 cout<<"Gamble and stuff"<<endl;
}


if(user_Input == 3)
{
 cout<<"\n";
 cout<<"\n";
 cout<<"You make your way to the cave..."<<endl;
 Sleep(2000);
 system("CLS");
 break;
}

}


//###############
//CAVE START
//###############
ascii.theCave();
Sleep(2000);
cout<<"\n";
cout<<"\n";
cout<<"\n";
pic.cave();
cout<<"\n";
Sleep(1000);
narrate.caveOutside();
cout<<"\n";
system("PAUSE");
system("CLS");

//#################
//CAVE ENTERED
//#################


//#######################
//INITIATE BATTLE SEQUENCE
//#######################
battle.playerHealth = 200;
battle.playerPotionCount = 3;
       
battle.enemyHealth = rand() % 76 + 150;

while(battle.playerHealth > 0 && battle.enemyHealth > 0)
{
ascii.spider();
cout<<"\n";
cout<<"\n";
cout<<"\n";
pic.spider();
cout<<"\n";
battle.spider();

if(battle.enemyHealth <= 0)
{
 break;
}

if(battle.playerHealth <= 0)
{
system("COLOR 0C");
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
ascii.dead();
Sleep(5000);
return 0;
}

}





//#############
//END BATTLE 1
//#############



//#########
//chest drop
//########

chestChance = rand() % 100 + 1;
chestDrop = 15;

if(chestDrop >= chestChance)
{
 cout<<"\n";
 cout<<"\n";
 cout<<"A Chest!!"<<endl;
 cout<<"\n";
 cout<<"\n";
 pic.chest();
 cout<<"\n";
 cout<<"\n";
 cout<<"While caving you uncovered a chest!  You open it and inside you find"<<endl;
 cout<<"two Health Potions!"<<endl;
 battle.playerPotionCount = battle.playerPotionCount + 2;
 Sleep(7000);
 system("CLS");
}

//###########
//cooldown time
//###########
while(true)
{
 ascii.theCave();
 cout<<"\n";
 cout<<"\n";
 cout<<"\n";
 pic.viking();
 cout<<"\n";
 cout<<"\n";
 cout<<"1.) Continue into the cave...  |  2.) Drink a Health Potion x"<<battle.playerPotionCount<<endl;
 cout<<"\n";
 cout<<"Your Health: "<<battle.playerHealth<<endl;
 cout<<"--------------------------------------"<<endl;
 cout<<"\n";
 cout<<"What would you like to do?...";
 cin>>user_Input;
 
 //continue into the cave
 
 if(user_Input == 1)
 {
  cout<<"\n";
  cout<<"You slowly creep your way further into the cave system..."<<endl;
  Sleep(1500);
  system("CLS");
 break;
 }
 
 //drink potion
 
 else if(user_Input == 2 && battle.playerPotionCount > 0 && battle.playerHealth < 200)
{
 battle.playerPotionHeal = rand() % 15 + 35;
 battle.playerHealth = battle.playerHealth + battle.playerPotionHeal;
 cout<<"You heal yourself for "<<battle.playerPotionHeal<<" hitpoints..."<<endl;
 battle.playerPotionCount = battle.playerPotionCount - 1;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 system("COLOR 0A");
 Sleep(125);
 system("COLOR 0F");
 system("PAUSE");
 system("CLS");
}

else if(user_Input == 2 && battle.playerPotionCount <= 0)
{
    cout<<"You are out of Health Potions..."<<endl;
    cout<<"\n";
    system("PAUSE");
    system("CLS");
    
}
else
{
 cout<<"You are already full health..."<<endl;
 cout<<"\n";
 system("PAUSE");
 system("CLS");
}
}





















//##############
//Reaper BATTLE!
//#############

battle.enemyHealth = rand() % 76 + 200;

while(battle.playerHealth > 0 && battle.enemyHealth > 0)
{
ascii.reaper();
cout<<"\n";
cout<<"\n";
cout<<"\n";
pic.reaper();
cout<<"\n";
battle.reaper();

if(battle.enemyHealth <= 0)
{
 break;
}

if(battle.playerHealth <= 0)
{
system("COLOR 0C");
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
ascii.dead();
Sleep(5000);
return 0;
}

}

//#############
//END BATTLE 2
//#############


//###########
//chest dropchance
//###########

chestChance = rand() % 100 + 1;
chestDrop = 15;

if(chestDrop >= chestChance)
{
 cout<<"\n";
 cout<<"\n";
 cout<<"A Chest!!"<<endl;
 cout<<"\n";
 cout<<"\n";
 pic.chest();
 cout<<"\n";
 cout<<"\n";
 cout<<"While caving you uncovered a chest!  You open it and inside you find"<<endl;
 cout<<"two Health Potions!"<<endl;
 battle.playerPotionCount = battle.playerPotionCount + 2;
 Sleep(7000);
 system("CLS");
}

//########
//cooldown time
//#########
while(true)
{
 ascii.theCave();
 cout<<"\n";
 cout<<"\n";
 cout<<"\n";
 pic.viking();
 cout<<"\n";
 cout<<"\n";
 cout<<"1.) Continue into the cave...  |  2.) Drink a Health Potion x"<<battle.playerPotionCount<<endl;
 cout<<"\n";
 cout<<"Your Health: "<<battle.playerHealth<<endl;
 cout<<"--------------------------------------"<<endl;
 cout<<"\n";
 cout<<"What would you like to do?...";
 cin>>user_Input;
 
 //move further into the cave
 
 if(user_Input == 1)
 {
  cout<<"\n";
  cout<<"You slowly creep your way further into the cave system..."<<endl;
  Sleep(1500);
  system("CLS");
 break;
 }
 
 //drink potion
 
 else if(user_Input == 2 && battle.playerPotionCount > 0 && battle.playerHealth < 200)
{
 battle.playerPotionHeal = rand() % 15 + 35;
 battle.playerHealth = battle.playerHealth + battle.playerPotionHeal;
 cout<<"You heal yourself for "<<battle.playerPotionHeal<<" hitpoints..."<<endl;
 battle.playerPotionCount = battle.playerPotionCount - 1;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 system("COLOR 0A");
 Sleep(125);
 system("COLOR 0F");
 system("PAUSE");
 system("CLS");
}

else if(user_Input == 2 && battle.playerPotionCount <= 0)
{
    cout<<"You are out of Health Potions..."<<endl;
    cout<<"\n";
    system("PAUSE");
    system("CLS");
    
}

else
{
 cout<<"You are already full health..."<<endl;
 cout<<"\n";
 system("PAUSE");
 system("CLS");
}
}























//##############
//Wisp BATTLE!
//#############

battle.enemyHealth = rand() % 55 + 175;

while(battle.playerHealth > 0 && battle.enemyHealth > 0)
{
ascii.wisp();
cout<<"\n";
cout<<"\n";
cout<<"\n";
pic.wisp();
cout<<"\n";
battle.wisp();

if(battle.enemyHealth <= 0)
{
 break;
}

if(battle.playerHealth <= 0)
{
system("COLOR 0C");
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
ascii.dead();
Sleep(5000);
return 0;
}

}

//#############
//END BATTLE 3
//#############


//###########
//chest dropchance
//###########

chestChance = rand() % 100 + 1;
chestDrop = 15;

if(chestDrop >= chestChance)
{
 cout<<"\n";
 cout<<"\n";
 cout<<"A Chest!!"<<endl;
 cout<<"\n";
 cout<<"\n";
 pic.chest();
 cout<<"\n";
 cout<<"\n";
 cout<<"While caving you uncovered a chest!  You open it and inside you find"<<endl;
 cout<<"two Health Potions!"<<endl;
 battle.playerPotionCount = battle.playerPotionCount + 2;
 Sleep(7000);
 system("CLS");
}

//########
//cooldown time
//#########
while(true)
{
 ascii.theCave();
 cout<<"\n";
 cout<<"\n";
 cout<<"\n";
 pic.viking();
 cout<<"\n";
 cout<<"\n";
 cout<<"1.) Continue into the cave...  |  2.) Drink a Health Potion x"<<battle.playerPotionCount<<endl;
 cout<<"\n";
 cout<<"Your Health: "<<battle.playerHealth<<endl;
 cout<<"--------------------------------------"<<endl;
 cout<<"\n";
 cout<<"What would you like to do?...";
 cin>>user_Input;
 
 //move further into the cave
 
 if(user_Input == 1)
 {
  cout<<"\n";
  cout<<"You slowly creep your way further into the cave system..."<<endl;
  Sleep(1500);
  system("CLS");
 break;
 }
 
 //drink potion
 
 else if(user_Input == 2 && battle.playerPotionCount > 0 && battle.playerHealth < 200)
{
 battle.playerPotionHeal = rand() % 15 + 35;
 battle.playerHealth = battle.playerHealth + battle.playerPotionHeal;
 cout<<"You heal yourself for "<<battle.playerPotionHeal<<" hitpoints..."<<endl;
 battle.playerPotionCount = battle.playerPotionCount - 1;
 cout<<"\n";
 cout<<"-----------------------------------"<<endl;
 cout<<"\n";
 system("COLOR 0A");
 Sleep(125);
 system("COLOR 0F");
 system("PAUSE");
 system("CLS");
}

else if(user_Input == 2 && battle.playerPotionCount <= 0)
{
    cout<<"You are out of Health Potions..."<<endl;
    cout<<"\n";
    system("PAUSE");
    system("CLS");
    
}

else
{
 cout<<"You are already full health..."<<endl;
 cout<<"\n";
 system("PAUSE");
 system("CLS");
}
}





  system("PAUSE");
    return EXIT_SUCCESS;
}

