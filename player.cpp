#include "player.hpp"
#include "board.hpp"
//#include "card.hpp"
#include <iostream>
#include <vector>

player::player(int playerAmount){
    this->playerAmount = playerAmount;
}

int player::dice(){
    int dice1 = ((rand() % 6) + 1); 
    int dice2 = ((rand() % 6) + 1); 
    std::cout<<"Dice 1: "<<dice1<< "Dice 2: "<<dice2<<"\n"<<"Total: "<<dice2 + dice1<<std::endl; 
    return dice1 + dice2; 
}


void player::getName(){
    for(int i = 1; i <= playerAmount; i++){
        std::cout<<"Player "<<i<< "Enter Your Name: "<<std::endl; 
        std::cin>>playerName; 
        playerLocate.push_back(playerName);
        playerName.clear(); 
    }
}

void player::goFirst(){
    char roll;
    std::vector<int> playerRolls;

    std::cout<<"Roll to see who goes first"<<std::endl; 
    for(int i = 1; i <= playerAmount; i++){
        std::cout<<"Player "<<i<< "press 'r' to roll: "<<std::endl; 
        while(i <= playerAmount){
            std::cin>>roll;
            if(roll == 'r'){
                playerRolls[i] = dice(); 
            }
          
        }
        
    }
}


player::~player(){

}