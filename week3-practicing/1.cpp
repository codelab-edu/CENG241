#include <iostream>
using namespace std;

const int max=10;

void f(int& x){
    x=10;
    cout<<"x="<<x<<" max= "<<::max<<endl;
}
int main()
{
int a=8;
 cout<<"a="<<a<<" max= "<<::max<<"\n";
 f(a);
 cout<<"a="<<a<<" max= "<<::max<<endl;

 return 0;

}