
class properties{
  private:
        int price;
        int rent;
        int location;   
  public:
      bool owned = false; 
      properties :: properties(int rent, int price, int location, bool owned);
      void properties :: displayPrice();
};