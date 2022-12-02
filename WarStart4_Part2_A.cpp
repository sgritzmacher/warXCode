//  WarStart_FirasAtt4.cpp
//  Game_War
//
//  Created by Shawn Gritzmacher on 10/22/22.
//  Copyright © 2022 Shawn Gritzmacher. All rights reserved.
//
#if WarStart4_Part2_A
// 12/1/22 - updated changes - 

#include <stdio.h>
#include <iostream>
#include <time.h>


using namespace std;

//declare numberOfPlayers, 2 - next its letteers string,  for numberOfPlayers whats being collected in the array, words
constexpr int numberOfPlayers = 2;
string playerNames[numberOfPlayers];
int PlayerCards[numberOfPlayers] = {};


constexpr int g_playGame = 1;
constexpr int g_exitGame = 2;
//declared variables start here.


int main()
{
    //switch structure
    
    srand((unsigned)time(0));
    
    cout << "welcome to the game of war " << endl;
    cout << "please press 1 to play " << endl;
    cout << "press 0 to exit " << endl;
    int userChoice;
    cin >> userChoice;
    
    
    switch(userChoice)
    {
            
        case g_playGame:
        {
            
            
        
            for(int i = 0; i < numberOfPlayers; i++)
            {
                cout << "please enter your name: " << endl;
                cin >> playerNames[i];
               
            }
            
            
            //for loop for setting up the names to the turns.
            //created extra for loop per guessinggame -
            for(int i = 0; i < numberOfPlayers; i++)
            {
                cout << "Hello " << playerNames[i] << " Good Luck! " << endl;
 
                cout << " flip a card press 1 " << endl;
                int userInput;
                cin >> userInput;

                if(userInput == 1)
                {

                    //firas notes.
                    //"this will store the flipped card in the the array you made"
                    //PlayerCards[i] = flipCard;
                    //whats generating the random numbers - has to be the rand() function formula.
                    int flipCard = 1 + rand() % 8;
                    PlayerCards[i] = flipCard;

                    cout << "The card is: " << flipCard << " " << endl;

                 }
                
                    
                    if(userInput != 1)
                    {
                        cout << "Exit" << endl;
                    }
                    
                    //summary of cards
                    
                    //here to compare the generated cards and determin the winner.
        
                }
                
                    if(PlayerCards[0] > PlayerCards[1])
                   {

                       cout << playerNames[0] << " wins! " << endl;
                   }
                   else
                   {
                       cout << playerNames[1] << " wins! " << endl;
                   }
           
               }
                
                
                
            
                //store each player card flipped just inside the for loop
                //we need to find a way to synch the array for player to this
                
                    
                case g_exitGame:
                {
                    cout << "Thank you for playing " << endl;
                    break;
                    
                }
                    
                    
                default:
                {
                    cout << "invalid entry try again later. " << endl;
                    break;
                }
            
            
            
            
            
        
            
            
    
            
    }
        
        
    
    
    
    
    
    
}









#endif








