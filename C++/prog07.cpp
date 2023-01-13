#include<iostream>
using namespace std;

int main(){
    int i;
    string a;

    cin >> a;
    
    for(i=a.size()-1;i>=0;i--){
        cout << a[i];
    }

    cout << "\n";

    return 0;
}