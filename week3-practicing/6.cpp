#include <iostream>
using namespace std;

class Two{
    public:
     int i;
     void print(){
        x=2.5;
         cout<<"i="<<i<<" x="<<x<<endl;}
    private:
    float x;
     };

    int main(){

        Two obj;
         obj.i=5;
          obj.print();
          /*  obj.x=2; */
    }
