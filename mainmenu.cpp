#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

class menu
{
      public:
             //splash pt 1
             void caveQuest()
             {
cout<<"|-------------------------------------------------------|"<<endl;                 
cout<<"|      _/_/_/                                           |"<<endl;
cout<<"|   _/          _/_/_/  _/      _/    _/_/              |"<<endl;
cout<<"|  _/        _/    _/  _/      _/  _/_/_/_/             |"<<endl;
cout<<"| _/        _/    _/    _/  _/    _/                    |"<<endl;
cout<<"|  _/_/_/    _/_/_/      _/        _/_/_/               |"<<endl;
cout<<"|                                                       |"<<endl;
cout<<"|             ****************************              |"<<endl;
cout<<"|                                                       |"<<endl;   
cout<<"|      _/_/                                      _/     |"<<endl;
cout<<"|   _/    _/    _/    _/    _/_/      _/_/_/  _/_/_/_/  |"<<endl;
cout<<"|  _/  _/_/    _/    _/  _/_/_/_/  _/_/        _/       |"<<endl;
cout<<"| _/    _/    _/    _/  _/            _/_/    _/        |"<<endl;
cout<<"|  _/_/  _/    _/_/_/    _/_/_/  _/_/_/        _/_/     |"<<endl;
cout<<"|                                                       |"<<endl;
cout<<"|-------------------------------------------------------|"<<endl;
}






//main menu
void mainmenu()
{

cout<<"|--------------------------|"<<endl;
cout<<"| Welcome to the Main Menu |"<<endl;
cout<<"|--------------------------|"<<endl;
cout<<"|  1.) Start Game!         |"<<endl;
cout<<"|  2.) About               |"<<endl;
cout<<"|  3.) Credits             |"<<endl;
cout<<"|  4.) Exit Game...        |"<<endl;
cout<<"|--------------------------|"<<endl;
cout<<"\n";
cout<<"\n";
cout<<"What would you like to do...?  ";
}


void aboutscreen()
{
     cout<<"|----------------------------------------------------------------------------|"<<endl;
     cout<<"| This game is a text based RPG.  The game will put you into many fights and |"<<endl;
     cout<<"| situations during which you must use your wits and cunning abilities to    |"<<endl; 
     cout<<"| defeat the challenges set before you.                                      |"<<endl;           
     cout<<"|                                                                            |"<<endl;
     cout<<"| Remember that the game is 'Hardcore' meaning, if you die you will have to  |"<<endl;
     cout<<"| start over.                                                                |"<<endl;
     cout<<"|                                                                            |"<<endl;
     cout<<"|                                                                            |"<<endl;
     cout<<"|         Good Luck,                                                         |"<<endl;
     cout<<"|         Have Fun!                                                          |"<<endl;
     cout<<"|                                                                            |"<<endl;
     cout<<"|----------------------------------------------------------------------------|"<<endl;
system("PAUSE");
}

void creditscreen()
{
     cout<<"|----------------------------------------------------------------------------|"<<endl;
     cout<<"| Ascii Art found at, http://www.chris.com/ascii/                            |"<<endl;
     cout<<"| Ascii text done at, http://www.network-science.de/ascii/                   |"<<endl;
     cout<<"| Game developed by, Zach Easley                                             |"<<endl;
     cout<<"|----------------------------------------------------------------------------|"<<endl;
     system("PAUSE");     
}     
};                                                     
