#include <iostream>
#include <cstdlib>
using namespace std;

class FuelTank{
    private:
    int fuel;
    
    public:
     void initialize(int);
      int check(){
        return fuel;
     }
     void refuel(int amount);
     void consume(int amount);
};

void FuelTank::initialize(int x){
    fuel=x;
}
void FuelTank::refuel(int x){
    fuel=+x;
}
void FuelTank::consume(int x){
     if(fuel<x)
      cout<<"Not enough fuel in the tank!"<<endl;
     else
      fuel=-x;
}

int main(){
    FuelTank r;
    int a;
     char option;
    cout<<"Enter amount of tank initialize: "<<"\n";
     cin>>a;
      r.initialize(a);
      do{
        cout<<"C-print amount fuel\n U-use fuel\n R-refuel in tank\n Q-quit\n:";
         cin>>option;
          if(option=='C'){
            cout<<"amount: "<<r.check()<<endl;
          }
          else if(option=='U'){
            cout<<"Enter that u will use amount: "<<endl;
             cin>>a;
              r.consume(a);
          }
          else if(option=='R'){
            cout<<"Enter that u will add amount: "<<endl;
             cin>>a;
             r.refuel(a);
          }
          else if(option=='Q'){
            cout<<"Exiting..."<<endl;
          }
          else{
           cout<<"Error choosen!"<<"\n";
        }
          
        }while(option!='Q');
      
      return 0;
}