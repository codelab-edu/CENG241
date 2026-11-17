#include <iostream>
#include <math.h>
using namespace std;

class Circel{
  private:
   double radius;
   public:
   void setRadius(double);
   double area();
   double perimeter();

};

void Circel::setRadius(double newRadius){
    radius = newRadius;
    if(radius < 0){
        radius = 0;
    }

}
double Circel::area(){
    return radius * radius * 3.14;
}
double Circel::perimeter(){
    return 2 * radius * 3.14;
}

int main()
{
    Circel c;
    c.setRadius(4.0);
    cout<<"area: "<<c.area()<<endl;
    cout<<"perimeter: "<<c.perimeter()<<endl;
}
