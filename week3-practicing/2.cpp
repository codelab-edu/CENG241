#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int *grades=new int[n];

    for(int i=0;i<n;i++){
        cin>>grades[i];
    }
   
    delete[] grades;
    return 0;
}