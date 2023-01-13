#include<iostream>
using namespace std;

int main(){
   double m,h;

    cout << "身長 : 体重 = ";

    cin >> h >> m;

    h=h/100;

    double bmi = m/(h*h);

    cout << "BMI: " << bmi << endl; 

    return 0;
}