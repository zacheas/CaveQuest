#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

class narration
{
      public:
             void opening()
             {
              cout<<"You hear the large ship come to a halt."<<endl;
              Sleep(1500);
              cout<<"\n";
              
              cout<<"From above you hear the captain yell..."<<endl; 
              Sleep(1500);
              cout<<"\n";
              
              cout<<"'Hail! For we have arrived at Marrenhill!'"<<endl;
              Sleep(1500);
              cout<<"\n";
              
              cout<<"You swiftly hop up from your cot and head outside..."<<endl;
              cout<<"\n";
             }
             
             void marrenhill()
             {
             cout<<"Welcome to Merrenhill, a Northern Nordic fishing village."<<endl;
             cout<<"In Merrenhill you can talk to the merchant to trade"<<endl;
             cout<<"or go to the tavern to do some gambling."<<endl;
             cout<<"\n";
             
             cout<<"A cave system is said to be beneath it that contains"<<endl;
             cout<<"incomprehensible amounts of wealth, it is for this very "<<endl;
             cout<<"reason why you have made this journey."<<endl;
             cout<<"\n";
             
             cout<<"|------------------------------------|"<<endl;
             cout<<"| 1.) Trade    2.) Go to the Tavern  |"<<endl;
             cout<<"|                                    |"<<endl;
             cout<<"| 3.) Make your way to The Cave.     |"<<endl;
             cout<<"|------------------------------------|"<<endl;
             cout<<"\n";
             
             }
             
             void caveOutside()
             {
             cout<<"You see the massive cave and slowly make your way down inside..."<<endl;
             }
             
};

