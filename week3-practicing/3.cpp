#include <iostream>
#include <cstdlib>
using namespace std;

namespace Math{

    class Calculator{
        public:
        int add(int a,int b){
              return a+b;
        }
        double add(double a, double b){
            return a+b;
                }
        int subtract(int a,int b){
            return a-b;
        }
        double subtract(double a, double b){
            return a-b;
        }
         int multiply(int a,int b){
              return a*b;
        }
        double multiply(double a, double b){
            return a*b;
                }
         int divide(int a,int b){
              if(b==0){
                cout<<"Division by zero error!"<<"\n";
                exit 1;
              }
              return a/b;
        }
        double divide(double a, double b){
            if(b==0.0){
                cout<<"Division by zero error!"<<"\n";
                exit 1;
            }
            return a/b;
        }
    };
}

int main()
{
 Math::Calculator calc;
 int x,y;
 double t,k;
 char opInt, opDouble;

 cout<<"Enter two integers: "<<"\n";
 cin>>x>>y;
 cout<<"Enter two double: "<<"\n";
 cin>>t>>k;

 cout<<"Enter the desired operation to perform on integer numbers: "<<endl;
 cin>>opInt;
 cout<<"Enter the desired operation to perform on double numbers:"<<endl;
 cin>>opDouble;

 switch (opInt){
    case '+': cout<<calc.add(x,y)<<endl;
    break;
    case '-':cout<<calc.subtract(x,y)<<endl;
    break;
    case '*':cout<<calc.multiply(x,y)<<endl;
    break;
    case '/':cout<<calc.divide(x,y)<<endl;
    break;
    default: cout<<"Invalid operation!";
 }
 
 switch (opDouble){
    case '+': cout<<calc.add(t,k)<<endl;
    break;
    case '-':cout<<calc.subtract(t,k)<<endl;
    break;
    case '*':cout<<calc.multiply(t,k)<<endl;
    break;
    case '/':cout<<calc.divide(t,k)<<endl;
    break;
    default: cout<<"Invalid operation!";
 }

 return 0;

}