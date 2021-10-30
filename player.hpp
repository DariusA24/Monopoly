#include <iostream>
#include <vector> 
#include <string>

class player{
    private: 
        int playerMoney = 1500;
        std::vector <std::string> playerProperty;
        std::string playerName;
        std::vector <std::string> playerLocate; 
    
    public:
        int playerAmount;
        player::player(int amountPlayers);
        int player::dice(); 
        void player::getName();
        void player::goFirst();
};