//  WarStart_FirasAtt4.cpp
//  Game_War
//
//  Created by Shawn Gritzmacher on 10/22/22.
//  Copyright © 2022 Shawn Gritzmacher. All rights reserved.
//
#if WarStart4_Part2_A


#include <stdio.h>
#include <iostream>
#include <time.h>


using namespace std;

//declare numberOfPlayers, 2 - next its letteers string,  for numberOfPlayers whats being collected in the array, words
constexpr int numberOfPlayers = 2;
string playerNames[numberOfPlayers];


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
            
            //looking off the guessing game
            //number of players in the for loop (here to gather a name) and declare the array atop,
            //another for loop inside for presenting the name of the turn
            //number of players for loop is a short curly bracket in front of any other activity.
        
            for(int i = 0; i < numberOfPlayers; i++)
            {
                cout << "please enter your name: " << endl;
                cin >> playerNames[i];
                //declare at top numberOfPlayers and playerNames[i]
            
            }
            //according to Guessing2game file the curly bracket goes here.
            
            
            
            //4:47
            //supposed to be an empty array.
            int PlayerCards[numberOfPlayers] = {};
                
            //for loop for setting up the names to the turns.
            //created extra for loop per guessinggame -
            for(int i = 0; i < numberOfPlayers; i++)
            {
                cout << "Hello " << playerNames[i] << " Good Luck! " << endl;
                
                int playerTurn = 1;
                
                //for loop for regulating turns and activity inside.
                for(int i = 0; i < playerTurn; i++)
                {
                    //tried [0], and below [1].  Guessing2game didn't do this.
                    //cout << "Hello " << playerNames[1] << " your turn - " << endl;
                    
                    
                    //4:48
                    //PlayerCards[i] = flipcard;
                    
                    
                    //create another for loop with array for flipping - on hold....
                    //we want the flow of flips to be 2 flips.  do 1 flip for now.
                    //now construct the flip of card for player 1
                    cout << " flip a card press 1 " << endl;
                    int flipCard;
                    cin >> flipCard;
                    
                    if(flipCard == 1)
                    {
                        
                        //firas notes.
                        //"this will store the flipped card in the the array you made"
                        //PlayerCards[i] = flipCard;
                        //whats generating the random numbers - has to be the rand() function formula.
                        int flipCard = 1 + rand() % 8;
                        PlayerCards[i] = flipCard;
                        
                        cout << "The card is: " << flipCard << " " << endl;
                        //cout << "Player 1 Card is: " << PlayerCards[i] << "  " << endl;
                        //cout << "Player 2 Card is: " << PlayerCards[i] << "  " << endl;
                        
                        //blocked below
                        //action to flip a card
                        //player deck
                        //int playerDeckOne[10] = {2,3,4,5,6,7,8,9,10,11};
                        
                        //blocked out this block. based on random.
                        //int flipCard = 1 + rand() % 8;
                        //accomplished flip from code,
                        //cout << "The card is: " << flipCard << endl;
                        //present result
                        
                        
                        //2nd part to firas notes. creating a winner between 2 players competing.
                        //4:50
                        //if(PlayerCards[0] > PlayerCards[1])
                        //{
                         //cout << "Player 1 wins! " << endl;
                        //}
                        
                        if(playerTurn == 2)
                       {
                           
                           if(PlayerCards[0] > PlayerCards[1])
                           {
                               
                               cout << playerNames[0] << " wins! " << endl;
                           }
                           else
                           {
                               cout << playerNames[1] << " wins! " << endl;
                           }
                       }
                        
                        
                }
                    
    
                        
                
                   
                
                
                
                    
                    if(flipCard != 1)
                    {
                        cout << "Exit" << endl;
                    }
                    
                    //summary of cards
                    
                    //here to compare the generated cards and determin the winner.
        
                }
                
                
                
                
                
                
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








