#include <iostream>
using namespace std;

class Rectange{
    private: 
     int width, length;

     public:
      void setWidth(int);
      void setLength(int);
      int area();
};

void Rectange::setWidth(int w){
    width=w;
}
void Rectange::setLength(int lng){
    length=lng;
}
int Rectange::area(){
    return length*width;
}
int main(){
    Rectange r;
    r.setWidth(5);
    r.setLength(3);
    cout<<r.area();
}