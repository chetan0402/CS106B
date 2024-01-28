#include<iostream>
#include<math.h>
#include<array>
using namespace std;

array<float,2> quadratic(float a,float b,float c){
    array<float,2> result;
    result[0]=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    result[1]=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    return result;
}

int main(){
    float a,b,c;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;

    array<float,2> results=quadratic(a,b,c);
    cout << "Roots: " << results[0] << "   " << results[1];
    return 0;
}