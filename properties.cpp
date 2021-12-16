#include <iostream>
#include <vector>
#include <string>
#include "board.hpp"
#include "properties.hpp"

// std::vector<std::string> boardNames = {"GO", "BR: MEDITERANEAN AVENUE", "BR: BALTIC AVENUE", "INCOME TAX", "READING RAILROAD", 
//         // "LB: ORIENTAL AVENUE", "CHANCE", "LB: VERMONT AVENUE", " LB: CONNECTICUT AVENUE", "JAIL", 
//         // "PK: ST. CHARLES PLACE", "ULT: ELECTRIC COMPANY", "PK: STATES AVENUE","PK: VIRGINIA AVENUE", "PENNSYLVANIA RAILROAD", 
//         // "ORNG: ST. JAMES PLACE", "COMMUNITY CHEST", "ORNG: TENNESSEE AVENUE", "ORNG: NEW YORK AVENUE", "FREE PARKING", 
//         // "RED: KENTUCKY AVENUE", "CHANCE", "RED: INDIANA AVENUE", "RED: ILLINOIS AVENUE", "B & O RAILROAD", 
//         // "YELLOW: ATLANTIC AVENUE", "YELLOW: VENTNOR AVNUE", "ULT: WATER WORKS", "YELLOW: MARVIN GARDENS", "GO TO JAIL", 
//         // "GREEN: PACFIC AVENUE", "GREEN: NORTH CAROLINA AVENUE", "COMMUNITY CHEST", "GREEN: PENNSYLVANIA AVENUE", "SHORT LINE", "CHANCE", "LUXURY TAX", 
//         // "BLUE: PARK PLACE", "BLUE: BOARDWALK"}; 

properties :: properties(int rent, int price, int location, bool owned){
    this-> price = price;
    this-> rent = rent; 
    this-> location = location;
    this -> owned = owned; 
    
}
void properties :: displayPrice(){
    std::cout<<this->price<<std::endl; 
}

