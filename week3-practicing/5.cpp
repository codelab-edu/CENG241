#include <iostream>
using namespace std;
  class One{
   public:
    int x;
     void print(){
        cout<<"Hello world"<<"\n"<<x;
     }
  };
int main()
{
 One obj;
   obj.x=5;
    obj.print();
}