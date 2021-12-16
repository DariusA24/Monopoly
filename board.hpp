#include <iostream>
#include "properties.hpp"
#include <vector>
#include <string>
#include <utility>

class board{
    private:
    int price;
    int rent;
    int location; 
    properties *go = new properties(0, 0, 0, 0); 
    //brown
    properties *MEDITERANEAN_AVENUE = new properties(2,60,1,0);
    properties *BALTIC_AVENUE = new properties(4, 100, 2, 0); 
    //income tax
    properties *INCOME_TAX = new properties(0, 0, 3, 0); 
    //railroad #1
    properties *READING_RAILROAD = new properties(0, 0, 4, 0);
    //light blue 
    properties *ORIENTAL_AVENUE = new properties(6, 100, 5, 0); 
    properties *VERMONT_AVENUE = new properties(6, 100, 6, 0); 
    properties *CONNECTICUT_AVENUE = new properties(8, 120, 7, 0); 
    //jail
    properties *JAIL = new properties(0, 0, 8, 0); 
    //pink
    properties *ST_CHARLES_PLACE = new properties(10, 140, 9, 0); 
    //ult
    properties *ELECTRIC_COMPANY = new properties(10, 0, 10, 0); 
    properties *STATES_AVENUE = new properties(0, 140, 11, 0); 
    properties *VIRGINIA_AVENUE= new properties(12, 160, 12, 0); 
    //rail road #2
    properties *PENNSYLVANIA_RAILROAD = new properties(0, 0, 13, 0); 
    //orange
    properties *ST_JAMES_PLACE = new properties(14, 180, 14, 0); 
    //chest
    properties *COMMUNITY_CHEST1 = new properties(0, 0, 15, 0); 
    properties *TENNESSEE_AVENUE = new properties(14, 180, 16, 0); 
    properties *NEW_YORK_AVENUE = new properties(16, 200, 17, 0); 
    //free parking 
    properties *FREE_PARKING = new properties(0, 0, 18, 0);
    //red 
    properties *KENTUCKY_AVENUE = new properties(18, 220, 19, 0);
    //chance 
    properties *CHANCE1 = new properties(0, 0, 20, 0); 
    properties *INDIANA_AVENUE = new properties(18, 220, 21, 0); 
    properties *ILLINOIS_AVENUE = new properties(20, 240, 22, 0); 
    //railroad #3
    properties *B_O_RAILROAD = new properties(0, 0, 23, 0); 
    //yellow
    properties *ATLANTIC_AVENUE = new properties(22, 260, 24, 0); 
    properties *VENTNOR_AVNUE = new properties(22, 260, 25, 0); 
    //ult 2
    properties *WATER_WORKS = new properties(0, 0, 26, 0); 
    properties *MARVIN_GARDENS = new properties(24, 280, 27, 0); 
    //go to jail
    properties *GO_TO_JAIL = new properties(0, 0, 28, 0); 
    //green
    properties *PACFIC_AVENUE = new properties(26, 300, 29, 0); 
    properties *NORTH_CAROLINA_AVENUE = new properties(26, 300, 30, 0);
    //chest 
    properties *COMMUNITY_CHEST2 = new properties(0, 0, 31, 0); 
    properties *PENNSYLVANIA_AVENUE = new properties(28, 320, 32, 0); 
    //railroad # 4
    properties *SHORT_LINE = new properties(0, 0, 33, 0); 
    //chance
    properties *CHANCE2 = new properties(0, 0, 34, 0); 
    //tax
    properties *LUXURY_TAX = new properties(0, 0, 35, 0); 
    //blue
    properties *PARK_PLACE = new properties(35, 350, 36, 0); 
    properties *BOARDWALK = new properties(50, 400, 37, 0); 
    
    
    public:
        bool owned = false; 
        board::board(); 
        board::board(int price, int rent, int location, bool owned); 
        void board :: showPrice();
};