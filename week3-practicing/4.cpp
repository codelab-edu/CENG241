#include <iostream>
using namespace std;
template <typename T>
struct TelemetryProcessor{
    T calibrationFactor;  

    void testPassByValue(T val){
        val = val * calibrationFactor;

    }
    void testPassByReference(T& val){
        val = val * calibrationFactor;
    }

};

int main(){
    TelemetryProcessor<double> processor;
    double userReading;

    cout<<"Enter the calibration factor: "<<endl;
    cin>>processor.calibrationFactor;

    cout<<"Enter a raw sensor reading value (e.g., 25.5): "<<"\n";
    cin>>userReading;

    cout<<"Before pass-by-value function, userReading ="<<userReading<<"\n";
    
    processor.testPassByValue(userReading);
    cout<<"After pass-by-value function, userReading = "<<userReading<<"\n";

    processor.testPassByReference(userReading);
    cout<<"After pass-by-reference function, userReading = "<<userReading<<endl;
    
    return 0;
}
